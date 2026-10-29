@interface SettingModifyAliasProtocolHeadView : MMAcceptAgreementCommonHeadView <MMCopyLabelDelegate>
{
    MMCopyLabel * _m_aliasLabel; // +0x8
}
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)onLabelLongPress:(id)arg1 withRect:(CGRect)arg2;
- (id)m_aliasLabel;
- (void)setM_aliasLabel:(id)arg1;
- (void).cxx_destruct;
@end

