@interface SettingDarkModeViewController : MMUIViewController
{
    MMTableViewInfo * _tableViewInfo; // +0x68
}
- (void)viewDidLoad;
- (void)reloadSections;
- (void)viewDidLayoutSubviews;
- (void)onFollowSystemSwitch:(id)arg1;
- (void)onSelectDarkMode;
- (void)onSelectLightMode;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end

