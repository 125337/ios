@interface OpusAudioPlayer : BaseAudioPlayer
{
    double m_sampleRate; // +0x20
    BOOL _isNeedUnmuteLongVideoPlay; // +0x28
    unsigned long long _launchTime; // +0x30
    unsigned long long _launchCost; // +0x38
    unsigned long long _receiveHandleOutputCost; // +0x40
}
+ (unsigned int)calculateVoiceTime:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)preparePlayNotNotify;
- (BOOL)preparePlayWithFile:(id)arg1 sync:(BOOL)arg2;
- (void)setCurrentPacketWithTime:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)setProgress:(unsigned int)arg1;
- (void)replay;
- (int)getCurrentTimeMs;
- (void)stop;
- (void)autostop;
- (void)onReceiveHandleOutput;
- (void)updateStatus;
- (float)TimerCheckMeter;
- (void)checkQueueState:(float)arg1;
- (void)openOpusFile:(id)arg1;
- (void)setDataFormat;
- (void)prepareBuffers;
- (BOOL)isNeedUnmuteLongVideoPlay;
- (void)setIsNeedUnmuteLongVideoPlay:(BOOL)arg1;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (unsigned long long)launchCost;
- (void)setLaunchCost:(unsigned long long)arg1;
- (unsigned long long)receiveHandleOutputCost;
- (void)setReceiveHandleOutputCost:(unsigned long long)arg1;
@end
