@interface SettingModifyEmailOnEditViewController : SettingModifyEmailBaseViewController
{
    double m_fKeyboardHeight; // +0x70
    BOOL _hadVerifyEmail; // +0x78
    MMTableView * m_tableView; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x90
    id /* block */ _onBindEmail; // +0x98
    MMUILabel * _emailTitleLabel; // +0xa0
    MMUITextField * _emailTextField; // +0xa8
    UIButton * _confirmButton; // +0xb0
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
- (void)refreshLayoutForResize;
- (void)refreshHeaderViewWidth;
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
