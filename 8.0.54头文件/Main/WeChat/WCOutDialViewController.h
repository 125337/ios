@interface WCOutDialViewController : MMUIViewController <WCOutDialPadDelegate, UIGestureRecognizerDelegate, WCOutCountryCodeDelegate, UIViewControllerAnimatedTransitioning, IWCOutCallExt, WCOutGetCallInfoDelegate>
{
    UIButton * m_deleteBtn; // +0x68
    UIButton * m_countryCodeBtn; // +0x70
    UILabel * m_countryNameLabel; // +0x78
    UILabel * m_phoneNumLabel; // +0x80
    UILabel * m_contactNameLabel; // +0x88
    WCOutDialPad * m_dialPad; // +0x90
    BOOL m_isEditingCountryCode; // +0x98
    NSString * m_countryCodeChosen; // +0xa0
    NSMutableString * m_editingCountryCodeText; // +0xa8
    NSMutableString * m_editingPhoneText; // +0xb0
    NSString * m_defaultInput; // +0xb8
    BOOL needDisMissSelf; // +0xc0
    unsigned long long DialScece; // +0xc8
    BOOL hasUserEditFullNumber; // +0xd0
    BOOL hasCheckNumber; // +0xd1
    MMUILabel * _freeTipsLabel; // +0xd8
    WCOutGetCallInfoCgi * _getCallinfo; // +0xe0
    GetWCOCallInfoResponse * _callinfoResp; // +0xe8
}
- (id)init;
- (id)initWithInput:(id)arg1 PhoneNum:(id)arg2 DialScece:(unsigned long long)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)initView;
- (void)didPressedButton:(id)arg1;
- (void)didLongPressDeleteBtn:(id)arg1;
- (void)onShowOperationMenu:(id)arg1;
- (void)onCopyInputLabel;
- (void)onPasteToInputLabel;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)appendToInputWithText:(id)arg1;
- (void)appendToInputWithNextChar:(id)arg1;
- (void)appendToCountryCodeTextWithNextChar:(id)arg1;
- (BOOL)checkIsEditingCountryCode:(BOOL)arg1;
- (void)beginToEditCountryCode;
- (void)appendToPhoneNumTextWithNextChar:(id)arg1;
- (void)removeLastTextFromInput;
- (void)removeLastTextFromCountryCodeText;
- (void)removeLastTextFromPhoneNumText;
- (void)updateCountryCodeAndNeedSave:(BOOL)arg1;
- (void)updatePhoneNumLabel;
- (void)checkFreeTipsLabel;
- (void)OnPressedDialPadKeyWithText:(id)arg1 andKeyCode:(int)arg2;
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)arg1;
- (void)chooseCountryCode;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)OnCheckNumberResp:(unsigned int)arg1 RespCountryCode:(id)arg2;
- (void)getPackageList;
- (void)GetCallInfoResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (BOOL)isFreeCallCountry:(id)arg1;
- (id)freeTipsLabel;
- (void)setFreeTipsLabel:(id)arg1;
- (id)getCallinfo;
- (void)setGetCallinfo:(id)arg1;
- (id)callinfoResp;
- (void)setCallinfoResp:(id)arg1;
- (void).cxx_destruct;
@end

