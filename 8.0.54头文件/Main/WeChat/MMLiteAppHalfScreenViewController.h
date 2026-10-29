@interface MMLiteAppHalfScreenViewController : MMUIHalfScreenViewController <UIGestureRecognizerDelegate>
{
    BOOL _enablePullUp; // +0x68
    BOOL _enablePullDown; // +0x69
    BOOL _enableFullscreenPullDown; // +0x6a
    BOOL _hideWhenPullDown; // +0x6b
    BOOL _withMask; // +0x6c
    BOOL _landscape; // +0x6d
    BOOL _autoRotate; // +0x6e
    MMLiteAppViewController * _liteappViewController; // +0x70
    double _heightPercent; // +0x78
    UIPanGestureRecognizer * _contentViewPanGesture; // +0x80
    UIView * _safeAreaInsetsView; // +0x88
    UIColor * _titleBgColor; // +0x90
    UIColor * _darkTitleBgColor; // +0x98
}
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 isTransparent:(BOOL)arg6 startReport:(id)arg7 reporter:(id)arg8;
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
- (void)animationToTarget:(double)arg1 action:(id)arg2;
- (void)scrollToTop;
- (void)scrollToBottom;
- (void)scrollToResume;
- (id)backgroundButton;
- (id)contentView;
- (void)setSize:(CGSize)arg1;
- (void)setLandscape:(BOOL)arg1;
- (void)updateByLandscape;
- (double)marginLeft;
- (void)updateSafeAreaInsetsView:(CGSize)arg1;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (BOOL)darkMode;
- (void)updateDarkMode:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)start;
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
- (id)contentViewPanGesture;
- (void)setContentViewPanGesture:(id)arg1;
- (id)safeAreaInsetsView;
- (void)setSafeAreaInsetsView:(id)arg1;
- (id)titleBgColor;
- (void)setTitleBgColor:(id)arg1;
- (id)darkTitleBgColor;
- (void)setDarkTitleBgColor:(id)arg1;
- (void).cxx_destruct;
@end

