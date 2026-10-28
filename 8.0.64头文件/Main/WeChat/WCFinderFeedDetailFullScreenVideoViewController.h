@interface WCFinderFeedDetailFullScreenVideoViewController : MMUIViewController <WCFinderFeedDetailContentViewDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    BOOL _rotating; // +0x70
    BOOL _isPullingDown; // +0x71
    BOOL _isViewWillAppear; // +0x72
    id <WCFinderFeedDetailFullScreenVideoViewControllerDelegate> _delegate; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    WCFinderFeedDetailContentView * _mediaContentView; // +0x88
    UIView * _bgView; // +0x90
    CGPoint _panStartPoint; // +0x98
}
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (id)initWithContentVM:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (void)setupSubviews;
- (void)layoutViews;
- (void)setupGestures;
- (CGRect)mediaViewFullScreenFrame;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)restorePullingDownWithDuration:(double)arg1;
- (id)feedDetailContentViewCurrentViewController;
- (void)onFeedDetailContentViewClickPhotoImageWithIndex:(unsigned long long)arg1;
- (void)onFeedDetailContentViewClickPlayerFullScreen;
- (void)onFeedDetailContentViewVideoExitFullScreen;
- (void)onFeedDetailContentViewVideoExitIPhoneLandscape;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)mediaContentView;
- (void)setMediaContentView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (BOOL)rotating;
- (void)setRotating:(BOOL)arg1;
- (CGPoint)panStartPoint;
- (void)setPanStartPoint:(CGPoint)arg1;
- (BOOL)isPullingDown;
- (void)setIsPullingDown:(BOOL)arg1;
- (BOOL)isViewWillAppear;
- (void)setIsViewWillAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
