@interface SettingModifyAliasMakeSurelViewController : MMUIHalfScreenViewController <SettingModifyAliasLogicDelegate, SettingModifyAliasViewControllerDelegate>
{
    UIButton * m_modifyAliasButton; // +0x70
    WCAgreementCheckBox * m_agreementCheckBox; // +0x78
    SettingModifyAliasLogic * m_settingModifyAliasLogic; // +0x80
    MMUIButton * m_backgroundButton; // +0x88
    MMUIView * m_contentView; // +0x90
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x98
    MMUILabel * m_titleView; // +0xa0
    NSString * m_nsAliasName; // +0xa8
    MMUIButton * _closeButton; // +0xb0
    NSString * _m_checkCanSetAliasTicket; // +0xb8
    NSString * _m_setAliasPwdTicket; // +0xc0
    NSString * _m_setAliasHumanFaceTicket; // +0xc8
    NSString * _m_ssesionID; // +0xd0
    id <SettingModifyAliasViewControllerDelegate> _m_delegate; // +0xd8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initData;
- (long long)halfViewControllerHeight;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutCommonHeadView;
- (void)layoutAgreementCheckBox;
- (void)layoutModifyAliasButton;
- (void)OnSettingAccountModifyAlias;
- (void)OnSetAliasOK;
- (void)onClickClose:(id)arg1;
- (void)OnModifyAliasWithResult:(unsigned int)arg1 errorMsg:(id)arg2;
- (id)navigationBarBackgroundColor;
- (id)m_nsAliasName;
- (void)setM_nsAliasName:(id)arg1;
- (void)setCloseButton:(id)arg1;
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
