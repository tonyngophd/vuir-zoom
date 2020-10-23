#ifndef FFMPGEGVIDEORECORDER_H
#define FFMPGEGVIDEORECORDER_H

#include <iostream>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/avutil.h>
#include <libavutil/time.h>
#include <libavutil/opt.h>
#include <libswscale/swscale.h>
}

extern AVFrame *ff_videoFrame;
extern uint8_t ff_rawFrame[];
extern AVCodecContext *cctx;
extern SwsContext *swsCtx;
extern int ff_frameCounter;
extern AVFormatContext *ofctx;
extern AVOutputFormat *oformat;
extern int ff_fps;
extern int ff_width;
extern int ff_height;
extern int ff_bitrate;

#define size640x512x4 1310720
void ffmpeg_pushFrame(uint8_t *data);
void ffmpeg_finish();
void ffmpeg_free();
int ffmpeg_init();
void ffmpeg_finalize();


#endif // FFMPGEGVIDEORECORDER_H
