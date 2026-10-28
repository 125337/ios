@interface SettingModifyAliasInputViewController : MMAcceptAgreementBaseViewController <UITextFieldDelegate, SettingModifyAliasLogicDelegate, SettingModifyAliasViewControllerDelegate>
{
    UIButton * m_forgetPasswordButton; // +0x70
    MMUITextField * m_tfAlias; // +0x78
    UIButton * m_makeSureBtn; // +0x80
    double m_fKeyboardHeight; // +0x88
    SettingModifyAliasLogic * m_settingModifyAliasLogic; // +0x90
    MMUILabel * m_aliasTitleView; // +0x98
    UIFont * m_titleFont; // +0xa0
    UIFont * m_contentFont; // +0xa8
    UIFont * m_aliasFont; // +0xb0
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0xb8
    MMTableViewInfo * m_tableViewInfo; // +0xc0
    MMTableView * m_tableView; // +0xc8
    long long _m_modifyAliasFromSceneType; // +0xd0
    NSString * _m_checkCanSetAliasTicket; // +0xd8
    NSString * _m_setAliasPwdTicket; // +0xe0
    NSString * _m_setAliasHumanFaceTicket; // +0xe8
    NSString * _m_ssesionID; // +0xf0
    id <SettingModifyAliasViewControllerDelegate> _m_delegate; // +0xf8
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)initData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initMakeSureBtn;
- (void)initAliasEdit;
- (void)initAliasTitleView;
- (void)onAliasShowKeyBoard;
- (void)onAliasHideKeyBoard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)reloadTableData;
- (id)genHeaderView;
- (void)makeAliasEdit:(id)arg1;
- (void)OnMakeSureClick;
- (void)onBackButtonClicked:(id)arg1;
- (void)OnCheckAliasValidWithResult:(unsigned int)arg1 retCode:(int)arg2 errorMsg:(id)arg3;
- (void)onSettingModifyAliasSuccess;
- (id)getViewController;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (long long)m_modifyAliasFromSceneType;
- (void)setM_modifyAliasFromSceneType:(long long)arg1;
- (id)m_checkCanSetAliasTicket;
- (void)setM_checkCanSetAliasTicket:(id)arg1;
- (id)m_setAliasPwdTicket;
- (void)setM_setAliasPwdTicket:(id)arg1;
- (id)m_setAliasHumanFaceTicket;
- (void)setM_setAliasHumanFaceTicket:(id)arg1;
- (id)m_ssesionID;
- (void)setM_ssesionID:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
