@interface DiscoverEntranceSettingSheetView : MMAutoLayoutSheetView
{
    id <DiscoverEntranceSettingSheetViewDelegate> _delegate; // +0x8
    DiscoverEntranceSettingConfig * _config; // +0x10
}
- (id)initWithConfig:(id)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)customArrangeViews;
- (void)showWithAnimated:(BOOL)arg1;
- (void)appendIconView;
- (void)appendSwitchListViewWithInfos:(id)arg1;
- (id)genSwitchViewWithInfo:(id)arg1;
- (id)genEntrySwitchViewWithTitle:(id)arg1 uiSwitch:(id)arg2;
- (void)hideSubSwitchViewsWhenEntranceValueChanged:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
