@interface V2TXLiveTranscodingConfig : NSObject
{
    unsigned long long _videoWidth; // +0x8
    unsigned long long _videoHeight; // +0x10
    unsigned long long _videoBitrate; // +0x18
    unsigned long long _videoFramerate; // +0x20
    unsigned long long _videoGOP; // +0x28
    unsigned long long _backgroundColor; // +0x30
    NSString * _backgroundImage; // +0x38
    unsigned long long _audioSampleRate; // +0x40
    unsigned long long _audioBitrate; // +0x48
    unsigned long long _audioChannels; // +0x50
    NSArray * _mixStreams; // +0x58
    NSString * _outputStreamId; // +0x60
}
- (id)init;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)videoWidth;
- (void)setVideoWidth:(unsigned long long)arg1;
- (unsigned long long)videoHeight;
- (void)setVideoHeight:(unsigned long long)arg1;
- (unsigned long long)videoBitrate;
- (void)setVideoBitrate:(unsigned long long)arg1;
- (unsigned long long)videoFramerate;
- (void)setVideoFramerate:(unsigned long long)arg1;
- (unsigned long long)videoGOP;
- (void)setVideoGOP:(unsigned long long)arg1;
- (unsigned long long)backgroundColor;
- (void)setBackgroundColor:(unsigned long long)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (unsigned long long)audioSampleRate;
- (void)setAudioSampleRate:(unsigned long long)arg1;
- (unsigned long long)audioBitrate;
- (void)setAudioBitrate:(unsigned long long)arg1;
- (unsigned long long)audioChannels;
- (void)setAudioChannels:(unsigned long long)arg1;
- (id)mixStreams;
- (void)setMixStreams:(id)arg1;
- (id)outputStreamId;
- (void)setOutputStreamId:(id)arg1;
- (void).cxx_destruct;
@end

