@interface PwdModifyMobileVerifyVC : WCAccountBaseViewController <WCAccountBindPhoneControlLogicDelegate, WCBaseControlLogicDeleagte>
{
    BOOL _isSendingCode; // +0x80
    BOOL _hasReceivedCode; // +0x81
    int _btnBottomHeight; // +0x84
    NSString * _mobile; // +0x88
    long long _scene; // +0x90
    id /* block */ _onSuccess; // +0x98
    id /* block */ _onCancel; // +0xa0
    id /* block */ _onVerifySuccessPresentNewSet; // +0xa8
    WCAccountBindPhoneControlLogic * _controlLogic; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    WCRedesignButtonItem * _phoneButtonItem; // +0xc0
    WCRedesignVerifyCodeTextItem * _verifyCodeItem; // +0xc8
    MMUIButton * _changePhoneButton; // +0xd0
    UIButton * _confirmButton; // +0xd8
}
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)initNavigationBar;
- (void)initView;
- (void)onKeyboardChangingHeight:(double)arg1;
- (id)formattedPhoneNumber;
- (void)onCloseTap;
- (void)onGetCodeTap;
- (void)onChangePhoneTap;
- (void)onConfirmTap;
- (void)setupControlLogic;
- (void)updateConfirmButtonState;
- (void)onCodeTextChanged:(id)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id /* block */)onSuccess;
- (void)setOnSuccess:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onVerifySuccessPresentNewSet;
- (void)setOnVerifySuccessPresentNewSet:(id /* block */)arg1;
- (id)controlLogic;
- (void)setControlLogic:(id)arg1;
- (BOOL)isSendingCode;
- (void)setIsSendingCode:(BOOL)arg1;
- (BOOL)hasReceivedCode;
- (void)setHasReceivedCode:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)phoneButtonItem;
- (void)setPhoneButtonItem:(id)arg1;
- (id)verifyCodeItem;
- (void)setVerifyCodeItem:(id)arg1;
- (id)changePhoneButton;
- (void)setChangePhoneButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (int)btnBottomHeight;
- (void)setBtnBottomHeight:(int)arg1;
- (void).cxx_destruct;
@end
