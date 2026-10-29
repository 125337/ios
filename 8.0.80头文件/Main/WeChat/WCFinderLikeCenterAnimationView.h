@interface WCFinderLikeCenterAnimationView : UIView <PAGViewListener>
{
    BOOL _likeAnimationDynamicPagPlaying; // +0x8
    WCFinderLikeCenterAnimationConfig * _config; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    NSString * _pagDynmicWording; // +0x20
    UIView * _contentView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2 contentVM:(id)arg3;
- (void)setupUI;
- (id)createNormalTipsLabel;
- (id)getEnhancedLikeToastTipsLabel:(id)arg1;
- (void)tryAdddShadowForTipsLabel:(id)arg1;
- (CGPoint)getDoubleLikeDisplayCenter;
- (void)tryShowFavoriteAnimationWithTouchPoint:(CGPoint)arg1 preIsFav:(BOOL)arg2;
- (id)getFavoriteAnimationTipsLabelWithFollowTouchPoint:(BOOL)arg1 preIsFav:(BOOL)arg2 tipsTypePtr:(unsigned long long *)arg3;
- (id)breakPointTipsLabelWithActionType:(unsigned long long)arg1 tipsTypePtr:(unsigned long long *)arg2;
- (BOOL)willShowBreakPointForActionType:(unsigned long long)arg1;
- (id)createFeedFavoriteAnimationView;
- (void)startLikeAnimationWithLikeFlag:(int)arg1 touchPoint:(CGPoint)arg2;
- (id)getLikeAnimationTipsLabelWithTouchPoint:(CGPoint)arg1 tipsTypePtr:(unsigned long long *)arg2;
- (id)createdFeedDynamicFavoriteAnimationView;
- (id)createFeedLikeAnimationView:(id)arg1;
- (void)dynamicLikeAnimationWithTouchPoint:(CGPoint)arg1;
- (void)_startLikeAnimationWithAnimView:(id)arg1 isPAG:(BOOL)arg2 point:(CGPoint)arg3;
- (id)createLikeMilestoneAnimationView:(unsigned long long)arg1;
- (void)showHeartAnimationForMilestone:(id)arg1;
- (id)_easterEggEmotionView;
- (id)_easterEggRibbonPag;
- (void)showExperienceSpeedFavAnimationWithPreIsFav:(BOOL)arg1;
- (void)showExperienceSpeedLikeAnimation;
- (void)_showExperienceSpeedInteractionAnimationWithImage:(id)arg1 actionType:(unsigned long long)arg2 tipsLabel:(id)arg3;
- (void)reportLikeToastExpose:(unsigned long long)arg1 likeType:(unsigned long long)arg2 likeCount:(unsigned long long)arg3;
- (void)reportLiveFullScreenLikeEducationExpose;
- (void)_startBreakPointFlipAnimationWithCenterView:(id)arg1 tipsLabel:(id)arg2 bgMaskView:(id)arg3 container:(id)arg4 completionAction:(id /* block */)arg5 needsPlayAndFadeIn:(BOOL)arg6;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)likeAnimationDynamicPagPlaying;
- (void)setLikeAnimationDynamicPagPlaying:(BOOL)arg1;
- (id)pagDynmicWording;
- (void)setPagDynmicWording:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
