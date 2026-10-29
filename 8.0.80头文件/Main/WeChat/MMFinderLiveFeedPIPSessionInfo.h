@interface MMFinderLiveFeedPIPSessionInfo : NSObject
{
    BOOL _isPlayerPlaying; // +0x8
    int _startTime; // +0xc
    int _stopTime; // +0x10
    int _totalPlayBackTime; // +0x14
    int _lastPlayStartTime; // +0x18
    NSString * _pipId; // +0x20
    long long _stopReason; // +0x28
}
- (id)init;
- (void)onPIPPlayerPlay;
- (void)onPIPPlayerPause;
- (void)onPIPStart;
- (void)onPIPStop;
- (int)pipPersistTime;
- (int)currPIPPersistTime;
- (int)currTotalPlayBackTime;
- (void)setPIPStopReason:(long long)arg1;
- (id)pipId;
- (void)setPipId:(id)arg1;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)stopTime;
- (void)setStopTime:(int)arg1;
- (int)totalPlayBackTime;
- (void)setTotalPlayBackTime:(int)arg1;
- (long long)stopReason;
- (void)setStopReason:(long long)arg1;
- (BOOL)isPlayerPlaying;
- (void)setIsPlayerPlaying:(BOOL)arg1;
- (int)lastPlayStartTime;
- (void)setLastPlayStartTime:(int)arg1;
- (void).cxx_destruct;
@end
