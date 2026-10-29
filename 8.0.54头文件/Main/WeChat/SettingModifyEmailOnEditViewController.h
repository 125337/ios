@interface SettingModifyEmailOnEditViewController : SettingModifyEmailBaseViewController
{
    double m_fKeyboardHeight; // +0x68
    BOOL _hadVerifyEmail; // +0x70
    MMTableView * m_tableView; // +0x78
    MMTableViewInfo * m_tableViewInfo; // +0x80
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x88
    id /* block */ _onBindEmail; // +0x90
    MMUILabel * _emailTitleLabel; // +0x98
    MMUITextField * _emailTextField; // +0xa0
    UIButton * _confirmButton; // +0xa8
}
- (id)initWithEmailLogic:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)arg1;
- (id)emailTitleLabel;
- (id)emailTextField;
- (id)confirmButton;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChange;
- (void)onClickConfirmButton;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)reloadTableData;
- (id)genHeaderView;
- (id)getHeadTitle;
- (void)makeEmailEdit:(id)arg1;
- (void)layoutConfirmButton;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id /* block */)onBindEmail;
- (void)setOnBindEmail:(id /* block */)arg1;
- (void)setEmailTitleLabel:(id)arg1;
- (void)setEmailTextField:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (BOOL)hadVerifyEmail;
- (void)setHadVerifyEmail:(BOOL)arg1;
- (void).cxx_destruct;
@end

