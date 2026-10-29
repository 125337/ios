@interface MMLiveProceedWebViewController : MMWebViewController
{
    id /* block */ _proceedActionCallback; // +0x68
    UIView * _bottomBackgroundView; // +0x70
    UIView * _gradientBackgroundView; // +0x78
    CAGradientLayer * _gradientLayer; // +0x80
    UIView * _bottomOperationView; // +0x88
    UIButton * _proceedButton; // +0x90
    MMTimer * _countDownTimer; // +0x98
    long long _innerReadTimerCountdown; // +0xa0
    NSString * _proceedButtonTitle; // +0xa8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)configNavigationBarItem;
- (void)startCountdownTimer:(long long)arg1;
- (void)updateCountTimer;
- (void)clearCountdownTimer;
- (void)updateButtonTitle:(id)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)onClickProceedAction:(id)arg1;
- (id /* block */)proceedActionCallback;
- (void)setProceedActionCallback:(id /* block */)arg1;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:(id)arg1;
- (id)gradientBackgroundView;
- (void)setGradientBackgroundView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)bottomOperationView;
- (void)setBottomOperationView:(id)arg1;
- (id)proceedButton;
- (void)setProceedButton:(id)arg1;
- (id)countDownTimer;
- (void)setCountDownTimer:(id)arg1;
- (long long)innerReadTimerCountdown;
- (void)setInnerReadTimerCountdown:(long long)arg1;
- (id)proceedButtonTitle;
- (void)setProceedButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end

