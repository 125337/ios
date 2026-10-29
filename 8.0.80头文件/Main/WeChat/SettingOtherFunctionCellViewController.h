@interface SettingOtherFunctionCellViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    WCTableViewNormalCellManager * _pluginCellInfo; // +0x78
}
- (void)handleMomentsSettings;
- (void)handleTingSettings;
- (void)showDiscoverEntranceView;
- (void)showPluginsView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)setupDeepLinkConfig;
- (id)pluginCellInfo;
- (void)setPluginCellInfo:(id)arg1;
- (void).cxx_destruct;
@end
