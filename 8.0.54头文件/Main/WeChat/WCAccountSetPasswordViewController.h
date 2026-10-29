@interface WCAccountSetPasswordViewController : WCAccountBaseViewController <ILinkEventExt, WCAccountForgetPasswordControlLogicDelegate, WCBaseInfoItemDelegate, PasswordLogicDelegate>
{
    id <WCAccountSetPasswordViewControllerDelegate> m_delegate; // +0x78
    PasswordLogic * m_setPasswdLogic; // +0x80
    PasswordLogic * m_verifyPasswdLogic; // +0x88
    WCBaseKeyboardToolBar * m_keyboardBar; // +0x90
    WCAccountTextFieldItem * m_textFieldVerifyPwdItem; // +0x98
    WCAccountTextFieldItem * m_textFieldFirstPwdItem; // +0xa0
    WCAccountTextFieldItem * m_textFieldSecondPwdItem; // +0xa8
    RichTextView * m_bottomView; // +0xb0
    UIButton * m_doneBtn; // +0xb8
    UIButton * m_showBtn; // +0xc0
    NSString * m_nsHeaderTitle; // +0xc8
    NSString * m_nsHeaderTip; // +0xd0
    NSString * m_nsTicket; // +0xd8
    unsigned int m_uiTicketType; // +0xe0
    BOOL m_bShowTip; // +0xe4
    BOOL m_bShow; // +0xe5
    unsigned long long m_scene; // +0xe8
    WCAccountForgetPasswordControlLogic * _forgetPwdLogic; // +0xf0
}
- (BOOL)isFromServerControl;
- (BOOL)isVerifyScene;
- (BOOL)isChangeScene;
- (BOOL)isSetScene;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (BOOL)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setTicket:(id)arg1;
- (void)setTicketType:(unsigned int)arg1;
- (void)setShowTip:(BOOL)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)onSecondNext;
- (id)init;
- (void)viewDidLoad;
- (BOOL)useTableView;
- (void)updateView;
- (void)useForgetPasswordSetting;
- (void)onSetPasswordBack;
- (void)onShowBtnClick;
- (void)checkEnable;
- (void)textFieldTextDidChange:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)setPasswordOK:(id)arg1;
- (void)setPasswordFail:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)doVerifyPassword;
- (void)doChangePassword;
- (void)startLoading;
- (void)stopLoading;
- (void)onWCAccountForgetPasswordControlLogic:(id)arg1 continueWithTicket:(id)arg2 ticketType:(unsigned int)arg3 handled:(BOOL *)arg4;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)forgetPwdLogic;
- (void)setForgetPwdLogic:(id)arg1;
- (void).cxx_destruct;
@end

