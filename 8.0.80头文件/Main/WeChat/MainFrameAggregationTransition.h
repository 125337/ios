@interface MainFrameAggregationTransition : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    BOOL _isPush; // +0x8
    BOOL _isInTransition; // +0x9
    BOOL _isInteractivePop; // +0xa
    UIView * _animateBackgroundView; // +0x10
    UIView * _animateContentView; // +0x18
    UIView * _animateBottomView; // +0x20
    UIView * _fromSnapshtoView; // +0x28
    UIView * _tabbarSnapshotView; // +0x30
    id <MainFrameAggregationTransitionDelegate> _delegate; // +0x38
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0x40
    UIPanGestureRecognizer * _interactivePopGesture; // +0x48
    long long _panDriect; // +0x50
    CGPoint _panBeginPoint; // +0x58
}
- (void)installPanGestureToView:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)initTabBarSnapshot:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onInteractivePopGesture:(id)arg1;
- (BOOL)wantsInteractiveStart;
- (BOOL)isPush;
- (void)setIsPush:(BOOL)arg1;
- (BOOL)isInTransition;
- (void)setIsInTransition:(BOOL)arg1;
- (id)animateBackgroundView;
- (void)setAnimateBackgroundView:(id)arg1;
- (id)animateContentView;
- (void)setAnimateContentView:(id)arg1;
- (id)animateBottomView;
- (void)setAnimateBottomView:(id)arg1;
- (BOOL)isInteractivePop;
- (void)setIsInteractivePop:(BOOL)arg1;
- (id)fromSnapshtoView;
- (void)setFromSnapshtoView:(id)arg1;
- (id)tabbarSnapshotView;
- (void)setTabbarSnapshotView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (id)interactivePopGesture;
- (void)setInteractivePopGesture:(id)arg1;
- (CGPoint)panBeginPoint;
- (void)setPanBeginPoint:(CGPoint)arg1;
- (long long)panDriect;
- (void)setPanDriect:(long long)arg1;
- (void).cxx_destruct;
@end
