@interface RecoverPermissionViewController : MMUIViewController
{
    int m_percent; // +0x68
    MMActivityIndicator * m_loadingView; // +0x70
    UILabel * m_loadingTip; // +0x78
    UIButton * m_goBackButton; // +0x80
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

