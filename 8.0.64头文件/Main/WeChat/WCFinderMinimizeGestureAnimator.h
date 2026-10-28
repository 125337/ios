@interface WCFinderMinimizeGestureAnimator : NSObject <UIViewControllerAnimatedTransitioning, WCFinderTransitionAnimatorCompleteable, MMUIViewControllerTransitionInfo>
{
    BOOL _showMinimizeEntrance; // +0x8
    BOOL _stopFlag; // +0x9
    BOOL _animatedHiddenCellMask; // +0xa
    BOOL _finishBeforeAnimation; // +0xb
    BOOL _forceMakeFinish; // +0xc
    BOOL _animationRunning; // +0xd
    UIViewController * animatedTransitionRespondViewController; // +0x10
    id <WCFinderMinimizeGestureAnimatorDelegate> _delegate; // +0x18
    long long _behavior; // +0x20
    UIPercentDrivenInteractiveTransition * _interactive; // +0x28
    WCFinderTransitionAnimatorList * _transitioningAnimationProvider; // +0x30
    WCFinderTransitionUserInfo * _providerUserInfo; // +0x38
    id <UIViewControllerContextTransitioning> _context; // +0x40
    UIView * _fromView; // +0x48
    UIViewController * _fromVC; // +0x50
    UIView * _toView; // +0x58
    UIView * _fromBarView; // +0x60
    UIView * _toBarView; // +0x68
    UIView * _maskView; // +0x70
    UIView * _shadowView; // +0x78
    NSMutableArray * _completions; // +0x80
    long long _animCnt; // +0x88
    long long _dragDirection; // +0x90
    double _dragOffsetToLock; // +0x98
    CGPoint _beginPoint; // +0xa0
    CGRect _fromViewInitialFrame; // +0xb0
}
- (id)initWithGesture:(id)arg1 behavior:(long long)arg2;
- (id)initWithDragGesture:(id)arg1 behavior:(long long)arg2 direction:(long long)arg3 offsetToLock:(double)arg4;
- (id)initWithCommonGesture:(id)arg1 behavior:(long long)arg2;
- (BOOL)asCard;
- (BOOL)pinBack;
- (double)transitionDuration:(id)arg1;
- (double)duration;
- (void)animateTransition:(id)arg1;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)handleGesture:(id)arg1;
- (void)dragWithProgress:(double)arg1 translation:(CGPoint)arg2;
- (void)_endCardDragging:(CGPoint)arg1 velocity:(CGPoint)arg2 isFast:(BOOL)arg3 progress:(double)arg4;
- (void)_beginAnimation:(double)arg1;
- (void)_cancelAnimation:(double)arg1;
- (void)onAnimationEnd:(BOOL)arg1;
- (void)handleDrag:(id)arg1;
- (BOOL)isViewControllerBePoping:(id)arg1;
- (void)forceMakeAnimationFinish;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)behavior;
- (void)setBehavior:(long long)arg1;
- (id)interactive;
- (void)setInteractive:(id)arg1;
- (BOOL)showMinimizeEntrance;
- (void)setShowMinimizeEntrance:(BOOL)arg1;
- (id)transitioningAnimationProvider;
- (void)setTransitioningAnimationProvider:(id)arg1;
- (id)providerUserInfo;
- (void)setProviderUserInfo:(id)arg1;
- (BOOL)stopFlag;
- (void)setStopFlag:(BOOL)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)fromView;
- (void)setFromView:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)toView;
- (void)setToView:(id)arg1;
- (id)fromBarView;
- (void)setFromBarView:(id)arg1;
- (id)toBarView;
- (void)setToBarView:(id)arg1;
- (CGRect)fromViewInitialFrame;
- (void)setFromViewInitialFrame:(CGRect)arg1;
- (CGPoint)beginPoint;
- (void)setBeginPoint:(CGPoint)arg1;
- (BOOL)animatedHiddenCellMask;
- (void)setAnimatedHiddenCellMask:(BOOL)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (BOOL)finishBeforeAnimation;
- (void)setFinishBeforeAnimation:(BOOL)arg1;
- (BOOL)forceMakeFinish;
- (void)setForceMakeFinish:(BOOL)arg1;
- (BOOL)animationRunning;
- (void)setAnimationRunning:(BOOL)arg1;
- (long long)animCnt;
- (void)setAnimCnt:(long long)arg1;
- (long long)dragDirection;
- (void)setDragDirection:(long long)arg1;
- (double)dragOffsetToLock;
- (void)setDragOffsetToLock:(double)arg1;
- (void).cxx_destruct;
@end
