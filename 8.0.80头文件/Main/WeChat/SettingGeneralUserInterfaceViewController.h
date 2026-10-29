@interface SettingGeneralUserInterfaceViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
}
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)presentModalViewControllerForDL:(id)arg1 animated:(BOOL)arg2;
- (void)handleDarkMode;
- (void)handleLanguageChange;
- (void)handleTranslateLanguage;
- (void)handleFontSizeChange;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (void).cxx_destruct;
@end
