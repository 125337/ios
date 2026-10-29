@interface WCFinderAuthorizeToDataViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderContactExt, WCFinderUserPrepareExt>
{
    WCFinderAuthorizeToDataVCParams * _params; // +0x70
    WCTableViewManager * _tableViewManager; // +0x78
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)configureTableView;
- (void)reloadTableView;
- (id)makeReferenceSectionHeaderView;
- (void)onClickGuardNowDetail;
- (void)addVideoReferencePermissionEntry:(id)arg1;
- (void)videoReferenceSwitchDidChange:(id)arg1 cellInfo:(id)arg2;
- (id)loadPermissionItems;
- (void)addOtherDataSettingsSection:(id)arg1;
- (void)addMemtionFilterCell:(id)arg1;
- (void)clickUnDisplayMentioned:(id)arg1;
- (void)extractPOIInfoPermissionFromAssetCell:(id)arg1;
- (void)extractPOIFromAssetPermissionChange:(id)arg1;
- (void)addMJPublisherMutatedContentSaveCell:(id)arg1;
- (void)mjPublisherMutatedContentSwitchDidChange:(id)arg1;
- (void)configRefCell:(id)arg1;
- (void)_configCellEnableForGuardNow:(id)arg1;
- (void)reportSwitchChangedWithEid:(id)arg1 reportType:(long long)arg2 open:(BOOL)arg3;
- (void)registerYReportSdk;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)finderUserPrepareGuardNowStatusChange;
- (void)onFinderContactUpdate:(id)arg1;
- (void)dealloc;
- (id)params;
- (void)setParams:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end
