@interface MMLimitedModeSecondVerifyViewController : MMVerifyPasswordViewController
{
    MMUILabel * m_descLabel; // +0xa8
    long long _scene; // +0xb0
}
- (void)viewDidLoad;
- (void)onVerifyPasswordSuccess:(id)arg1;
- (void)onVerifyPasswordFail;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end
