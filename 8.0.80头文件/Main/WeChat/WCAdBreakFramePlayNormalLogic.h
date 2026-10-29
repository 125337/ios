@interface WCAdBreakFramePlayNormalLogic : WCAdBreakFramePlayBaseLogic
{
    BOOL _alreadyPlayed; // +0x8
    BOOL _isOnceMorePlaying; // +0x9
    BOOL _beginPosSetFlag; // +0xa
}
- (BOOL)checkPlayMode;
- (void)reset;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(BOOL)arg2;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (BOOL)alreadyPlayed;
- (void)setAlreadyPlayed:(BOOL)arg1;
- (BOOL)isOnceMorePlaying;
- (void)setIsOnceMorePlaying:(BOOL)arg1;
- (BOOL)beginPosSetFlag;
- (void)setBeginPosSetFlag:(BOOL)arg1;
@end
