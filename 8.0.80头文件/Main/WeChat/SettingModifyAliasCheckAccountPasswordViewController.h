@interface SettingModifyAliasCheckAccountPasswordViewController : MMAcceptAgreementBaseViewController <UITextFieldDelegate, MMAcceptAgreementResultViewControllerDelegate, PasswordLogicDelegate, SettingModifyAliasViewControllerDelegate>
{
    UIButton * m_forgetPasswordButton; // +0x70
    MMUITextField * m_tfPassword; // +0x78
    MMUILabel * m_passwordTitleView; // +0x80
    UIButton * m_makeSureBtn; // +0x88
    double m_fKeyboardHeight; // +0x90
    PasswordLogic * m_verifyPasswdLogic; // +0x98
    NSString * m_setAliasPwdTicket; // +0xa0
    UINavigationController * _pendingResetPwdNav; // +0xa8
    BOOL _hasAppeared; // +0xb0
    BOOL m_isSmallScreenLayout; // +0xb1
    BOOL m_makeSureBtnLayoutInited; // +0xb2
    BOOL m_verifyFailed; // +0xb3
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0xb8
    MMTableViewInfo * m_tableViewInfo; // +0xc0
    MMTableView * m_tableView; // +0xc8
    NSString * _m_checkCanSetAliasTicket; // +0xd0
    id <SettingModifyAliasViewControllerDelegate> _m_delegate; // +0xd8
    NSString * _m_ssesionID; // +0xe0
}
- (id)pwdModifyOptService;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)presentResetPwdNav:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)updateMakeSureBtnForScreenSize;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initForgetPasswordButton;
- (void)initPasswordTitleView;
- (void)initMakeSureBtn;
- (void)initPasswordEdit;
- (void)onPasswordShowKeyBoard;
- (void)onPasswordHideKeyBoard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)reloadTableData;
- (id)genHeaderView;
- (id)genFooterView;
- (void)makePasswordEdit:(id)arg1;
- (void)OnSettingAccountCheckForgetPassWord;
- (void)OnMakeSureClick;
- (void)showOldForgetPasswordResult;
- (void)doVerifyPassword;
- (void)onBackButtonClicked:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onSettingModifyAliasSuccess;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_checkCanSetAliasTicket;
- (void)setM_checkCanSetAliasTicket:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_ssesionID;
- (void)setM_ssesionID:(id)arg1;
- (void).cxx_destruct;
@end
