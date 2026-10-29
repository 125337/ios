@interface MPOriginalImageEntry : NSObject
{
    BOOL _isHDR; // +0x8
    BOOL _isLive; // +0x9
    BOOL _imageReady; // +0xa
    BOOL _videoReady; // +0xb
    NSString * _key; // +0x10
    NSString * _url; // +0x18
    NSString * _cdnFileKey; // +0x20
    double _downloadProgress; // +0x28
    long long _state; // +0x30
    long long _originalWidth; // +0x38
    long long _originalHeight; // +0x40
    long long _orientation; // +0x48
    NSString * _format; // +0x50
    NSString * _colorSpace; // +0x58
    long long _errCode; // +0x60
    NSString * _errMsg; // +0x68
    NSString * _videoUrl; // +0x70
    NSString * _videoKey; // +0x78
    NSString * _videoCdnFileKey; // +0x80
    double _imageProgress; // +0x88
    double _videoProgress; // +0x90
    double _weightImage; // +0x98
    double _weightVideo; // +0xa0
}
- (id)init;
- (long long)safeOrientation;
- (id)key;
- (void)setKey:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)cdnFileKey;
- (void)setCdnFileKey:(id)arg1;
- (double)downloadProgress;
- (void)setDownloadProgress:(double)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)originalWidth;
- (void)setOriginalWidth:(long long)arg1;
- (long long)originalHeight;
- (void)setOriginalHeight:(long long)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (BOOL)isHDR;
- (void)setIsHDR:(BOOL)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (id)colorSpace;
- (void)setColorSpace:(id)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoKey;
- (void)setVideoKey:(id)arg1;
- (id)videoCdnFileKey;
- (void)setVideoCdnFileKey:(id)arg1;
- (double)imageProgress;
- (void)setImageProgress:(double)arg1;
- (double)videoProgress;
- (void)setVideoProgress:(double)arg1;
- (double)weightImage;
- (void)setWeightImage:(double)arg1;
- (double)weightVideo;
- (void)setWeightVideo:(double)arg1;
- (BOOL)imageReady;
- (void)setImageReady:(BOOL)arg1;
- (BOOL)videoReady;
- (void)setVideoReady:(BOOL)arg1;
- (void).cxx_destruct;
@end
