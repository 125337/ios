@interface SettingModifyAliasProtocolViewController : MMAcceptAgreementBaseViewController <SettingModifyAliasLogicDelegate, MMWebViewDelegate, SettingModifyAliasViewControllerDelegate, MMCopyLabelDelegate, SettingModifyAliasProtocolHeadViewDelegate>
{
    UIButton * m_modifyAliasButton; // +0x70
    SettingModifyAliasLogic * m_modifyAliasCheckAccountLogic; // +0x78
    MMWebViewController * m_webViewController; // +0x80
    NSString * m_checkCanSetAliasTicket; // +0x88
    NSString * m_setAliasHumanFaceTicket; // +0x90
    NSString * m_ssesionID; // +0x98
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0xa0
    id <SettingModifyAliasViewControllerDelegate> _m_delegate; // +0xa8
}
- (void)viewDidLoad;
- (void)initData;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutModifyAliasButton;
- (void)OnSettingAccountModifyAlias;
- (void)onBackButtonClicked:(id)arg1;
- (void)reportSettingAccountModifyAlias:(id)arg1 withResult:(unsigned int)arg2;
- (void)onCheckCanSetAlias:(id)arg1 verifyType:(unsigned int)arg2 verifyUrl:(id)arg3 ticket:(id)arg4 withResult:(unsigned int)arg5 errorMsg:(id)arg6;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)pushResultViewControllerWithTicket;
- (void)onSettingModifyAliasSuccess;
- (void)onHeadViewTitleLabelLongPress:(id)arg1 withRect:(CGRect)arg2;
- (void)copyText:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
