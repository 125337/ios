@interface MusicPlayerActionReporter : NSObject
{
    MMMusicInfo * _musicInfo; // +0x8
    NSString * _sessionId; // +0x10
    double _playRate; // +0x18
}
- (id)init;
- (void)reportWithState:(unsigned long long)arg1 duartion:(double)arg2 currenTime:(double)arg3;
- (id)traceLogWithStateState:(unsigned long long)arg1 currentTime:(double)arg2;
- (id)stringFromState:(unsigned long long)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (double)playRate;
- (void)setPlayRate:(double)arg1;
- (void).cxx_destruct;
@end

