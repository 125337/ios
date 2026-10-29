@interface SettingModifyEmailOnVerifyViewController : SettingModifyEmailBaseViewController
{
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x68
    id /* block */ _onSendVerifyEmail; // +0x70
    id /* block */ _onChangeEmail; // +0x78
    WCButtonListView * _buttonListView; // +0x80
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id /* block */)onSendVerifyEmail;
- (void)setOnSendVerifyEmail:(id /* block */)arg1;
- (id /* block */)onChangeEmail;
- (void)setOnChangeEmail:(id /* block */)arg1;
- (id)buttonListView;
- (void)setButtonListView:(id)arg1;
- (void).cxx_destruct;
@end

