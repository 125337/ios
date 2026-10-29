@interface SettingModifyEmailOnBindViewController : SettingModifyEmailBaseViewController
{
    SettingModifyEmailOnBindHeadView * m_commonHeadView; // +0x70
    UIButton * _unbindEmailButton; // +0x78
    NSString * _currentEmail; // +0x80
}
- (id)initWithEmailLogic:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)unbindEmailButton;
- (void)setUnbindEmailButton:(id)arg1;
- (id)currentEmail;
- (void)setCurrentEmail:(id)arg1;
- (void).cxx_destruct;
@end
