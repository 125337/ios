@interface SettingDiscoverEntranceViewControllerV2 : NewSettingBaseViewController <DiscoverEntranceSettingHandlerDelegate>
{
    DelaySwitchSettingLogic * _delaySwitchSettingLogic; // +0x80
    DiscoverEntranceSettingReporter * _reporter; // +0x88
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
- (void)reloadTableView;
- (id)delaySwitchSettingLogic;
- (void)setDelaySwitchSettingLogic:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
