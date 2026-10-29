@interface ShareTo3rdAppManageCell : MMUIView
{
    MMWebImageView * _iconImageView; // +0x8
    UILabel * _nameLabel; // +0x10
    UISwitch * _switchView; // +0x18
    AppRegisterInfo * m_appInfo; // +0x20
    id <ShareTo3rdAppManageCellDelegate> m_delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 withAppInfo:(id)arg2;
- (void)layoutSubviews;
- (void)actionSwitchValueChanged:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
