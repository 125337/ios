@interface WCTSettingDescSwitchView : WCTBaseSettingView
{
    UISwitch * _switchControl; // +0x8
    MMUILabel * _descLabel; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)loadUI:(id)arg1;
- (id)switchControl;
- (id)descLabel;
- (void).cxx_destruct;
@end
