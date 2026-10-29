@interface WCRedEnvelopesReceiveControlLogic : WCRedEnvelopesControlLogic <IStoreEmotionSingleDownloadMgrExt, WCRedEnvGetPacketStoryCgiDelegate, WCRedEnvelopesGetTimeLimitPromoCgiDelegate, WCRedEnvGetSplitRedCoverCgiDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate>
{
    int m_scene; // +0x38
    WCRedEnvelopesReceiveHomeView * introView; // +0x40
    BOOL _bHasStartDownloadEmoticon; // +0x48
    BOOL _m_bIsOpening; // +0x49
    BOOL _isDetailPagHasPlay; // +0x4a
    WCPayJumpRemindControlLogic * _m_jumpRemindControlLogic; // +0x50
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x58
    EmojiInfoObj * _emojiInfoObj; // +0x60
    WCRedEnvGetPacketStoryCgi * _m_getPacketStoryCgi; // +0x68
    InterceptWin * _intercept_win_after; // +0x70
    WCPayComplianceHalfPage * _complianceHalfPage; // +0x78
    WCRedEnvelopesAtmospherePagView * _atmospherePagView; // +0x80
    UIView * _redEnvelopesDetailView; // +0x88
}
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)stopLoading;
- (void)startLogic;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)startGetSplitRedCoverFromMsgData;
- (void)onGetSplitRedCoverCgiResp:(id)arg1;
- (void)startGetStoryInfoWithPacketId:(id)arg1;
- (void)startGetStoryInfoWithPacketId:(id)arg1 sendUserName:(id)arg2;
- (void)startGetStoryInfoFromMsgData;
- (void)onGetRedEnvPacketStoryCgiRespOK:(id)arg1 isFromServer:(BOOL)arg2;
- (void)updateStoryAutoplayConfig:(id)arg1 isFromServer:(BOOL)arg2;
- (void)onGetRedEnvPacketStoryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startDownloadStoryInfoResource:(id)arg1 subtypeId:(unsigned int)arg2;
- (BOOL)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (BOOL)isRedEnvelopesHasBeenReceivedAndOutOfDate:(id)arg1;
- (void)showReceivedAndOutOfDataRedEnvelopesIntroView;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)reportReceiveHomeViewEmoticon;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (BOOL)WCRedEnvelopesRedEnvelopesDetailViewControllerBackBlock;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnGoToBalanceDetail;
- (void)OnGoToLqtDetail;
- (void)OnGoToLqtDetail:(id)arg1;
- (void)OnGotoLqtSave:(id)arg1 operateId:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (BOOL)isRedEnvelopesReallyTimeOut:(unsigned long long)arg1 messageWrap:(id)arg2;
- (BOOL)shouldShowAtmospherePagView:(id)arg1;
- (BOOL)shouldShowAtmospherePagViewAtDetailView;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)showTimeLimitPromoWithCache:(id)arg1;
- (void)onWCRedEnvelopesGetTimeLimitPromoCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesGetTimeLimitPromoCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)closeIntroView;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueOpenRedEnvelopesRequest:(id)arg1;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (void)playDetailPag;
- (BOOL)queryCanShowPromotionViewCondition;
- (BOOL)openCanShowPromotionViewCondition;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)onRealnameActionClick:(id)arg1;
- (void)startDownloadEmoticonFromMsgData;
- (void)startDownloadEmoticonWithEmoticonMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)interceptWinLogic;
- (BOOL)isOpenIMHongBao;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewGotoUrl:(id)arg1;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerCheckShowAtmospherePagView;
- (id)m_jumpRemindControlLogic;
- (void)setM_jumpRemindControlLogic:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (BOOL)bHasStartDownloadEmoticon;
- (void)setBHasStartDownloadEmoticon:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)m_getPacketStoryCgi;
- (void)setM_getPacketStoryCgi:(id)arg1;
- (id)intercept_win_after;
- (void)setIntercept_win_after:(id)arg1;
- (BOOL)m_bIsOpening;
- (void)setM_bIsOpening:(BOOL)arg1;
- (id)complianceHalfPage;
- (void)setComplianceHalfPage:(id)arg1;
- (id)atmospherePagView;
- (void)setAtmospherePagView:(id)arg1;
- (id)redEnvelopesDetailView;
- (void)setRedEnvelopesDetailView:(id)arg1;
- (BOOL)isDetailPagHasPlay;
- (void)setIsDetailPagHasPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
