#include "ffmpgegvideorecorder.h"

AVFrame *ff_videoFrame = nullptr;
uint8_t ff_rawFrame[640*512*4];
AVCodecContext *cctx = nullptr;
SwsContext *swsCtx = nullptr;
int ff_frameCounter = 0;
AVFormatContext *ofctx = nullptr;
AVOutputFormat *oformat = nullptr;
int ff_fps = 30;
int ff_width = 640;
int ff_height = 512;
int ff_bitrate = 1500;

void ffmpeg_pushFrame(uint8_t *data){
    int err;
    if (!ff_videoFrame) {
        ff_videoFrame = av_frame_alloc();
        ff_videoFrame->format = AV_PIX_FMT_YUV420P;
        ff_videoFrame->width = cctx->width;
        ff_videoFrame->height = cctx->height;

        if ((err = av_frame_get_buffer(ff_videoFrame, 32)) < 0) {
            std::cout <<  "Failed to allocate picture" << err << std::endl;
            return;
        }
    }

    if (!swsCtx) {
        //swsCtx = sws_getContext(cctx->width, cctx->height, AV_PIX_FMT_RGB24, cctx->width, cctx->height, AV_PIX_FMT_YUV420P, SWS_BICUBIC, 0, 0, 0);
        swsCtx = sws_getContext(cctx->width, cctx->height, AV_PIX_FMT_ARGB, cctx->width, cctx->height, AV_PIX_FMT_YUV420P, SWS_BICUBIC, nullptr, nullptr, nullptr);
    }

    int inLinesize[1] = { 3 * cctx->width };

    // From RGB to YUV
    sws_scale(swsCtx, (const uint8_t * const *)&data, inLinesize, 0, cctx->height, ff_videoFrame->data, ff_videoFrame->linesize);
    //sws_scale(swsCtx, &data, inLinesize, 0, cctx->height, ff_videoFrame->data, ff_videoFrame->linesize);
    //std::cout << "cctx->width = " << cctx->width << "cctx->height  = " << cctx->height << std::endl;

    ff_videoFrame->pts = (1.0/30.0)*90000*(ff_frameCounter++);

    //std::cout << ff_videoFrame->pts <<" " << cctx->time_base.num << " " << cctx->time_base.den << " " << ff_frameCounter<< std::endl;

    if ((err = avcodec_send_frame(cctx, ff_videoFrame)) < 0) {
        std::cout << "Failed to send frame" << err <<std::endl;
        return;
    }
AV_TIME_BASE;
    AVPacket pkt;
    av_init_packet(&pkt);
    pkt.data = NULL;
    pkt.size = 0;
    pkt.flags |= AV_PKT_FLAG_KEY;

    if (avcodec_receive_packet(cctx, &pkt) == 0) {
        static int counter = 0;
                if (counter == 0){
            FILE *fp = fopen("dump_first_frame1.dat", "wb");
            fwrite(pkt.data, pkt.size,1,fp);
            fclose(fp);
        }
        //std::cout << "pkt key: " << (pkt.flags & AV_PKT_FLAG_KEY) <<" " << pkt.size << " " << (counter++) << std::endl;
        uint8_t *size = ((uint8_t*)pkt.data);
        //std::cout << "first: " << (int)size[0] << " " << (int)size[1] << " " << (int)size[2] << " " << (int)size[3] <<" "  << (int)size[4] << " " << (int)size[5] << " " << (int)size[6] << " " << (int)size[7] << std::endl;

        //av_interleaved_write_frame(ofctx, &pkt);
        av_write_frame(ofctx, &pkt);
        av_packet_unref(&pkt);
    }
}

void ffmpeg_finish() {
    //DELAYED FRAMES
    AVPacket pkt;
    av_init_packet(&pkt);
    pkt.data = NULL;
    pkt.size = 0;

    for (;;) {
        avcodec_send_frame(cctx, NULL);
        if (avcodec_receive_packet(cctx, &pkt) == 0) {
            //av_interleaved_write_frame(ofctx, &pkt);
            av_write_frame(ofctx, &pkt);

            av_packet_unref(&pkt);
        }
        else {
            break;
        }
    }

    av_write_trailer(ofctx);
    if (!(oformat->flags & AVFMT_NOFILE)) {
        int err = avio_close(ofctx->pb);
        if (err < 0) {
            std::cout << "Failed to close file" << err <<std::endl;
        }
    }
}

void ffmpeg_free(){
    if (ff_videoFrame) {
        av_frame_free(&ff_videoFrame);
    }
    if (cctx) {
        avcodec_free_context(&cctx);
    }
    if (ofctx) {
        avformat_free_context(ofctx);
    }
    if (swsCtx) {
        sws_freeContext(swsCtx);
    }
}


int ffmpeg_init()
{
    av_register_all();
    avcodec_register_all();

    oformat = av_guess_format(nullptr, "test.mp4", nullptr);
    if (!oformat)
    {
        std::cout << "can't create output format" << std::endl;
        return -1;
    }
    //oformat->video_codec = AV_CODEC_ID_H265;
    oformat->video_codec = AV_CODEC_ID_H264;

    int err = avformat_alloc_output_context2(&ofctx, oformat, nullptr, "test.mp4");

    if (err)
    {
        std::cout << "can't create output context" << std::endl;
        return -1;
    }

    AVCodec *codec = nullptr;

    codec = avcodec_find_encoder(oformat->video_codec);
    if (!codec)
    {
        std::cout << "can't create codec" << std::endl;
        return -1;
    }

    AVStream *stream = avformat_new_stream(ofctx, codec);

    if (!stream)
    {
        std::cout << "can't find format" << std::endl;
        return -1;
    }

    cctx = avcodec_alloc_context3(codec);

    if (!cctx)
    {
        std::cout << "can't create codec context" << std::endl;
        return -1;
    }

    stream->codecpar->codec_id = oformat->video_codec;
    stream->codecpar->codec_type = AVMEDIA_TYPE_VIDEO;
    stream->codecpar->width = ff_width;
    stream->codecpar->height = ff_height;
    stream->codecpar->format = AV_PIX_FMT_YUV420P;
    stream->codecpar->bit_rate = ff_bitrate * 1000;
    avcodec_parameters_to_context(cctx, stream->codecpar);
    cctx->time_base = (AVRational){ 1, 1 };
    cctx->max_b_frames = 2;
    cctx->gop_size = 12;
    cctx->framerate= (AVRational){ff_fps, 1};

    if (stream->codecpar->codec_id == AV_CODEC_ID_H264) {
        av_opt_set(cctx, "preset", "ultrafast", 0);
    }
    else if (stream->codecpar->codec_id == AV_CODEC_ID_H265)
    {
        av_opt_set(cctx, "preset", "ultrafast", 0);
    }

    avcodec_parameters_from_context(stream->codecpar, cctx);

    if ((err = avcodec_open2(cctx, codec, NULL)) < 0) {
        std::cout << "Failed to open codec" << err << std::endl;
        return -1;
    }

    if (!(oformat->flags & AVFMT_NOFILE)) {
        if ((err = avio_open(&ofctx->pb, "test.mp4", AVIO_FLAG_WRITE)) < 0) {
            std::cout << "Failed to open file" << err << std::endl;
            return -1;
        }
    }

    if ((err = avformat_write_header(ofctx, NULL)) < 0) {
        std::cout << "Failed to write header" << err << std::endl;
        return -1;
    }
    //return -1;

    //av_dump_format(ofctx, 0, "test.mp4", true);
}
/*
    uint8_t *frameraw = new uint8_t[640*512*4];
    memset(frameraw, 222, 640*512*4);
    for(int i =0;i<60;++i){
        ffmpeg_pushFrame(frameraw);
    }*/
void ffmpeg_finalize(){
    //delete [] frameraw;
    ffmpeg_finish();
    //ffmpeg_free();
}
