@interface MMFinderLiveWinterOlympicView : MMFinderLiveView
{
    BOOL _showLiveStream; // +0x8
    BOOL _isWidgetHiddenForParticipateAnimation; // +0x9
    MMFinderLiveActivityTaskId * _activityTaskId; // +0x10
    MMFinderLiveOlyBarrageContainerView * _barrageContainerView; // +0x18
    unsigned long long _backgroundAnimationCountdownDay; // +0x20
    CGSize _backgroundAnimationCanvasSize; // +0x28
    struct _backgroundAnimationPrimaryGraphicsOutlineCircle; // +0x38
    CGRect _backgroundAnimationPrimaryGraphicsFrame; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (void)layoutUI;
- (void)layoutCDNView;
- (void)showFullScreenLoading:(BOOL)arg1 withLoadingText:(id)arg2 hasDelayed:(BOOL)arg3;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (void)layoutBarrageContainerView;
- (double)barrageContainerTopMargin;
- (double)barrageContainerBottomMargin;
- (void)updateBarrageContainerAlpha;
- (void)setShowLiveStream:(BOOL)arg1;
- (id)activityTaskId;
- (id)activityTask;
- (id)requestLiveViewHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWidgetsHiddenForParticipateAnimation:(BOOL)arg1;
- (BOOL)showLiveStream;
- (void)setActivityTaskId:(id)arg1;
- (id)barrageContainerView;
- (void)setBarrageContainerView:(id)arg1;
- (CGRect)backgroundAnimationPrimaryGraphicsFrame;
- (void)setBackgroundAnimationPrimaryGraphicsFrame:(CGRect)arg1;
- (struct)backgroundAnimationPrimaryGraphicsOutlineCircle;
- (void)setBackgroundAnimationPrimaryGraphicsOutlineCircle:(struct)arg1;
- (CGSize)backgroundAnimationCanvasSize;
- (void)setBackgroundAnimationCanvasSize:(CGSize)arg1;
- (unsigned long long)backgroundAnimationCountdownDay;
- (void)setBackgroundAnimationCountdownDay:(unsigned long long)arg1;
- (BOOL)isWidgetHiddenForParticipateAnimation;
- (void)setIsWidgetHiddenForParticipateAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

