@interface SettingDarkModeViewController : MMUIViewController
{
    MMTableViewInfo * _tableViewInfo; // +0x70
    long long _previousSelectedType; // +0x78
}
- (void)viewDidLoad;
- (void)reloadSections;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onFollowSystemSwitch:(id)arg1;
- (void)onSelectDarkMode;
- (void)onSelectLightMode;
- (void)registerYReportSdk;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (long long)previousSelectedType;
- (void)setPreviousSelectedType:(long long)arg1;
- (void).cxx_destruct;
@end
