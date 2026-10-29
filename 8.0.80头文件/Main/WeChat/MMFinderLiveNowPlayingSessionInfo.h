@interface MMFinderLiveNowPlayingSessionInfo : NSObject
{
    BOOL _isNowControlPlaying; // +0x8
    int _startTime; // +0xc
    int _stopTime; // +0x10
    int _persistTime; // +0x14
    int _totalPlayBackTime; // +0x18
    int _lastPlayStartTime; // +0x1c
}
- (void)onNowPlayingPlay;
- (void)onNowPlayingPause;
- (void)onNowPlayingControlStart;
- (void)onNowPlayingControlStop;
- (int)persistTime;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)stopTime;
- (void)setStopTime:(int)arg1;
- (void)setPersistTime:(int)arg1;
- (int)totalPlayBackTime;
- (void)setTotalPlayBackTime:(int)arg1;
- (int)lastPlayStartTime;
- (void)setLastPlayStartTime:(int)arg1;
- (BOOL)isNowControlPlaying;
- (void)setIsNowControlPlaying:(BOOL)arg1;
@end
