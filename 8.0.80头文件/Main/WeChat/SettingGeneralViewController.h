@interface SettingGeneralViewController : MMUIViewController <MMTipsViewControllerDelegate, HearingAidExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
}
- (id)init;
- (void)showDeviceListView;
- (void)onShowElderMode;
- (void)onShowHearingAid;
- (void)onShowLimitedMode;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)showSystemAuthorizationPresentView;
- (void)buildNewSettingTableView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)handelEmoticonSetting;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (void)dealloc;
- (void)onLimitedModeChanged;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onHearingAidModeChange:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
