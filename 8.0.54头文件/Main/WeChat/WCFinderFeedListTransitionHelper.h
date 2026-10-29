@interface WCFinderFeedListTransitionHelper : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, WCFinderMinimizeGestureAnimatorDelegate, WCFinderTrailingAnimatorDelegate>
{
    UIScreenEdgePanGestureRecognizer * _gesture; // +0x8
    UIPanGestureRecognizer * _nonEdgeGesture; // +0x10
    UIPanGestureRecognizer * _pushPanGesture; // +0x18
    UIViewController * _vc; // +0x20
    WCFinderMinimizeGestureAnimator * _animator; // +0x28
    WCFinderFullScreenAnimatedTransitioning * _pushAnimator; // +0x30
    UIView * _minimizeEntranceView; // +0x38
    id <WCFinderFeedListTransitionHelperBehavior> _behavior; // +0x40
    id <WCFinderFeedListTransitionHelperDelegate> _delegate; // +0x48
    WCFinderTransitionUserInfo * _userInfo; // +0x50
    NSMutableArray * _dismissBlocks; // +0x58
    WCFinderTransitionAnimatorList * _gesturingAnimatorList; // +0x60
}
+ (BOOL)hasConfigViewController:(id)arg1;
+ (void)configViewController:(id)arg1 behavior:(id)arg2;
+ (void)configViewController:(id)arg1 delegate:(id)arg2;
+ (void)configViewController:(id)arg1 delegate:(id)arg2 behavior:(id)arg3;
+ (void)configNavigationController:(id)arg1 delegate:(id)arg2;
+ (void)recordTrailingAnimator:(id)arg1 forVC:(id)arg2;
+ (void)beginTransition:(id)arg1 onAnimatorUsed:(id /* block */)arg2;
+ (void)endTransition;
+ (BOOL)isViewControllerGesturePoping:(id)arg1;
+ (void)addPopingCompleteForViewController:(id)arg1 complete:(id /* block */)arg2;
+ (void)forceMakeGestureAnimationFinishForVC:(id)arg1;
+ (id)transitionUserInfoForPage:(id)arg1;
+ (void)addToVC:(id)arg1 willDismissHookBlock:(id /* block */)arg2 endDismissBlock:(id /* block */)arg3;
+ (void)PresentVCWithSystemPushPopAnimation:(id)arg1 rootVC:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_configViewController:(id)arg1;
- (void)installSwapGesture;
- (void)_configViewNavController:(id)arg1;
- (id)customTrailingAnimator;
- (void)hookAnimationMethods:(id)arg1;
- (void)swizzleMethod:(SEL)arg1 swizzleSel:(SEL)arg2 target:(Class)arg3;
- (void)handleGesture:(id)arg1;
- (void)handlePushPanGesture:(id)arg1;
- (void)configVCInnerScrollView:(id)arg1;
- (void)handleDragDownGesture:(id)arg1;
- (void)handleGestureForMinimizeEntrance:(id)arg1;
- (void)_handleMinimizeEntranceGestureState:(id)arg1 progress:(double)arg2;
- (BOOL)_doMinimizeAction;
- (void)addWillDismissHookBlock:(id /* block */)arg1 endDismissBlock:(id /* block */)arg2;
- (void)_invokeWillDismissHookBlocks:(id)arg1;
- (void)_invokeEndDismissHookBlocks:(BOOL)arg1 toVC:(id)arg2;
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
- (BOOL)isPresentedScene;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (id)nonEdgeGesture;
- (void)setNonEdgeGesture:(id)arg1;
- (id)pushPanGesture;
- (void)setPushPanGesture:(id)arg1;
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
- (void).cxx_destruct;
@end

