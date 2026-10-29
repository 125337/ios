@interface PwdNewSetVC : WCAccountBaseViewController <PasswordLogicDelegate, WCBaseInfoItemDelegate>
{
    BOOL _hasSetSuccess; // +0x80
    BOOL _isAutoDismissingAfterVerifyFailure; // +0x81
    unsigned int _ticketType; // +0x84
    int _btnBottomHeight; // +0x88
    long long _scene; // +0x90
    NSString * _ticket; // +0x98
    id /* block */ _onSetSuccess; // +0xa0
    id /* block */ _onCancel; // +0xa8
    UIViewController * _dismissTargetVC; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    MMUILabel * _subtitleLabel; // +0xc0
    WCRedesignButtonItem * _usernameItem; // +0xc8
    WCRedesignTextItem * _pwdItem; // +0xd0
    WCRedesignTextItem * _confirmPwdItem; // +0xd8
    MMUILabel * _hintLabel; // +0xe0
    UIButton * _confirmBtn; // +0xe8
    PasswordLogic * _passwordLogic; // +0xf0
}
- (double)calculateMaxTitleWidth;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)initView;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onCloseButtonClicked;
- (BOOL)disMissSelf;
- (void)onTextFieldChanged:(id)arg1;
- (void)updateConfirmButtonState;
- (void)onConfirmClick;
- (void)setPasswordOK:(id)arg1;
- (void)startVerifyNewPasswordForAliasScene:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)dismissAndFireSetSuccess:(id)arg1;
- (void)setPasswordFail:(id)arg1;
- (void)resendSetPasswordForceClearVoice:(id)arg1 ticketType:(unsigned int)arg2 pwdMd5:(id)arg3;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned int)ticketType;
- (void)setTicketType:(unsigned int)arg1;
- (id /* block */)onSetSuccess;
- (void)setOnSetSuccess:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id)dismissTargetVC;
- (void)setDismissTargetVC:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)usernameItem;
- (void)setUsernameItem:(id)arg1;
- (id)pwdItem;
- (void)setPwdItem:(id)arg1;
- (id)confirmPwdItem;
- (void)setConfirmPwdItem:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)passwordLogic;
- (void)setPasswordLogic:(id)arg1;
- (BOOL)hasSetSuccess;
- (void)setHasSetSuccess:(BOOL)arg1;
- (int)btnBottomHeight;
- (void)setBtnBottomHeight:(int)arg1;
- (BOOL)isAutoDismissingAfterVerifyFailure;
- (void)setIsAutoDismissingAfterVerifyFailure:(BOOL)arg1;
- (void).cxx_destruct;
@end
