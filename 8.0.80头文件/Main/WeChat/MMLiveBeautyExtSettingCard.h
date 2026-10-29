@interface MMLiveBeautyExtSettingCard : MMUIView
{
    id <MMLiveBeautyExtSettingCardDelegate> _delegate; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _subTitleLabel; // +0x18
    UISwitch * _settingSwitch; // +0x20
}
- (id)init;
- (void)setupSubviews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)heightToFit;
- (void)switchDidChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)settingSwitch;
- (void)setSettingSwitch:(id)arg1;
- (void).cxx_destruct;
@end
