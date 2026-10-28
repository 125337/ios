@interface JSApiScopeConfirmViewController : MMUIViewController
{
    JSAPIScopeConfirmContainterView * _containerView; // +0x70
    JSApiScopeConfirmWindow * _weakConfirmWindow; // +0x78
}
- (id)initWithWindow:(id)arg1;
- (void)viewDidLoad;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)weakConfirmWindow;
- (void)setWeakConfirmWindow:(id)arg1;
- (void).cxx_destruct;
@end
