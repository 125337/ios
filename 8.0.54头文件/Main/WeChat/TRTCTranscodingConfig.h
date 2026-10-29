@interface TRTCTranscodingConfig : NSObject
{
    int _appId; // +0x8
    int _bizId; // +0xc
    int _videoWidth; // +0x10
    int _videoHeight; // +0x14
    int _videoBitrate; // +0x18
    int _videoFramerate; // +0x1c
    int _videoGOP; // +0x20
    int _backgroundColor; // +0x24
    int _audioSampleRate; // +0x28
    int _audioBitrate; // +0x2c
    int _audioChannels; // +0x30
    int _audioCodec; // +0x34
    long long _mode; // +0x38
    NSString * _backgroundImage; // +0x40
    NSArray * _mixUsers; // +0x48
    NSString * _streamId; // +0x50
}
- (MixedTranscodingConfig)convertToCppParams;
- (int)convertMixedMode:(long long)arg1;
- (id)init;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (int)appId;
- (void)setAppId:(int)arg1;
- (int)bizId;
- (void)setBizId:(int)arg1;
- (int)videoWidth;
- (void)setVideoWidth:(int)arg1;
- (int)videoHeight;
- (void)setVideoHeight:(int)arg1;
- (int)videoBitrate;
- (void)setVideoBitrate:(int)arg1;
- (int)videoFramerate;
- (void)setVideoFramerate:(int)arg1;
- (int)videoGOP;
- (void)setVideoGOP:(int)arg1;
- (int)backgroundColor;
- (void)setBackgroundColor:(int)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (int)audioSampleRate;
- (void)setAudioSampleRate:(int)arg1;
- (int)audioBitrate;
- (void)setAudioBitrate:(int)arg1;
- (int)audioChannels;
- (void)setAudioChannels:(int)arg1;
- (int)audioCodec;
- (void)setAudioCodec:(int)arg1;
- (id)mixUsers;
- (void)setMixUsers:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (void).cxx_destruct;
@end

