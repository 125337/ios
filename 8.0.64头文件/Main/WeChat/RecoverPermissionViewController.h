@interface RecoverPermissionViewController : MMUIViewController
{
    int m_percent; // +0x70
    MMActivityIndicator * m_loadingView; // +0x78
    UILabel * m_loadingTip; // +0x80
    UIButton * m_goBackButton; // +0x88
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)startFakeLoadingToProgress:(int)arg1;
- (void)updateProgress:(unsigned int)arg1;
- (void)resetProtectionOnPath:(const char *)arg1;
- (void)resetProtectionOnFile:(const char *)arg1;
- (void)onGoBackButtonClicked:(id)arg1;
- (void).cxx_destruct;
@end
