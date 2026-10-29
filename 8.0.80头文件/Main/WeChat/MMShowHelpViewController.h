@interface MMShowHelpViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    NSString * m_userName; // +0x78
    UILabel * m_labelProduct; // +0x80
    BOOL m_bFullVersion; // +0x88
    BOOL m_clearLocalInfo; // +0x89
}
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)showUploadLogView;
- (void)showUploadStackView;
- (void)showRecoverView;
- (void)onShowClearInitMark;
- (void)onShowRecoverAPNSToken;
- (void)clearInitMark;
- (void)showMemStat;
- (void)setupDeepLinkConfig;
- (void)onExitApp;
- (void)reloadTableData;
- (id)getHeaderView;
- (void)updateProduct;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)onBack;
- (void).cxx_destruct;
@end
