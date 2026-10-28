@interface MMLiteAppPageSheetWrapViewController : UIViewController <UIGestureRecognizerDelegate>
{
    BOOL _isFullScreen; // +0x8
    float _whiteSpaceHeight; // +0xc
    BOOL _useOpenInfoDeviceHW; // +0x10
    MMLiteAppViewController * _liteAppViewController; // +0x18
    id <MMLiteAppHalfScreenStatusChangeListener> _statusChangeListener; // +0x20
    double _deviceHeight; // +0x28
    double _deviceWidth; // +0x30
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupChildVC;
- (void)setupTapGesture;
- (void)handleTap:(id)arg1;
- (void)setupSwipeGesture;
- (void)handlePan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollToTop;
- (void)scrollToResume;
- (void)animateChildViewToY:(double)arg1;
- (void)updateBgViewMask;
- (id)liteAppViewController;
- (void)setLiteAppViewController:(id)arg1;
- (id)statusChangeListener;
- (void)setStatusChangeListener:(id)arg1;
- (double)deviceHeight;
- (void)setDeviceHeight:(double)arg1;
- (double)deviceWidth;
- (void)setDeviceWidth:(double)arg1;
- (BOOL)useOpenInfoDeviceHW;
- (void)setUseOpenInfoDeviceHW:(BOOL)arg1;
- (void).cxx_destruct;
@end
