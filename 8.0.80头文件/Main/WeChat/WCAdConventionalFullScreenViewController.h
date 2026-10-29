@interface WCAdConventionalFullScreenViewController : MMUIViewController <UIViewControllerAnimatedTransitioning>
{
    id /* block */ _mediaOriginFrameBlock; // +0x70
    UIImageView * _topMaskView; // +0x78
    MMUIButton * _leftBarButton; // +0x80
    WCAdConventionalHalfScreenMediaBaseView * _mediaView; // +0x88
    WCAdConventionalHalfScreenDetailBaseView * _detailView; // +0x90
    id /* block */ _didAppearBlock; // +0x98
    id /* block */ _popTransitionBlock; // +0xa0
    id /* block */ _willDisappearBlock; // +0xa8
    id /* block */ _didDisappearBlock; // +0xb0
}
- (id)initWithMediaView:(id)arg1 detailView:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)topMaskView;
- (id)leftBarButton;
- (void)onLeftBarButtonClicked;
- (void)configPushTransitionCustomWithDidAppearBlock:(id /* block */)arg1 popTransitionBlock:(id /* block */)arg2 willDisappearBlock:(id /* block */)arg3 didDisappearBlock:(id /* block */)arg4;
- (void)dismissFullScreenView;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (CGRect)fetchContentFrameInContainerView:(id)arg1;
- (CGRect)calcMediaContentOriginFrameInContainerView:(id)arg1;
- (id)fetchMediaViewCurrentSnapshot;
- (id /* block */)mediaOriginFrameBlock;
- (void)setMediaOriginFrameBlock:(id /* block */)arg1;
- (void)setTopMaskView:(id)arg1;
- (void)setLeftBarButton:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id /* block */)didAppearBlock;
- (void)setDidAppearBlock:(id /* block */)arg1;
- (id /* block */)popTransitionBlock;
- (void)setPopTransitionBlock:(id /* block */)arg1;
- (id /* block */)willDisappearBlock;
- (void)setWillDisappearBlock:(id /* block */)arg1;
- (id /* block */)didDisappearBlock;
- (void)setDidDisappearBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
