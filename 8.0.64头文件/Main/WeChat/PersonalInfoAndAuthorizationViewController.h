@interface PersonalInfoAndAuthorizationViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
}
+ (id)getAdManageUrl;
- (void)viewDidLoad;
- (void)reloadTableData;
- (id)getTailView;
- (void)showSystemAuthorizationPresentView;
- (void)showPersonalizedAdsManagementView;
- (void)showPersonalInfoExport;
- (void)showAppAuthManagementView;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)registerYReportSdk;
- (void).cxx_destruct;
@end
