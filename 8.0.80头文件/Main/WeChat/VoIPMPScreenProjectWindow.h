@interface VoIPMPScreenProjectWindow : MMWindow
{
    VoIPMPScreenProjectFlutterViewController * _flutterViewController; // +0x10
}
- (id)initWithFlutterViewController:(id)arg1;
- (void)showWithPushAnimationWithCompletion:(id /* block */)arg1;
- (void)dismissWithPopAnimationWithCompletion:(id /* block */)arg1;
- (void)tearDown;
- (void)dealloc;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (void).cxx_destruct;
@end
