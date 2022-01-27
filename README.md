# ShotTaker
Re-implementation of Sy Brand ShotTaker class for the purpose of learning C++ interfacing the FFmpeg C APIs.

This code is based on the code written by Sy Brand in youtube video "C++ GUIs with coroutines, WinUI3, C++/WinRT and FFMPEG" at around 28 minutes in (https://youtu.be/OSYXGyMw9GE?t=1636).

I have also used CMake project based on  youtube video "LIVESTREAM: Setting up FFmpeg and OpenGL in C++ for real-time video processing" by user Bartholomew that seems to go through ALL the steps required to configure and build a cross-platform app usign FFmpeg in C++ FROM SCRATCH (https://youtu.be/MEMzo59CPr8 ).

# manual steps to setup on macOS

* Install ffmpeg with brew (See example log in gist https://gist.github.com/kjelloh/51b02187d5b8ff2dd3fcdf58b5fda1e8#file-brew_install_ffmpeg_220127-log)
* For your information - FFmpeg brew installation seems to be located as follows,
``` 
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libavcodec.dylib
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libavdevice.dylib
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libavfilter.dylib
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libavformat.dylib
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libavutil.dylib
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libswresample.dylib
/usr/local/Cellar/ffmpeg/4.4.1_5/lib/libswscale.dylib
```

```
/usr/local/Cellar/ffmpeg/4.4.1_5/include
```
* There is a CMakeLists.txt but it DOES NOT WORK (Can we get something better than Cmake already?)
* For now there is vscode json files to build with Gcc 13 on macOS.