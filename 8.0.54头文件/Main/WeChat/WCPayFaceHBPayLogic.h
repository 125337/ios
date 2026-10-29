@interface WCPayFaceHBPayLogic : WCPayControlLogic <WCActionSheetDelegate, WCPayFaceHBPayViewDelegate, WCPayFaceHBCgiDelegate, IMsgExt, IWCPayFaceHBMgrExt, WCPayFaceHBManagementLogicDelegate, WCRedEnvelopesLogicMgrExt>
{
    id <WCPayFaceHBPayLogicDelegate> m_delegate; // +0x38
    WCPayFaceHBPayView * m_view; // +0x40
    WCPayFaceHBManagementLogic * m_faceHBManagementLogic; // +0x48
    WCPayFaceHBCgi * m_getQRCodeCgi; // +0x50
    WCPayFaceHBCgi * m_deleteQRCodeHBCgi; // +0x58
    WCPayFaceHBQRCodeInfo * m_qrInfo; // +0x60
    BOOL m_bFirstQueryDetail; // +0x68
    NSString * clearTips; // +0x70
    NSString * clearActionTips; // +0x78
    unsigned int enterCount; // +0x80
    unsigned int captureCount; // +0x84
    unsigned int normalSlideCount; // +0x88
    unsigned int normalSelectCount; // +0x8c
    unsigned int caidanSlideCount; // +0x90
    unsigned int caidanSelectCount; // +0x94
    WCPayFaceHBCgi * _invalidataUrlCgi; // +0x98
}
- (void)setDelegate:(id)arg1;
- (void)onManage;
- (void)showPayHBView;
- (void)startLogic;
- (void)stopLogic;
- (void)getDetailReceivers;
- (void)getQRCodeInfo;
- (void)updateQRCode;
- (void)onFailMsgAndStopLogic:(id)arg1;
- (void)onFailMsg:(id)arg1;
- (void)OnFaceHBPayLogicCancel;
- (void)OnFaceHBPayCancel;
- (void)OnFaceHBPayManage;
- (void)OnFaceHBMyRedEnvelopesList;
- (void)OnFaceHBDeleteHB;
- (void)OnFaceHBViewDetail;
- (void)OnFaceHBViewHistory;
- (void)OnLoadMoreRedEnvelopesList;
- (id)loadActionSheetTip;
- (void)OnCaptureScreen;
- (void)onUserstartScreenCapture;
- (void)onUserEndScreenCapture;
- (void)sendInvalidateUrlRequest;
- (void)OnHBSlide:(unsigned int)arg1 select:(unsigned int)arg2 Type:(unsigned int)arg3;
- (void)OnFaceHBManagementCancel;
- (void)OnFaceHBManagementSearch:(id)arg1;
- (void)someoneOpen:(XmlReaderNode_t *)arg1 SendID:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onGetQRCodeInfo:(id)arg1 Error:(id)arg2;
- (void)onClearQRCodeInfo:(id)arg1 Error:(id)arg2;
- (void)onGetInvalidateUrlResp:(id)arg1 Error:(id)arg2;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (id)invalidataUrlCgi;
- (void)setInvalidataUrlCgi:(id)arg1;
- (void).cxx_destruct;
@end

