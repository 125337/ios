@interface NetworkCheckViewController : MMWindowViewController <ILocationMgrExt>
{
    UIButton * m_cancelBtn; // +0x80
    UIImageView * m_iconView; // +0x88
    UILabel * m_statusLabel; // +0x90
    UILabel * m_detailLabel; // +0x98
    UIButton * m_confirmBtn; // +0xa0
    MMTimer * m_progressTimer; // +0xa8
    int m_progressCounter; // +0xb0
    int m_progress; // +0xb4
    int m_progressStep; // +0xb8
    unsigned long long m_locationTag; // +0xc0
    BOOL m_connetOK; // +0xc8
    BOOL m_baseNetOK; // +0xc9
    BOOL m_longlinkOK; // +0xca
    NSString * m_kvString; // +0xd0
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
