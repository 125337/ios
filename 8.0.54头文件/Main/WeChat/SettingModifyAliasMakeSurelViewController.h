@interface SettingModifyAliasMakeSurelViewController : MMUIHalfScreenViewController <SettingModifyAliasLogicDelegate, SettingModifyAliasViewControllerDelegate>
{
    UIButton * m_modifyAliasButton; // +0x68
    WCAgreementCheckBox * m_agreementCheckBox; // +0x70
    SettingModifyAliasLogic * m_settingModifyAliasLogic; // +0x78
    MMUIButton * m_backgroundButton; // +0x80
    MMUIView * m_contentView; // +0x88
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x90
    MMUILabel * m_titleView; // +0x98
    NSString * m_nsAliasName; // +0xa0
    MMUIButton * _closeButton; // +0xa8
    NSString * _m_checkCanSetAliasTicket; // +0xb0
    NSString * _m_setAliasPwdTicket; // +0xb8
    NSString * _m_setAliasHumanFaceTicket; // +0xc0
    NSString * _m_ssesionID; // +0xc8
    id <SettingModifyAliasViewControllerDelegate> _m_delegate; // +0xd0
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

