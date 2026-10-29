@interface SilkAudioPlayer : BaseAudioPlayer
{
    double m_smapleRate; // +0x20
    BOOL _isNeedUnmuteLongVideoPlay; // +0x28
    BOOL _snrEstimatorEnabled; // +0x29
    BOOL _cachedIsDataOver; // +0x2a
    int _cachedEstimatedSnr; // +0x2c
    unsigned int _cachedPlayedMs; // +0x30
    int _haidMode; // +0x34
    int _haidDevice; // +0x38
    unsigned long long _launchTime; // +0x40
    unsigned long long _launchCost; // +0x48
    unsigned long long _receiveHandleOutputCost; // +0x50
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
- (void)openSilkFile:(id)arg1;
- (void)setDataFormat;
- (void)setSmapleRate:(double)arg1;
- (void)prepareBuffers;
- (void)enableSnrEstimator;
- (BOOL)fetchEstimatedSnrResult:(int *)arg1 playedMs:(unsigned int *)arg2 isDataOver:(BOOL *)arg3;
- (void)setHAidMode:(int)arg1 device:(int)arg2;
- (void)setAIDenoiseLevel:(int)arg1;
- (BOOL)ifSilkAudioPlayerAgcOn;
- (BOOL)isNeedUnmuteLongVideoPlay;
- (void)setIsNeedUnmuteLongVideoPlay:(BOOL)arg1;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (unsigned long long)launchCost;
- (void)setLaunchCost:(unsigned long long)arg1;
- (unsigned long long)receiveHandleOutputCost;
- (void)setReceiveHandleOutputCost:(unsigned long long)arg1;
- (BOOL)snrEstimatorEnabled;
- (void)setSnrEstimatorEnabled:(BOOL)arg1;
- (int)cachedEstimatedSnr;
- (void)setCachedEstimatedSnr:(int)arg1;
- (unsigned int)cachedPlayedMs;
- (void)setCachedPlayedMs:(unsigned int)arg1;
- (BOOL)cachedIsDataOver;
- (void)setCachedIsDataOver:(BOOL)arg1;
- (int)haidMode;
- (void)setHaidMode:(int)arg1;
- (int)haidDevice;
- (void)setHaidDevice:(int)arg1;
@end
