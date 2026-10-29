@interface WCAdBreakFramePlayInteractionLogic : WCAdBreakFramePlayBaseLogic
{
    BOOL _beginPosSetFlag; // +0x8
    BOOL _hasPlayed; // +0x9
    int _interactionState; // +0xc
    int _changeAnimationTargetState; // +0x10
    CADisplayLink * _changeAnimationDisplayLink; // +0x18
    double _changeAnimationStartTimeMs; // +0x20
}
- (id)initWithBreakFrameInfo:(id)arg1 dataItem:(id)arg2 alphaVideoView:(id)arg3 bTimelineScene:(BOOL)arg4;
- (void)dealloc;
- (BOOL)checkPlayMode;
- (void)reset;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onSelfLike;
- (void)onSelfCancelLike;
- (void)onSelfComment;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)initLogic;
- (void)changeToInteractionState:(int)arg1;
- (void)changeToInteractionState:(int)arg1 neeSeek:(BOOL)arg2;
- (id)fetchPlayStateItem:(int)arg1;
- (id)fetchCurrentPlayStateItem;
- (BOOL)checkPlaybackTimeInCurrentPlayStateSection:(double)arg1;
- (int)fetchNextInteractionState;
- (void)changeToInteractionStateWithAnimation:(int)arg1;
- (void)tryToStartChangeWithAnimation:(int)arg1;
- (void)stopChangeAnimation;
- (void)displayLinkCheck;
- (void)realPausePlayer;
- (void)resumePlayerAlpha;
- (void)notifyStateChanged;
- (void)reportUserAction:(int)arg1;
- (int)interactionState;
- (void)setInteractionState:(int)arg1;
- (id)changeAnimationDisplayLink;
- (void)setChangeAnimationDisplayLink:(id)arg1;
- (double)changeAnimationStartTimeMs;
- (void)setChangeAnimationStartTimeMs:(double)arg1;
- (int)changeAnimationTargetState;
- (void)setChangeAnimationTargetState:(int)arg1;
- (BOOL)beginPosSetFlag;
- (void)setBeginPosSetFlag:(BOOL)arg1;
- (BOOL)hasPlayed;
- (void)setHasPlayed:(BOOL)arg1;
- (void).cxx_destruct;
@end
