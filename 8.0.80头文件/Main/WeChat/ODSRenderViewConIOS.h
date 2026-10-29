@interface ODSRenderViewConIOS : UIViewController
{
    void * _touchManager; // +0x8
    SharedPtr<XDSInputManager> _inputManager; // +0x10
    XSimpleFunction _willLayoutSubviewNotifunc; // +0x18
    XSimpleFunction _willAppearNotifunc; // +0x20
    XSimpleFunction _willDisappearNotifunc; // +0x28
    function<void (CGSize, CGAffineTransform, double)> _willTransitToSizeNotifunc; // +0x30
    function<void (CGSize, CGAffineTransform)> _didTransitToSizeNotifunc; // +0x50
}
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setupInternal;
- (void)loadView;
- (void)viewDidLoad;
- (id)renderView;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)notifyAttachedByWindowCon;
- (void)notifyDetachedByWindowCon;
- (void)bridgeTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (const void *)inputManager;
- (XSimpleFunction)willLayoutSubviewNotifunc;
- (void)setWillLayoutSubviewNotifunc:(XSimpleFunction)arg1;
- (XSimpleFunction)willAppearNotifunc;
- (void)setWillAppearNotifunc:(XSimpleFunction)arg1;
- (XSimpleFunction)willDisappearNotifunc;
- (void)setWillDisappearNotifunc:(XSimpleFunction)arg1;
- (function<void (CGSize, CGAffineTransform, double)>)willTransitToSizeNotifunc;
- (void)setWillTransitToSizeNotifunc:(function<void (CGSize, CGAffineTransform, double)>)arg1;
- (function<void (CGSize, CGAffineTransform)>)didTransitToSizeNotifunc;
- (void)setDidTransitToSizeNotifunc:(function<void (CGSize, CGAffineTransform)>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
