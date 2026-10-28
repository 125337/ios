@interface WCFinderVideoBasisModel : NSObject
{
    BOOL _isHDR; // +0x8
    unsigned int _videoCodecType; // +0xc
    NSString * _videoFormat; // +0x10
    unsigned long long _bitrate; // +0x18
    unsigned long long _frameRate; // +0x20
    unsigned long long _audioTrackNum; // +0x28
    double _videoFileSize; // +0x30
    CGSize _videoResolution; // +0x38
}
- (id)videoFormat;
- (void)setVideoFormat:(id)arg1;
- (BOOL)isHDR;
- (void)setIsHDR:(BOOL)arg1;
- (unsigned int)videoCodecType;
- (void)setVideoCodecType:(unsigned int)arg1;
- (CGSize)videoResolution;
- (void)setVideoResolution:(CGSize)arg1;
- (unsigned long long)bitrate;
- (void)setBitrate:(unsigned long long)arg1;
- (unsigned long long)frameRate;
- (void)setFrameRate:(unsigned long long)arg1;
- (unsigned long long)audioTrackNum;
- (void)setAudioTrackNum:(unsigned long long)arg1;
- (double)videoFileSize;
- (void)setVideoFileSize:(double)arg1;
- (void).cxx_destruct;
@end
