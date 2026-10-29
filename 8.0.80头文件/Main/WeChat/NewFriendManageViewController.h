@interface NewFriendManageViewController : SettingPrivateConfigViewController
{
    unsigned long long _newFriendPageSrc; // +0xa0
}
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)reloadTableDataWithReloadFooterView:(BOOL)arg1;
- (void)recommendPhoneChanged:(id)arg1;
- (void)contactVerifySwitchChanged:(id)arg1;
- (void)showAddMeWaysVC;
- (void)showCommonGreetingContent;
- (unsigned long long)newFriendPageSrc;
- (void)setNewFriendPageSrc:(unsigned long long)arg1;
@end
