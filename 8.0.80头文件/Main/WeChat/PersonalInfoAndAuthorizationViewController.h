@interface PersonalInfoAndAuthorizationViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
}
+ (id)getAdManageUrl;
- (void)viewDidLoad;
- (void)reloadTableData;
- (BOOL)enableExportDataWithLiteApp;
- (id)getTailView;
- (void)showPersonalizedAdsManagementView;
- (void)showPersonalInfoExport;
- (void)showAppAuthManagementView;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)handleExportDataCellClick;
- (void)jumpToExportDataUrl;
- (void)registerYReportSdk;
- (void)setupDeepLinkConfig;
- (void).cxx_destruct;
@end
