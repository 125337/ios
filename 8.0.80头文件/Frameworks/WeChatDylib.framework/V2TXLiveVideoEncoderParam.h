@interface V2TXLiveVideoEncoderParam : NSObject
{
    int _videoFps; // +0x8
    int _videoBitrate; // +0xc
    int _minVideoBitrate; // +0x10
    long long _videoResolution; // +0x18
    long long _videoResolutionMode; // +0x20
}
- (id)init;
- (id)initWith:(long long)arg1;
- (void)configWith:(long long)arg1;
- (id)description;
- (long long)videoResolution;
- (void)setVideoResolution:(long long)arg1;
- (long long)videoResolutionMode;
- (void)setVideoResolutionMode:(long long)arg1;
- (int)videoFps;
- (void)setVideoFps:(int)arg1;
- (int)videoBitrate;
- (void)setVideoBitrate:(int)arg1;
- (int)minVideoBitrate;
- (void)setMinVideoBitrate:(int)arg1;
@end
