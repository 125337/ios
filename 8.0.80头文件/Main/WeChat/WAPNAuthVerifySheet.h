@interface WAPNAuthVerifySheet : WAPageSheet <UITextFieldDelegate>
{
    BOOL _allowSendSms; // +0x8
    BOOL _requesting; // +0x9
    id <WAPNAuthVerifySheetDelegate> _verifyDelegate; // +0x10
    WAPNAuthCgiHelper * _cgiHelper; // +0x18
    NSString * _showMobile; // +0x20
    NSString * _mobile; // +0x28
    long long _mobileType; // +0x30
    NSString * _requestId; // +0x38
    long long _scene; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _sentToLabel; // +0x50
    UILabel * _countdownNumberLabel; // +0x58
    UILabel * _countdownSuffixLabel; // +0x60
    UIButton * _resendButton; // +0x68
    NSMutableArray * _codeCellLabels; // +0x70
    UITextField * _codeField; // +0x78
    long long _countdown; // +0x80
    NSTimer * _countdownTimer; // +0x88
}
- (id)initWithCgiHelper:(id)arg1 showMobile:(id)arg2 mobile:(id)arg3 mobileType:(long long)arg4 allowSendSms:(BOOL)arg5 requestId:(id)arg6 scene:(long long)arg7;
- (void)dealloc;
- (void)buildContent;
- (void)updateCodeCellBorders;
- (void)refreshCodeCellDigits;
- (double)contentHeight;
- (void)onTapClose;
- (void)onTapCells;
- (void)sendCodeImmediately;
- (void)startSendCode;
- (void)handleSendCodeFailureWithStatus:(long long)arg1;
- (void)onCodeChanged;
- (void)startCheckCode:(id)arg1;
- (void)handleCheckCodeFailureWithStatus:(long long)arg1;
- (void)onTapResend;
- (void)startCountdown;
- (void)onTick;
- (void)updateCountdownNumber;
- (void)stopCountdown;
- (void)showError:(id)arg1;
- (void)pageSheetDidClose:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)verifyDelegate;
- (void)setVerifyDelegate:(id)arg1;
- (id)cgiHelper;
- (void)setCgiHelper:(id)arg1;
- (id)showMobile;
- (void)setShowMobile:(id)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (long long)mobileType;
- (void)setMobileType:(long long)arg1;
- (BOOL)allowSendSms;
- (void)setAllowSendSms:(BOOL)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sentToLabel;
- (void)setSentToLabel:(id)arg1;
- (id)countdownNumberLabel;
- (void)setCountdownNumberLabel:(id)arg1;
- (id)countdownSuffixLabel;
- (void)setCountdownSuffixLabel:(id)arg1;
- (id)resendButton;
- (void)setResendButton:(id)arg1;
- (id)codeCellLabels;
- (void)setCodeCellLabels:(id)arg1;
- (id)codeField;
- (void)setCodeField:(id)arg1;
- (long long)countdown;
- (void)setCountdown:(long long)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (BOOL)requesting;
- (void)setRequesting:(BOOL)arg1;
- (void).cxx_destruct;
@end
