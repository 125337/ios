@interface WCFinderFeedListTransitionHelper : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, WCFinderMinimizeGestureAnimatorDelegate, WCFinderTrailingAnimatorDelegate>
{
    BOOL _hasConfiguredVerticalGesture; // +0x8
    UIScreenEdgePanGestureRecognizer * _gesture; // +0x10
    UIPanGestureRecognizer * _fullAreaPanGesture; // +0x18
    unsigned long long _fullAreaPanAction; // +0x20
    UIViewController * _vc; // +0x28
    WCFinderMinimizeGestureAnimator * _animator; // +0x30
    WCFinderFullScreenAnimatedTransitioning * _pushAnimator; // +0x38
    UIView * _minimizeEntranceView; // +0x40
    id <WCFinderFeedListTransitionHelperBehavior> _behavior; // +0x48
    id <WCFinderFeedListTransitionHelperDelegate> _delegate; // +0x50
    WCFinderTransitionUserInfo * _userInfo; // +0x58
    NSMutableArray * _dismissBlocks; // +0x60
    WCFinderTransitionAnimatorList * _gesturingAnimatorList; // +0x68
    id <WCFinderFeedListTransitionVerticalGestureBehavior> _verticalBehavior; // +0x70
    id <WCFinderFeedListTransitionHorizontalGestureBehavior> _horizontalBehavior; // +0x78
}
+ (BOOL)hasConfigViewController:(id)arg1;
+ (void)configViewController:(id)arg1 behavior:(id)arg2;
+ (void)configViewController:(id)arg1 delegate:(id)arg2;
+ (void)configViewController:(id)arg1 delegate:(id)arg2 behavior:(id)arg3;
+ (void)configNavigationController:(id)arg1 delegate:(id)arg2;
+ (void)recordTrailingAnimator:(id)arg1 forVC:(id)arg2;
+ (BOOL)hasTrailingAnimatorForVC:(id)arg1;
+ (void)beginTransition:(id)arg1 onAnimatorUsed:(id /* block */)arg2;
+ (void)endTransition;
+ (BOOL)isViewControllerGesturePoping:(id)arg1;
+ (void)addPopingCompleteForViewController:(id)arg1 complete:(id /* block */)arg2;
+ (void)forceMakeGestureAnimationFinishForVC:(id)arg1;
+ (id)transitionUserInfoForPage:(id)arg1;
+ (BOOL)isViewControllerSwipeGestureTransitionPushing:(id)arg1;
+ (void)configScrollViewVerticalGesture:(id)arg1 viewController:(id)arg2 verticalBehavior:(id)arg3;
+ (void)configScrollViewHorizontalGesture:(id)arg1 viewController:(id)arg2 horizontalBehavior:(id)arg3;
+ (void)addToVC:(id)arg1 willDismissHookBlock:(id /* block */)arg2 endDismissBlock:(id /* block */)arg3;
+ (BOOL)keepPlayGestureRunning:(id)arg1;
+ (BOOL)transitionPassPlayerManual:(id)arg1 forTid:(id)arg2;
+ (void)NotifyVCWillExpandFromVC:(id)arg1 toVC:(id)arg2;
+ (void)PresentVCWithSystemPushPopAnimation:(id)arg1 rootVC:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_configViewController:(id)arg1;
- (void)installNavigationGestures;
- (void)_configViewNavController:(id)arg1;
- (id)customTrailingAnimator;
- (void)hookAnimationMethods:(id)arg1;
- (void)hookViewDidAppear:(Class)arg1;
- (void)hookAnimationController:(Class)arg1;
- (id)animationControllerForOperation:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (id)popAnimatorWithProvider:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (id)pushAnimatorWithProvider:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (void)hookInteractionController:(Class)arg1;
- (void)_popViewControllerAfterPreparingClosure:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)handleFullAreaPanGesture:(id)arg1;
- (void)handlePushPanGesture:(id)arg1;
- (void)configVCInnerScrollView:(id)arg1;
- (void)handleDragDownGesture:(id)arg1;
- (void)handleVerticalPanGesture:(id)arg1;
- (void)handleHorizontalPanGesture:(id)arg1;
- (void)startDragGesture:(id)arg1 direction:(long long)arg2 offsetToLock:(double)arg3;
- (void)handleGestureForMinimizeEntrance:(id)arg1;
- (void)_handleMinimizeEntranceGestureState:(id)arg1 progress:(double)arg2;
- (BOOL)_doMinimizeAction;
- (BOOL)_transitionPassPlayerManual:(id)arg1 forTid:(id)arg2;
- (void)addWillDismissHookBlock:(id /* block */)arg1 endDismissBlock:(id /* block */)arg2;
- (void)_invokeWillDismissHookBlocks:(id)arg1;
- (void)_invokeEndDismissHookBlocks:(BOOL)arg1 toVC:(id)arg2;
- (void)_onTransitionFinishDoCleanup:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)fetchAnimatorAfterGetureBegin;
- (id)fetchAnimatorFromVC:(id)arg1 toVC:(id)arg2 isClosure:(BOOL)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)notifyVCWillExpandFrom:(id)arg1 toVC:(id)arg2;
- (void)notifyVCWillClosureFrom:(id)arg1 toVC:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)topStackVCForPresentVC:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onAnimator:(id)arg1 willEndGesture:(BOOL)arg2;
- (id)onAnimatorRequestTransferCurrentPlayer:(id)arg1;
- (id)_fetchCurrentMediaPlayer:(id)arg1;
- (id)_fetchCurrentMediaTransferTarget;
- (BOOL)isPresentedScene;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (id)fullAreaPanGesture;
- (void)setFullAreaPanGesture:(id)arg1;
- (unsigned long long)fullAreaPanAction;
- (void)setFullAreaPanAction:(unsigned long long)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)pushAnimator;
- (void)setPushAnimator:(id)arg1;
- (id)minimizeEntranceView;
- (void)setMinimizeEntranceView:(id)arg1;
- (id)behavior;
- (void)setBehavior:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)dismissBlocks;
- (void)setDismissBlocks:(id)arg1;
- (id)gesturingAnimatorList;
- (void)setGesturingAnimatorList:(id)arg1;
- (BOOL)hasConfiguredVerticalGesture;
- (void)setHasConfiguredVerticalGesture:(BOOL)arg1;
- (id)verticalBehavior;
- (void)setVerticalBehavior:(id)arg1;
- (id)horizontalBehavior;
- (void)setHorizontalBehavior:(id)arg1;
- (void).cxx_destruct;
@end
