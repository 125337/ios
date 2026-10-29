@interface WCPayFaceHBGetLogic : WCPayControlLogic <WCActionSheetDelegate, WCPayFaceHBGetViewDelegate, WCPayFaceHBCgiDelegate, IWCPayFaceHBMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, IUiUtilExt>
{
    id <WCPayFaceHBGetLogicDelegate> m_delegate; // +0x38
    WCPayFaceHBItem * m_hbItem; // +0x40
    WCPayFaceHBGetView * m_view; // +0x48
    NSString * m_nsCurrentUserName; // +0x50
    UIWindow * m_window; // +0x58
    WCPayFaceHBCgi * m_faceHBOpenCGI; // +0x60
    WCRedEnvelopesControlData * m_redData; // +0x68
    MMUIViewController * preVC; // +0x70
    WCPayFaceHBScanQRCodeHandler * QRCodeHandle; // +0x78
    WCRedEnvelopesRedEnvelopesDetailViewController * m_currentViewController; // +0x80
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x88
    NSString * _currentQrcode; // +0x90
    WCPayComplianceHalfPage * _complianceHalfPage; // +0x98
}
- (void)reloadViews;
- (void)setDelegate:(id)arg1;
- (void)setQRCode:(id)arg1;
- (void)doFaceHBOpenCgi:(id)arg1 leftButtonContinue:(id)arg2;
- (void)setPreViewController:(id)arg1;
- (void)setQRCodeHandle:(id)arg1;
- (void)showHBGetView;
- (void)startLogic;
- (void)stopLogic;
- (void)OnFaceHBGetLogicCancel;
- (void)onFailMsgAndStopLogic:(id)arg1;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 Animation:(BOOL)arg4;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnFaceHBGetCancel;
- (void)OnFaceHBGetOpenHB:(id)arg1;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (void)onOpenFaceHB:(id)arg1 Error:(id)arg2;
- (void)onMainWindowFrameChanged;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (id)interceptWinLogic;
- (void)setInterceptWinLogic:(id)arg1;
- (id)currentQrcode;
- (void)setCurrentQrcode:(id)arg1;
- (id)complianceHalfPage;
- (void)setComplianceHalfPage:(id)arg1;
- (void).cxx_destruct;
@end
