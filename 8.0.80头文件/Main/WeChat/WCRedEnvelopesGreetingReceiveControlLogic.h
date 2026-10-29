@interface WCRedEnvelopesGreetingReceiveControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2019GreetingViewControllerDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate>
{
    int m_scene; // +0x38
    BOOL m_bDidStopCoinAnimation; // +0x3c
    BOOL m_bDidCompleteOpen; // +0x3d
    WCRedEnvelopes2019GreetingViewController * senderView; // +0x40
    WCRedEnvelopes2019GreetingViewController * receiveView; // +0x48
    BOOL m_pictureSwitch; // +0x50
    BOOL m_showEmoticonSwitch; // +0x51
    BOOL _isViewAnimationing; // +0x52
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x58
    NSMutableDictionary * _cacheReceiveDict; // +0x60
    NSString * _reportSessionId; // +0x68
}
- (void)dealloc;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)stopLoading;
- (void)startLogic;
- (void)stopLogic;
- (BOOL)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)onGoToBalanceDetail;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)OnGenGreetingDownloadResult:(id)arg1;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)showReceiveView:(BOOL)arg1 NoShowIcon:(BOOL)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)WCRedEnvelopesGreetingReceiveViewBack;
- (id)WCRedEnvelopesGreetingReceiveViewGetData;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (void)genGreeetingReportSessonId;
- (id)getGreetingReportSessionId;
- (void)WCRedEnvelopesGreetingSenderHomeViewBack;
- (void)onRealnameActionClick:(id)arg1;
- (void)onOpenDetailList;
- (id)interceptWinLogic;
- (void)setInterceptWinLogic:(id)arg1;
- (id)cacheReceiveDict;
- (void)setCacheReceiveDict:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
