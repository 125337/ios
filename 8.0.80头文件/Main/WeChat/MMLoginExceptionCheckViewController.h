@interface MMLoginExceptionCheckViewController : MMUIViewController
{
    BOOL _countDownFinished; // +0x70
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x78
    UIImage * _alertImage; // +0x80
    UIImageView * _alertImageView; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _descriptionLabel; // +0x98
    UIButton * _confirmButton; // +0xa0
    UIButton * _denyButton; // +0xa8
    NSTimer * _countDownTimer; // +0xb0
    long long _countDownSeconds; // +0xb8
}
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)initSubViews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)onSafeCheckViewClickedConfirm;
- (void)onSafeCheckViewClickedDeny;
- (void)onClose;
- (void)startCountDown;
- (void)invalidateCountDownTimer;
- (void)onCountDownTimerTick;
- (void)finishCountDown;
- (BOOL)isCountDownFinished;
- (void)updateConfirmButtonTitle:(id)arg1;
- (id)confirmButtonTitleForRemainingSeconds:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)alertImage;
- (void)setAlertImage:(id)arg1;
- (id)alertImageView;
- (void)setAlertImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)denyButton;
- (void)setDenyButton:(id)arg1;
- (id)countDownTimer;
- (void)setCountDownTimer:(id)arg1;
- (long long)countDownSeconds;
- (void)setCountDownSeconds:(long long)arg1;
- (BOOL)countDownFinished;
- (void)setCountDownFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
