@interface LiveKTVAudioEffectProcessInitParam : NSObject
{
    int _channelCnt; // +0x8
    int _sampleRate; // +0xc
    int _frameDuration; // +0x10
    unsigned long long _audioFormat; // +0x18
}
+ (id)defaultParam;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLegal;
- (int)channelCnt;
- (void)setChannelCnt:(int)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)frameDuration;
- (void)setFrameDuration:(int)arg1;
- (unsigned long long)audioFormat;
- (void)setAudioFormat:(unsigned long long)arg1;
@end

