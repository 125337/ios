@interface WAPNAuthAddViewController : MMUIViewController <UITextFieldDelegate, CountryCodePickerDelegate>
{
    BOOL _requesting; // +0x70
    id <WAPNAuthAddViewControllerDelegate> _addDelegate; // +0x78
    WAPNAuthCgiHelper * _cgiHelper; // +0x80
    NSString * _requestId; // +0x88
    NSArray * _existMobileList; // +0x90
    NSString * _bindMobile; // +0x98
    UILabel * _areaNameLabel; // +0xa0
    UILabel * _areaCodeLabel; // +0xa8
    UITextField * _phoneField; // +0xb0
    UITextField * _codeField; // +0xb8
    UIButton * _sendCodeButton; // +0xc0
    UIButton * _confirmButton; // +0xc8
    UIButton * _saveRadio; // +0xd0
    UIView * _alertContainer; // +0xd8
    UILabel * _alertLabel; // +0xe0
    NSTimer * _alertHideTimer; // +0xe8
    NSString * _areaCode; // +0xf0
    long long _countdown; // +0xf8
    NSTimer * _timer; // +0x100
}
- (id)initWithCgiHelper:(id)arg1 requestId:(id)arg2 existMobileList:(id)arg3 bindMobile:(id)arg4;
- (void)dealloc;
- (void)cancelAlertTimer;
- (void)showAlert:(id)arg1;
- (void)onAlertTimerFired;
- (BOOL)shouldInteractiveDismiss;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)onTapBack;
- (void)buildViews;
- (void)buildAlertBanner;
- (id)rowLabelWithText:(id)arg1;
- (id)rowContainer;
- (void)onTapSaveRadio;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)fullMobile;
- (BOOL)isValidPhone;
- (BOOL)isValidCode;
- (void)onInputChanged;
- (void)updateSendCodeButtonAppearance;
- (void)updateConfirmButtonAppearance;
- (id)repeatCheckMessage;
- (void)onTapSendCode;
- (void)handleSendCodeFailureWithStatus:(long long)arg1;
- (void)onTapConfirm;
- (void)handleCheckCodeFailureWithStatus:(long long)arg1;
- (void)onTapAreaCode;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)CountryCodePickerQuitWithoutPick;
- (void)startCountdown;
- (void)onTick;
- (void)updateSendTitle;
- (void)stopCountdown;
- (id)addDelegate;
- (void)setAddDelegate:(id)arg1;
- (id)cgiHelper;
- (void)setCgiHelper:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)existMobileList;
- (void)setExistMobileList:(id)arg1;
- (id)bindMobile;
- (void)setBindMobile:(id)arg1;
- (id)areaNameLabel;
- (void)setAreaNameLabel:(id)arg1;
- (id)areaCodeLabel;
- (void)setAreaCodeLabel:(id)arg1;
- (id)phoneField;
- (void)setPhoneField:(id)arg1;
- (id)codeField;
- (void)setCodeField:(id)arg1;
- (id)sendCodeButton;
- (void)setSendCodeButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)saveRadio;
- (void)setSaveRadio:(id)arg1;
- (id)alertContainer;
- (void)setAlertContainer:(id)arg1;
- (id)alertLabel;
- (void)setAlertLabel:(id)arg1;
- (id)alertHideTimer;
- (void)setAlertHideTimer:(id)arg1;
- (id)areaCode;
- (void)setAreaCode:(id)arg1;
- (long long)countdown;
- (void)setCountdown:(long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)requesting;
- (void)setRequesting:(BOOL)arg1;
- (void).cxx_destruct;
@end
