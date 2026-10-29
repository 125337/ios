@interface VideoEncodeParamsInternal : NSObject
{
    BOOL _videoOnly; // +0x8
    float _frameInterval; // +0xc
    float _audioBitrate; // +0x10
    long long _codec; // +0x18
    long long _configCount; // +0x20
    WxVideoConfigPara * _configs; // +0x28
}
- (void)dealloc;
- (id)description;
- (float)frameInterval;
- (void)setFrameInterval:(float)arg1;
- (float)audioBitrate;
- (void)setAudioBitrate:(float)arg1;
- (long long)codec;
- (void)setCodec:(long long)arg1;
- (BOOL)videoOnly;
- (void)setVideoOnly:(BOOL)arg1;
- (long long)configCount;
- (void)setConfigCount:(long long)arg1;
- (WxVideoConfigPara *)configs;
- (void)setConfigs:(WxVideoConfigPara *)arg1;
@end

