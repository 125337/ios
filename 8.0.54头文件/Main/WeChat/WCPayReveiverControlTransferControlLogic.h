@interface WCPayReveiverControlTransferControlLogic : WCPayControlLogic <IWCPayControlLogicExt, IMsgRevokeExt, WCPayUnionTransferQueryCgiDelegate, WCPayUnionTransferConfirmCgiDelegate, WCPayTransferOpenMiniGuidePageSheetDelegate, MMUseCaseCallback, WCPayTransferMoneyStatusViewControllerDelegate>
{
    BOOL _bIsOpenIM; // +0x38
    WCPayJumpRemindControlLogic * _m_jumpRemindControlLogic; // +0x40
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x48
    InterceptWin * _intercept_win_after; // +0x50
    WCPayComplianceHalfPage * _complianceHalfPage; // +0x58
    WCPayUnionTransferQueryCgi * _unionQueryCgi; // +0x60
    WCPayUnionTransferConfirmCgi * _unionConfirmCgi; // +0x68
    NSDictionary * _recvChannelSubTitleClickInfo; // +0x70
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer:(id)arg1 againCtx:(id)arg2;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(id)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)ToRefusedMoney;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(id)arg1;
- (BOOL)OnWCPayTransferMoneyStatusViewControllerBackBlock;
- (void)onWCPayTransferMoneyStatusViewControllerSetSubTitleClickInfo:(id)arg1;
- (void)onWCPayUnionTransferConfirmCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferConfirmCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferQueryCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferQueryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnCheckTransferMoneyStatus:(id)arg1 Error:(id)arg2;
- (void)OnConfirmTransferMoney:(id)arg1 Error:(id)arg2;
- (void)onWCPayTransferOpenMiniGuidePageSheetRefuseTransfer;
- (void)onWCPayTransferOpenMiniGuidePageSheetNeedRefresh;
- (void)onWCPayTransferOpenMiniGuidePageSheetClickLink:(id)arg1;
- (void)checkMoneyStatusAfterConfirm:(id)arg1;
- (void)OnRefuseTransferMoney:(id)arg1 Error:(id)arg2;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (id)interceptWinLogic;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getRevokeTips;
- (void)call:(id)arg1;
- (id)m_jumpRemindControlLogic;
- (void)setM_jumpRemindControlLogic:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (id)intercept_win_after;
- (void)setIntercept_win_after:(id)arg1;
- (id)complianceHalfPage;
- (void)setComplianceHalfPage:(id)arg1;
- (BOOL)bIsOpenIM;
- (void)setBIsOpenIM:(BOOL)arg1;
- (id)unionQueryCgi;
- (void)setUnionQueryCgi:(id)arg1;
- (id)unionConfirmCgi;
- (void)setUnionConfirmCgi:(id)arg1;
- (id)recvChannelSubTitleClickInfo;
- (void)setRecvChannelSubTitleClickInfo:(id)arg1;
- (void).cxx_destruct;
@end

