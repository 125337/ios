@interface TXLivePushConfig : NSObject
{
    BOOL _touchFocus; // +0x8
    BOOL _enableZoom; // +0x9
    BOOL _enableAutoBitrate; // +0xa
    BOOL _enableAudioPreview; // +0xb
    BOOL _enablePureAudioPush; // +0xc
    BOOL _enableNAS; // +0xd
    BOOL _enableHWAcceleration; // +0xe
    BOOL _enableMute; // +0xf
    BOOL _frontCamera; // +0x10
    BOOL _enableNearestIP; // +0x11
    BOOL _autoSampleBufferSize; // +0x12
    BOOL _enableAEC; // +0x13
    BOOL _enableAGC; // +0x14
    BOOL _enableAudioAcceleration; // +0x15
    int _homeOrientation; // +0x18
    int _localVideoMirrorType; // +0x1c
    int _pauseFps; // +0x20
    int _videoResolution; // +0x24
    int _videoFPS; // +0x28
    int _videoEncodeGop; // +0x2c
    int _videoBitratePIN; // +0x30
    int _autoAdjustStrategy; // +0x34
    int _videoBitrateMax; // +0x38
    int _videoBitrateMin; // +0x3c
    int _audioSampleRate; // +0x40
    int _audioChannels; // +0x44
    int _connectRetryCount; // +0x48
    int _connectRetryInterval; // +0x4c
    int _customModeType; // +0x50
    int _rtmpChannelType; // +0x54
    float _beautyFilterDepth; // +0x58
    float _whiteningFilterDepth; // +0x5c
    int _pauseTime; // +0x60
    UIImage * _watermark; // +0x68
    UIImage * _pauseImg; // +0x70
    long long _volumeType; // +0x78
    NSDictionary * _metaData; // +0x80
    CGPoint _watermarkPos; // +0x88
    CGSize _sampleBufferSize; // +0x98
    CGRect _watermarkNormalization; // +0xa8
}
- (id)init;
- (id)description;
- (void)setAudioSampleRate:(int)arg1;
- (void)setEnableHWAcceleration:(BOOL)arg1;
- (int)homeOrientation;
- (void)setHomeOrientation:(int)arg1;
- (BOOL)touchFocus;
- (void)setTouchFocus:(BOOL)arg1;
- (BOOL)enableZoom;
- (void)setEnableZoom:(BOOL)arg1;
- (id)watermark;
- (void)setWatermark:(id)arg1;
- (CGRect)watermarkNormalization;
- (void)setWatermarkNormalization:(CGRect)arg1;
- (int)localVideoMirrorType;
- (void)setLocalVideoMirrorType:(int)arg1;
- (int)pauseFps;
- (void)setPauseFps:(int)arg1;
- (id)pauseImg;
- (void)setPauseImg:(id)arg1;
- (int)videoResolution;
- (void)setVideoResolution:(int)arg1;
- (int)videoFPS;
- (void)setVideoFPS:(int)arg1;
- (int)videoEncodeGop;
- (void)setVideoEncodeGop:(int)arg1;
- (int)videoBitratePIN;
- (void)setVideoBitratePIN:(int)arg1;
- (BOOL)enableAutoBitrate;
- (void)setEnableAutoBitrate:(BOOL)arg1;
- (int)autoAdjustStrategy;
- (void)setAutoAdjustStrategy:(int)arg1;
- (int)videoBitrateMax;
- (void)setVideoBitrateMax:(int)arg1;
- (int)videoBitrateMin;
- (void)setVideoBitrateMin:(int)arg1;
- (int)audioSampleRate;
- (int)audioChannels;
- (void)setAudioChannels:(int)arg1;
- (BOOL)enableAudioPreview;
- (void)setEnableAudioPreview:(BOOL)arg1;
- (BOOL)enablePureAudioPush;
- (void)setEnablePureAudioPush:(BOOL)arg1;
- (int)connectRetryCount;
- (void)setConnectRetryCount:(int)arg1;
- (int)connectRetryInterval;
- (void)setConnectRetryInterval:(int)arg1;
- (int)customModeType;
- (void)setCustomModeType:(int)arg1;
- (BOOL)enableNAS;
- (void)setEnableNAS:(BOOL)arg1;
- (BOOL)enableHWAcceleration;
- (long long)volumeType;
- (void)setVolumeType:(long long)arg1;
- (BOOL)enableMute;
- (void)setEnableMute:(BOOL)arg1;
- (BOOL)frontCamera;
- (void)setFrontCamera:(BOOL)arg1;
- (int)rtmpChannelType;
- (void)setRtmpChannelType:(int)arg1;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (float)beautyFilterDepth;
- (void)setBeautyFilterDepth:(float)arg1;
- (float)whiteningFilterDepth;
- (void)setWhiteningFilterDepth:(float)arg1;
- (BOOL)enableNearestIP;
- (void)setEnableNearestIP:(BOOL)arg1;
- (CGPoint)watermarkPos;
- (void)setWatermarkPos:(CGPoint)arg1;
- (int)pauseTime;
- (void)setPauseTime:(int)arg1;
- (CGSize)sampleBufferSize;
- (void)setSampleBufferSize:(CGSize)arg1;
- (BOOL)autoSampleBufferSize;
- (void)setAutoSampleBufferSize:(BOOL)arg1;
- (BOOL)enableAEC;
- (void)setEnableAEC:(BOOL)arg1;
- (BOOL)enableAGC;
- (void)setEnableAGC:(BOOL)arg1;
- (BOOL)enableAudioAcceleration;
- (void)setEnableAudioAcceleration:(BOOL)arg1;
- (void).cxx_destruct;
@end
