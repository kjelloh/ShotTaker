extern "C" {
  // /usr/local/Cellar/ffmpeg/4.4.1_5/include/libavutil/common.h:30:2: error: #error missing -D__STDC_CONSTANT_MACROS / #define __STDC_CONSTANT_MACROS
  // Was used to allow C++ compile with C99 stdlib. BUT C++11 and newer C should have diabaled this problem?
  #define __STDC_CONSTANT_MACROS
  #include <libavutil/imgutils.h>
}
#include "ShotTaker.h"
#include <iostream>

// public:
ShotTaker::ShotTaker(std::string_view filename) {}
ShotTaker::~ShotTaker() {}

std::vector<std::filesystem::path> ShotTaker::take_shots(int n) {
  std::vector<std::filesystem::path> result{};
  return result;
}
// private:
void ShotTaker::InitializeEncode(AVCodecContext* decoder_ctx,AVCodecParameters* codec_params,AVStream* stream) {}
void ShotTaker::InitializeColorSpaceConverter(AVCodecContext* decoder_cts) {}
void ShotTaker::InitializeEncoder(AVCodec* decoder, AVCodecParameters* codec_params){}
void ShotTaker::Cleanup() {}
void ShotTaker::InitializationError(std::string const& err) {}


int main(int argc,char* argv[]) {
  std::cout << "Hello - I am ShotTaker :)";
  return 0;
}
