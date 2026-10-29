@interface MMLiteAppHalfScreenViewController : MMUIHalfScreenViewController <UIGestureRecognizerDelegate>
{
    double previousProgress; // +0x70
    BOOL isFullScreen; // +0x78
    BOOL _enablePullUp; // +0x79
    BOOL _enablePullDown; // +0x7a
    BOOL _enableFullscreenPullDown; // +0x7b
    BOOL _hideWhenPullDown; // +0x7c
    BOOL _withMask; // +0x7d
    BOOL _landscape; // +0x7e
    BOOL _autoRotate; // +0x7f
    BOOL _fullscreenEnter; // +0x80
    BOOL _modal; // +0x81
    BOOL _forbidEdgePanClose; // +0x82
    MMLiteAppViewController * _liteappViewController; // +0x88
    double _heightPercent; // +0x90
    UIPanGestureRecognizer * _contentViewPanGesture; // +0x98
    UIView * _safeAreaInsetsView; // +0xa0
    UIColor * _titleBgColor; // +0xa8
    UIColor * _darkTitleBgColor; // +0xb0
    double _initContentTop; // +0xb8
}
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 sessionId:(id)arg5 signatureKey:(id)arg6 isTransparent:(BOOL)arg7 startReport:(id)arg8 reporter:(id)arg9;
- (id)initWithParams:(id)arg1;
- (void)commonInit;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (BOOL)shouldChangeDetailScrollViewHeightWhileScrolling;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (void)updateCanvasView;
- (void)initPanGesture;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (double)fetchHalfScreenPageHeight;
- (BOOL)isPanVerticalGesture:(id)arg1;
- (BOOL)isPanUpGesture:(id)arg1;
- (double)getContentViewTop;
- (void)setContentViewTopTo:(double)arg1 animatedWithDuration:(double)arg2;
- (void)animationToTargetFromRight:(double)arg1 action:(id)arg2;
- (void)animationToTarget:(double)arg1 action:(id)arg2;
- (void)scrollToTop;
- (void)scrollToBottom;
- (void)innerScrollToBottom;
- (void)scrollToResume;
- (id)backgroundButton;
- (void)setSize:(CGSize)arg1;
- (void)setLandscape:(BOOL)arg1;
- (void)resetHalfScreenView:(BOOL)arg1;
- (void)updateByLandscape;
- (double)marginLeft;
- (void)updateSafeAreaInsetsView:(CGSize)arg1;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (BOOL)darkMode;
- (void)updateDarkMode:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)start;
- (void)handleEdgePan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)liteappViewController;
- (void)setLiteappViewController:(id)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (BOOL)enablePullUp;
- (void)setEnablePullUp:(BOOL)arg1;
- (BOOL)enablePullDown;
- (void)setEnablePullDown:(BOOL)arg1;
- (BOOL)enableFullscreenPullDown;
- (void)setEnableFullscreenPullDown:(BOOL)arg1;
- (BOOL)hideWhenPullDown;
- (void)setHideWhenPullDown:(BOOL)arg1;
- (BOOL)withMask;
- (void)setWithMask:(BOOL)arg1;
- (BOOL)landscape;
- (BOOL)autoRotate;
- (void)setAutoRotate:(BOOL)arg1;
- (BOOL)fullscreenEnter;
- (void)setFullscreenEnter:(BOOL)arg1;
- (BOOL)modal;
- (void)setModal:(BOOL)arg1;
- (BOOL)forbidEdgePanClose;
- (void)setForbidEdgePanClose:(BOOL)arg1;
- (id)contentViewPanGesture;
- (void)setContentViewPanGesture:(id)arg1;
- (id)safeAreaInsetsView;
- (void)setSafeAreaInsetsView:(id)arg1;
- (id)titleBgColor;
- (void)setTitleBgColor:(id)arg1;
- (id)darkTitleBgColor;
- (void)setDarkTitleBgColor:(id)arg1;
- (double)initContentTop;
- (void)setInitContentTop:(double)arg1;
- (void).cxx_destruct;
@end
