@interface WCDragToCloseViewController : MMUIViewController <WCDragToCloseDelegate, UIViewControllerAnimatedTransitioning, TransitioningAnimationDelegate>
{
    BOOL _enableDragToClose; // +0x68
    BOOL _allowRotate; // +0x69
    BOOL _isNavigationBarHiddenInAnimiation; // +0x6a
    UIView * _snapShotImgView; // +0x70
    long long _orientationWhenInit; // +0x78
}
- (id)init;
- (BOOL)isOrientationChanged;
- (void)setM_snapShotImgView:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (unsigned long long)supportedInterfaceOrientationsInDragScene;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (id)snapShotImgView;
- (void)setSnapShotImgView:(id)arg1;
- (BOOL)allowRotate;
- (void)setAllowRotate:(BOOL)arg1;
- (long long)orientationWhenInit;
- (void)setOrientationWhenInit:(long long)arg1;
- (BOOL)isNavigationBarHiddenInAnimiation;
- (void)setIsNavigationBarHiddenInAnimiation:(BOOL)arg1;
- (void).cxx_destruct;
@end

