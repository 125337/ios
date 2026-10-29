@interface MMFinderLiveShopSettingsSwitchItemView : MMFinderLiveShopSettingItemView
{
    UISwitch * _switchView; // +0x48
    UIView * _switchTapView; // +0x50
    id /* block */ _onSwitchChange; // +0x58
    id /* block */ _onSwitchTap; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)onSwitchTapViewTaped:(id)arg1;
- (void)layoutSubviews;
- (id)switchView;
- (void)setSwitchView:(id)arg1;
- (id)switchTapView;
- (void)setSwitchTapView:(id)arg1;
- (id /* block */)onSwitchChange;
- (void)setOnSwitchChange:(id /* block */)arg1;
- (id /* block */)onSwitchTap;
- (void)setOnSwitchTap:(id /* block */)arg1;
- (void).cxx_destruct;
@end

