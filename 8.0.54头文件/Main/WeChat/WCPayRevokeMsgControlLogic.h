@interface WCPayRevokeMsgControlLogic : WCPayControlLogic <WCPayRecallTransferCgiDelegate, MMWebViewDelegate>
{
    id <WCPayRevokeMsgControlLogicDelegate> _logicDelegate; // +0x38
    CMessageWrap * _msgWrap; // +0x40
    WCPayRecallTransferCgi * _recallTransferCgi; // +0x48
    MMWebViewController * _webViewController; // +0x50
}
+ (id)processWCPayMsgRevokeRespIfNecessary:(id)arg1 revokeTicket:(id)arg2 msgWrap:(id)arg3;
- (id)initWithDelegate:(id)arg1 msgWrap:(id)arg2;
- (void)startLogic;
- (void)requestTransferRecall;
- (void)onGetRecallTransferCgiResp:(id)arg1;
- (void)handleOpenH5WithUrl:(id)arg1;
- (void)webViewDidReturn:(id)arg1;
- (void)revokeCurrentMsgLocally;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)recallTransferCgi;
- (void)setRecallTransferCgi:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void).cxx_destruct;
@end

