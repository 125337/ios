@interface MMWindowController : NSObject
{
    int _transitionAnimationOptions; // +0x8
    int _animType; // +0xc
    BOOL _bIsAnimationAlpha; // +0x10
    MMUIWindow * _window; // +0x18
    UIViewController * _viewController; // +0x20
}
- (id)initWithViewController:(id)arg1 windowLevel:(int)arg2;
- (void)dealloc;
- (id)getMainWindow;
- (void)setupWindowWithLevel:(int)arg1;
- (id)window;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)showWindowAnimated:(BOOL)arg1 withTransitionAnimation:(int)arg2;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)closeWindowAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)doWindowCloseAnimationWithCompletion:(id /* block */)arg1;
- (void)setWindow:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)bIsAnimationAlpha;
- (void)setBIsAnimationAlpha:(BOOL)arg1;
- (void).cxx_destruct;
@end
