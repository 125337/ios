@interface MMShowHelpViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    NSString * m_userName; // +0x70
    UILabel * m_labelProduct; // +0x78
    BOOL m_bFullVersion; // +0x80
    BOOL m_clearLocalInfo; // +0x81
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

