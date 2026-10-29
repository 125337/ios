@interface SettingDiscoverEntranceViewControllerV2 : NewSettingBaseViewController <DiscoverEntranceSettingHandlerDelegate>
{
    unsigned long long _enterScene; // +0x80
    DelaySwitchSettingLogic * _delaySwitchSettingLogic; // +0x88
    DiscoverEntranceSettingReporter * _reporter; // +0x90
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (id)arrangedEntranceTypeList;
- (void)initReporter;
- (void)initView;
- (void)initData;
- (id)genTableHeaderView;
- (void)onReturn;
- (void)showEntranceSettingWithType:(unsigned long long)arg1;
- (void)reloadTableView;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)delaySwitchSettingLogic;
- (void)setDelaySwitchSettingLogic:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
