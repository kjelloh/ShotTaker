extern "C" {
    #include <libavformat/avformat.h>
    #include <libavcodec/avcodec.h>
    #include <libswscale/swscale.h>
}
#include <string_view>
#include <filesystem>
#include <vector>

class ShotTaker {
public:
    ShotTaker(std::string_view filename);
    ~ShotTaker();

    std::vector<std::filesystem::path> take_shots(int n);
private:
    void InitializeEncoder(AVCodecContext* decoder_ctx,AVCodecParameters* codec_params,AVStream* stream);
    void InitializeColorSpaceConverter(AVCodecContext* decoder_ctx);
    void InitializeDecoder(AVCodec* decoder, AVCodecParameters* codec_params);
    void Cleanup();
    void InitializationError(std::string const& err);

    AVFormatContext* format_ctx_ = nullptr;
    AVCodecContext* decoder_ctx_ = nullptr;
    AVCodecContext* encoder_ctx_ = nullptr;
    SwsContext* sws_ctx_ = nullptr;
    int video_stream_ = 0;
};
