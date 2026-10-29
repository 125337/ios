@interface WCSnsLikeEasterEggEncounterView : UIView <IStoreEmotionSingleDownloadMgrExt, PAGViewListener>
{
    BOOL _isFinished; // +0x8
    BOOL _isExitStarted; // +0x9
    BOOL _focusActive; // +0xa
    BOOL _hasRetriedUrlFallback; // +0xb
    WCSnsLikeEasterEggInfo * _eggInfo; // +0x10
    NSString * _eggFeedId; // +0x18
    double _heartFromScale; // +0x20
    id /* block */ _dimTransitionBlock; // +0x28
    WCSnsLikeEasterEggFocusCenter * _focusCenter; // +0x30
    UIView * _avatarView; // +0x38
    id /* block */ _avatarProvider; // +0x40
    UIView * _avatarSnapshot; // +0x48
    UIImageView * _flyHeart; // +0x50
    UIView * _heartLayer; // +0x58
    UIImageView * _flySticker; // +0x60
    UIImageView * _fallbackFaceView; // +0x68
    PAGView * _pagView; // +0x70
    id /* block */ _downloadCompletion; // +0x78
    id /* block */ _onHeartDidStartMoving; // +0x80
    NSMutableArray * _timelineTimers; // +0x88
    double _showTime; // +0x90
    CGPoint _meetCenter; // +0x98
    CGPoint _heartStartCenter; // +0xa8
    CGRect _heartRect; // +0xb8
    CGRect _heartStartRect; // +0xd8
    CGRect _avatarRect; // +0xf8
}
+ (void)preloadResources;
+ (id)activeInstances;
+ (void)finishActiveEggsForContainerSizeChange;
+ (id)cachedConfettiPAGFile;
+ (id)cachedHeartImage;
+ (void)showWithInfo:(id)arg1 feedId:(id)arg2 focusCenter:(id)arg3 heartRect:(CGRect)arg4 heartStartRect:(CGRect)arg5 avatarView:(id)arg6 avatarProvider:(id /* block */)arg7 dimTransitionBlock:(id /* block */)arg8 feedRect:(CGRect)arg9 inView:(id)arg10 onHeartDidStartMoving:(id /* block */)arg11;
+ (void)probeLocalStickerThenSwapWithInfo:(id)arg1 eggView:(id)arg2;
+ (void)swapInBackgroundWithInfo:(id)arg1 data:(id)arg2 eggView:(id)arg3;
+ (id)aliveDownloadHelpers;
+ (void)downloadForInFlightSwapWithInfo:(id)arg1 eggView:(id)arg2;
+ (id)startShowWithInfo:(id)arg1 feedId:(id)arg2 focusCenter:(id)arg3 emojiImage:(id)arg4 stickerData:(id)arg5 heartRect:(CGRect)arg6 heartStartRect:(CGRect)arg7 avatarView:(id)arg8 avatarProvider:(id /* block */)arg9 dimTransitionBlock:(id /* block */)arg10 feedRect:(CGRect)arg11 inView:(id)arg12 onHeartDidStartMoving:(id /* block */)arg13;
+ (id)parsedRenderObjectOfData:(id)arg1 md5:(id)arg2;
+ (id)cachedFallbackFaceImage;
+ (double)avatarScaleAtTime:(double)arg1;
+ (double)avatarShakeAngleAtTime:(double)arg1;
+ (double)weMotion1ProgressAt:(double)arg1;
+ (id)weMotion1Progress;
+ (id)weMotion2Progress;
+ (id)weSpring1Response;
+ (id)springProgressWithStiffness:(double)arg1 damping:(double)arg2 mass:(double)arg3;
+ (void)addKeyframeSegmentFrom:(double)arg1 span:(double)arg2 progress:(id)arg3 update:(id /* block */)arg4;
+ (void)addBezierKeyframeSegmentFrom:(double)arg1 span:(double)arg2 control1:(CGPoint)arg3 control2:(CGPoint)arg4 update:(id /* block */)arg5;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)buildSubviews:(id)arg1 stickerData:(id)arg2;
- (BOOL)applyParsedRenderObject:(id)arg1;
- (void)swapInRenderObject:(id)arg1;
- (void)removeFallbackFace;
- (void)buildFallbackStickerFace;
- (id)newConfettiPAGView;
- (void)scheduleTimeline;
- (void)startMainActs;
- (void)scheduleStrictAfter:(double)arg1 action:(id /* block */)arg2;
- (void)cancelTimelineTimers;
- (void)animateAvatarTeaser;
- (void)restoreLiveAvatarAlpha;
- (double)stickerRestSide;
- (void)submitHeartFlyAnimation;
- (void)animateMainAct;
- (void)animateBurst;
- (void)playBurstHaptic;
- (void)onSkipStillTap:(id)arg1;
- (void)animateExit;
- (void)finishAndRemove;
- (void)onAnimationEnd:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)dealloc;
- (id)eggInfo;
- (void)setEggInfo:(id)arg1;
- (id)eggFeedId;
- (void)setEggFeedId:(id)arg1;
- (CGRect)heartRect;
- (void)setHeartRect:(CGRect)arg1;
- (CGRect)heartStartRect;
- (void)setHeartStartRect:(CGRect)arg1;
- (CGRect)avatarRect;
- (void)setAvatarRect:(CGRect)arg1;
- (CGPoint)meetCenter;
- (void)setMeetCenter:(CGPoint)arg1;
- (CGPoint)heartStartCenter;
- (void)setHeartStartCenter:(CGPoint)arg1;
- (double)heartFromScale;
- (void)setHeartFromScale:(double)arg1;
- (id /* block */)dimTransitionBlock;
- (void)setDimTransitionBlock:(id /* block */)arg1;
- (id)focusCenter;
- (void)setFocusCenter:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id /* block */)avatarProvider;
- (void)setAvatarProvider:(id /* block */)arg1;
- (id)avatarSnapshot;
- (void)setAvatarSnapshot:(id)arg1;
- (id)flyHeart;
- (void)setFlyHeart:(id)arg1;
- (id)heartLayer;
- (void)setHeartLayer:(id)arg1;
- (id)flySticker;
- (void)setFlySticker:(id)arg1;
- (id)fallbackFaceView;
- (void)setFallbackFaceView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (BOOL)isExitStarted;
- (void)setIsExitStarted:(BOOL)arg1;
- (BOOL)focusActive;
- (void)setFocusActive:(BOOL)arg1;
- (id /* block */)downloadCompletion;
- (void)setDownloadCompletion:(id /* block */)arg1;
- (BOOL)hasRetriedUrlFallback;
- (void)setHasRetriedUrlFallback:(BOOL)arg1;
- (id /* block */)onHeartDidStartMoving;
- (void)setOnHeartDidStartMoving:(id /* block */)arg1;
- (id)timelineTimers;
- (void)setTimelineTimers:(id)arg1;
- (double)showTime;
- (void)setShowTime:(double)arg1;
- (void).cxx_destruct;
@end
