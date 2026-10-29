@interface WCBaseScheduler : NSObject
{
    unsigned int _byteRate; // +0x8
    unsigned int _networkSpeed; // +0xc
    long long _type; // +0x10
    unsigned long long _lastRequestTime; // +0x18
    unsigned long long _networkUpdateTime; // +0x20
    WCPlayerPlayArgs * _playerArgs; // +0x28
    WCPlayerPlaybackInfo * _playbackInfo; // +0x30
    double _threshold; // +0x38
    double _bufferLimit; // +0x40
    double _sliceTime; // +0x48
}
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2;
- (double)sliceTime;
- (double)threshold;
- (double)bufferLimit;
- (double)getNextDownloadTimeWhenPause;
- (double)getNextDownloadTimeWhenPlaying;
- (BOOL)isCanImproveBaseBuffer;
- (BOOL)isInPreloadLimitTime:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (unsigned int)byteRate;
- (void)setByteRate:(unsigned int)arg1;
- (unsigned int)networkSpeed;
- (void)setNetworkSpeed:(unsigned int)arg1;
- (unsigned long long)lastRequestTime;
- (void)setLastRequestTime:(unsigned long long)arg1;
- (unsigned long long)networkUpdateTime;
- (void)setNetworkUpdateTime:(unsigned long long)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (void)setThreshold:(double)arg1;
- (void)setBufferLimit:(double)arg1;
- (void)setSliceTime:(double)arg1;
- (void).cxx_destruct;
@end

