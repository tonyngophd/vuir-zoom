[33m91816bf[m[33m ([m[1;36mHEAD -> [m[1;32mtwo_14mm[m[33m, [m[1;31morigin/two_14mm[m[33m)[m first time side-by-side works, but s positions are still off
[33mb3ff0f7[m[33m ([m[1;31morigin/master[m[33m, [m[1;31morigin/HEAD[m[33m, [m[1;32mmaster[m[33m, [m[1;32mmain[m[33m)[m VuIR Zoom commit 2
[33m2dc86a7[m VuIR Zoom work for 2-4 bosons
[33m661a519[m Add ability to move radiometry ROI on live display
[33m8178838[m Configure s3 and github deployment through ci
[33m22e6e12[m Build appimage as part of linux ci
[33m3e58821[m Attempt to fix coverity build
[33m60304cc[m Update readme information and add ci link
[33me617b09[m First pass at travis build
[33m68f4ec4[m qmake from Qt Creator can't find libusb-1.0: Set PKG_CONFIG path for OSx, assuming brew was used
[33mede114e[m Update README instructions on how to RUN the application via Qt Creator on OSx
[33m8f79956[m Don't return temporary objects for use in qml
[33m930ac0b[m Add support for Lepton radiometric part number 500-0771-01
[33m5ee85aa[m Add CCI spotmeter for radiometric Leptons
[33mebbd0ac[m Add SysGainMode function to video controls
[33m07894c9[m Update Lepton SDK to 3.3.13
[33m7d7a5cd[m Use QML binding rather than change events to prevent extra property setting emissions
[33mbc7f785[m Add radiometric tlinear resolution switch
[33m1c878d5[m Mutually exclude access to cci functions
[33m92f3087[m LeptonVariation: Cache serial number, software versions, and part number
[33m1854a38[m Make it pass desktop-file-validate
[33mc3a8ed0[m Use linuxdeployqt for linux appimage builds
[33m304eb95[m Add support for runtime AGC change in v1.x firmware
[33mbbb7469[m Update readme to indicate supported platforms
[33mc0541c4[m Support PT1 image sizes other than 80x60
[33m19827d2[m Added application screenshot to readme
[33me315486[m Reorganize qml structure and add boson-specific controls
[33mf8b919a[m Radiometry on Boson isn't obvious, switch to hw color mode and support AGC and LUT
[33m45ebb3a[m Update libuvc to fix os x deployment target at 10.7
[33m89840bd[m Added Boson CCI interface sdk implementation
[33m9f4c568[m Updated readme
[33mf7c680a[m Fix label on FFC button
[33m3a91199[m Support video from FLIR Boson (320p)
[33m2f34668[m Force PID/VID for PT1 so we don't pick up system webcam by accident
[33m01ff23b[m Added create_linux_appimage.sh script adapted from QGC
[33m796611c[m Update libuvc to fix inability to stream video certain Linux hw
[33mb073f70[m Fixed up plist for macos build
[33me736014[m Remove build cruft from qgc, and link static to libuvc for linux
[33m22af870[m Don't specify installer for default build
[33mc013e57[m Fix up linux build
[33md9fc082[m Fix up mac build
[33mbb46792[m Pull in build scripts from QGroundControl, who have a great cross-platform build setup
[33mf87df46[m Organized project sources
[33mead2182[m Added project license
[33m38a352f[m Added project readme
[33m08fc4cc[m Added macos app icons
[33mcf9badb[m Added logo to app ui
[33m2d64b25[m Display temperatures on range display
[33m658ed7e[m qmake project file cleanup
[33mdb5bba9[m Fix up libuvc include paths when there is no system version installed
[33m9a02f4f[m properly clean up in case device couldn't be opened
[33m9509f11[m Switch libuvc dependency over to submodule, project properly forked
[33me095c1f[m Added plumbing for radiometry range display
[33m04010b7[m Link with pkg-config
[33mc1ca043[m Dynamic selection of controls based on hardware features
[33md7781f6[m Support getting the default video format from the abstract CCI interface
[33ma27d549[m Support reading PureThermal 1 firmware version for Lepton variation
[33mc5a33c7[m Added Lepton support for Y16 data format
[33ma559496[m A lot of UI cleanup related to display of CCI controls for Lepton
[33m70f9a3f[m More controls
[33m1514f72[m Created components for binding value-type controls, implemented for linear AGC mode
[33m4cc6fce[m Improve FFC reliability by stopping stream while it runs
[33md3678df[m Continue Lepton controls development
[33m91692e1[m Start developing controls layout
[33mcb044c2[m Remove unused UvcVideoProducer::produceContent slot
[33m69a33d2[m Add control styling
[33m332b577[m Wire up Lepton SDK and add FFC button
[33mb5f881e[m Imported lepton base SDK
[33m71dc83d[m Refactor QML connections between UVC acquirer and video producer
[33mf510daf[m Functionality to acquire data from PureThermal 1
[33mbadd91d[m Initial commit of GetThermal project
