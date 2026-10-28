@interface WCFinderPrivacySettingViewController : WCFinderWCTableViewManagerVC <WCFinderPrivacySettingHelperDelegate>
{
    WCFinderPersonalSettingParams * _params; // +0x70
    WCFinderContact * _contact; // +0x78
    WCFinderPrivacySettingHelper * _helper; // +0x80
}
- (id)initWithContact:(id)arg1 params:(id)arg2;
- (void)setContact:(id)arg1;
- (void)viewDidLoad;
- (void)updateTitle;
- (void)finderUserPrepareUpdate:(id)arg1;
- (int)feedViewControllerScene;
- (void)requestReloadTableView;
- (void)onBuildTables;
- (void)registerYReportSdk;
- (id)params;
- (void)setParams:(id)arg1;
- (id)contact;
- (id)helper;
- (void)setHelper:(id)arg1;
- (void).cxx_destruct;
@end
