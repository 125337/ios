@interface WCPayOverseaRedEnvelopesReceiveControlLogic : WCRedEnvelopesControlLogic <WCPayOverseaRedEnvelopesReceiveCgiDelegate, WCPayOverseaRedEnvelopesOpenCgiDelegate, WCPayOverseaRedEnvelopesDetailCgiDelegate, WCRedEnvelopesReceiveHomeViewDelegate>
{
    int m_scene; // +0x38
    BOOL _fromSysMsg; // +0x3c
    BOOL _isOverseaTransfer; // +0x3d
    NSString * _h5UrlString; // +0x40
    NSString * _msgRouteInfo; // +0x48
    WCPayJumpRemindControlLogic * _m_jumpRemindControlLogic; // +0x50
    WCPayOverseaRedEnvelopesReceiveCgi * _receiveCgi; // +0x58
    WCPayOverseaRedEnvelopesOpenCgi * _openCgi; // +0x60
    WCPayOverseaRedEnvelopesDetailCgi * _detailCgi; // +0x68
    WCRedEnvelopesReceiveHomeView * _introView; // +0x70
    ForeignHbReceiveResp * _receiveResp; // +0x78
    ForeignHbOpenResp * _openResp; // +0x80
    ForeignHbDetailResp * _detailResp; // +0x88
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x90
}
- (id)interceptWinLogic;
- (id)introView;
- (id)openCgi;
- (id)receiveCgi;
- (id)detailCgi;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)stopLoading;
- (void)startLogic;
- (void)handleOverseaTransferBubbleClick;
- (void)handleBubbleRouteInfo:(id)arg1 h5String:(id)arg2;
- (id)genReceiveRequest;
- (id)genOpenRequest;
- (id)genDetailRequestWithLimit:(unsigned long long)arg1 offSet:(unsigned long long)arg2;
- (id)genKeyValueFromUrlParam:(id)arg1;
- (void)onWCPayOverseaRedEnvelopesReceiveOK:(id)arg1;
- (void)onWCPayOverseaRedEnvelopesReceiveError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayOverseaRedEnvelopesOpenOK:(id)arg1;
- (void)onWCPayOverseaRedEnvelopesOpenError:(id)arg1 errorDesc:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayOverseaRedEnvelopesDetailOK:(id)arg1;
- (void)onWCPayOverseaRedEnvelopesDetailError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnGoToBalanceDetail;
- (void)OnGoToLqtDetail;
- (void)OnGoToLqtDetail:(id)arg1;
- (void)OnGotoLqtSave:(id)arg1 operateId:(id)arg2;
- (id)h5UrlString;
- (void)setH5UrlString:(id)arg1;
- (id)msgRouteInfo;
- (void)setMsgRouteInfo:(id)arg1;
- (BOOL)fromSysMsg;
- (void)setFromSysMsg:(BOOL)arg1;
- (BOOL)isOverseaTransfer;
- (void)setIsOverseaTransfer:(BOOL)arg1;
- (id)m_jumpRemindControlLogic;
- (void)setM_jumpRemindControlLogic:(id)arg1;
- (void)setReceiveCgi:(id)arg1;
- (void)setOpenCgi:(id)arg1;
- (void)setDetailCgi:(id)arg1;
- (void)setIntroView:(id)arg1;
- (id)receiveResp;
- (void)setReceiveResp:(id)arg1;
- (id)openResp;
- (void)setOpenResp:(id)arg1;
- (id)detailResp;
- (void)setDetailResp:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (void).cxx_destruct;
@end
