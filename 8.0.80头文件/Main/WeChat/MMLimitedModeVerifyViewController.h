@interface MMLimitedModeVerifyViewController : MMVerifyPasswordViewController
{
    long long _scene; // +0xa8
}
- (void)viewDidLoad;
- (void)onVerifyPasswordSuccess:(id)arg1;
- (void)onVerifyPasswordFail;
- (long long)scene;
- (void)setScene:(long long)arg1;
@end
