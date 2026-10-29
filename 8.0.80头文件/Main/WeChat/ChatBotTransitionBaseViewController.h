@interface ChatBotTransitionBaseViewController : MMUIViewController <ChatBotTransitionAnimatorDelegate, MiniTaskPanGestureHandlerDelegate>
{
    BOOL _disableLeftPanGes; // +0x70
    ChatBotVoIPViewControllerContext * _context; // +0x78
    MiniTaskPanGestureHandler * _leftPanPopGestureHandler; // +0x80
    MiniTaskPanGestureHandler * _rightPanPopGestureHandler; // +0x88
    ChatBotBlurImageView * _fakeMainFrameSnapshotView; // +0x90
    UIView * _fakeSnapshotShadowView; // +0x98
    MMUIButton * _fakeSnapshotMaskView; // +0xa0
    ChatBotVoIPSession * _voipSession; // +0xa8
    ChatBotTransitioningDelegate * _negScreenTransitioningDelegate; // +0xb0
}
+ (id)findPresentedNegScreenFrom:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)setupFakeSnapshot;
- (void)setupLeftPanGestureHandler;
- (void)setupRightPanGestureHandler;
- (void)onEnterWithNewContext:(id)arg1;
- (void)presentNegScreenFromViewController:(id)arg1 interactionController:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (BOOL)presentNegScreenInSplitViewWithTransitioningDelegate:(id)arg1 completion:(id /* block */)arg2;
- (id)getBackgroundView;
- (void)layoutBackground;
- (BOOL)shouldAllowPanGestureAtLocation:(CGPoint)arg1 forHandler:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (BOOL)shouldMiniInteractiveTransitionReceiveTouch:(id)arg1 PanGesture:(id)arg2;
- (void)onChatBotPushBegin;
- (void)onChatBotTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)disableLeftPanGes;
- (void)setDisableLeftPanGes:(BOOL)arg1;
- (id)leftPanPopGestureHandler;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (id)rightPanPopGestureHandler;
- (void)setRightPanPopGestureHandler:(id)arg1;
- (id)fakeMainFrameSnapshotView;
- (void)setFakeMainFrameSnapshotView:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (id)fakeSnapshotMaskView;
- (void)setFakeSnapshotMaskView:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (id)negScreenTransitioningDelegate;
- (void)setNegScreenTransitioningDelegate:(id)arg1;
- (void).cxx_destruct;
@end
