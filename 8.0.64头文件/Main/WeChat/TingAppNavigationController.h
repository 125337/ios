@interface TingAppNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    BOOL _lastPresentedFullPlayer; // +0x8
    BOOL _presentFromTingApp; // +0x9
    int _lastPresentedScene; // +0xc
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x10
    NSString * _identifier; // +0x18
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x20
    MinimizeNewTransitionController * _transitionController; // +0x28
}
+ (BOOL)shouldUsePushTransitionFromScene:(int)arg1;
- (void)setupTransitionController;
- (void)setupLastScene:(int)arg1 shouldPresentFullPlayer:(BOOL)arg2;
- (BOOL)edgeGestureShouldBegin;
- (id)systemDismissTransitionWithInteracting:(BOOL)arg1;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)onMinimizationNewTransitionStart:(id)arg1 withContext:(id)arg2;
- (void)onMinimizationNewTransitionEnd:(id)arg1 withContext:(id)arg2 isComplete:(BOOL)arg3;
- (void)viewDidLoad;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (int)lastPresentedScene;
- (void)setLastPresentedScene:(int)arg1;
- (BOOL)lastPresentedFullPlayer;
- (void)setLastPresentedFullPlayer:(BOOL)arg1;
- (BOOL)presentFromTingApp;
- (void)setPresentFromTingApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
