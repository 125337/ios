@interface WCPaySenderControlTransferControlLogic : WCPayControlLogic <WCPayRetrySendTransferMessageLogicDelegate, IMsgRevokeExt, WCPayUnionTransferQueryCgiDelegate, WCPayTransferMoneyStatusViewControllerDelegate>
{
    BOOL _bIsOpenIM; // +0x38
    WCPayUnionTransferQueryCgi * _unionQueryCgi; // +0x40
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)onRetrySendTransferMsgSucc;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(id)arg1;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferQueryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnCheckTransferMoneyStatus:(id)arg1 Error:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getRevokeTips;
- (BOOL)bIsOpenIM;
- (void)setBIsOpenIM:(BOOL)arg1;
- (id)unionQueryCgi;
- (void)setUnionQueryCgi:(id)arg1;
- (void).cxx_destruct;
@end

