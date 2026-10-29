@interface NetworkCheckViewController : MMWindowViewController <ILocationMgrExt>
{
    UIButton * m_cancelBtn; // +0x78
    UIImageView * m_iconView; // +0x80
    UILabel * m_statusLabel; // +0x88
    UILabel * m_detailLabel; // +0x90
    UIButton * m_confirmBtn; // +0x98
    MMTimer * m_progressTimer; // +0xa0
    int m_progressCounter; // +0xa8
    int m_progress; // +0xac
    int m_progressStep; // +0xb0
    unsigned long long m_locationTag; // +0xb8
    BOOL m_connetOK; // +0xc0
    BOOL m_baseNetOK; // +0xc1
    BOOL m_longlinkOK; // +0xc2
    NSString * m_kvString; // +0xc8
}
- (void)viewDidLoad;
- (void)updateProgress;
- (int)getCheckingProgress;
- (void)onNetworkCheckFinished:(BOOL)arg1 baseNetOK:(BOOL)arg2 longLinkOK:(BOOL)arg3 kvString:(id)arg4;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateForNetworkOK;
- (void)updateForNetworkFail;
- (void)updateForSubmitInfoWithLocation:(id)arg1;
- (void)updateViewWithStatus:(id)arg1 detail:(id)arg2 hasConfirmBtn:(BOOL)arg3;
- (void)onConfirmBtnClicked;
- (void)onCancelBtnClicked;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void).cxx_destruct;
@end

