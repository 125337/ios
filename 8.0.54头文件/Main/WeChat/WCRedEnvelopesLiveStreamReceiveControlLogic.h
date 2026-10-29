@interface WCRedEnvelopesLiveStreamReceiveControlLogic : WCRedEnvelopesControlLogic <IStoreEmotionSingleDownloadMgrExt, WCRedEnvGetPacketStoryCgiDelegate, WCRedEnvGetSplitRedCoverCgiDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate>
{
    int m_scene; // +0x38
    BOOL _bHasStartDownloadEmoticon; // +0x3c
    BOOL _m_bIsOpening; // +0x3d
    id <WCRedEnvelopesLiveStreamReceiveControlLogicDelegate> _m_delegate; // +0x40
    WCRedEnvelopesReceiveHomeView * _introView; // +0x48
    WCPayJumpRemindControlLogic * _m_jumpRemindControlLogic; // +0x50
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x58
    EmojiInfoObj * _emojiInfoObj; // +0x60
    InterceptWin * _intercept_win_after; // +0x68
    WCPayComplianceHalfPage * _complianceHalfPage; // +0x70
    WCRedEnvelopesAtmospherePagView * _atmospherePagView; // +0x78
    UIView * _redEnvelopesDetailView; // +0x80
}
- (id)openWxHbRequestForRetry;
- (void)setOpenWxHbRequestForRetry:(id)arg1;
- (id)atmospherePagView;
- (id)introView;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)startLogic;
- (BOOL)shouldShowAtmospherePagView:(id)arg1;
- (BOOL)shouldShowAtmospherePagView;
- (void)startGetSplitRedCoverFromMsgData;
- (void)onGetSplitRedCoverCgiResp:(id)arg1;
- (void)startGetStoryInfoFromMsgData;
- (void)startGetStoryInfoWithPacketId:(id)arg1;
- (void)onGetRedEnvPacketStoryCgiRespOK:(id)arg1 isFromServer:(BOOL)arg2;
- (void)updateStoryAutoplayConfig:(id)arg1 isFromServer:(BOOL)arg2;
- (void)onGetRedEnvPacketStoryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startDownloadStoryInfoResource:(id)arg1 subtypeId:(unsigned int)arg2;
- (void)startLoading;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes:(id)arg1;
- (void)retryOpenRedEnvelopesRequest;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)reportReceiveHomeViewEmoticon;
- (void)startDownloadEmoticonFromMsgData;
- (void)startDownloadEmoticonWithEmoticonMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)interceptWinLogic;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (unsigned int)openRetryCount;
- (void)setOpenRetryCount:(unsigned int)arg1;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueOpenRedEnvelopesRequest:(id)arg1;
- (void)playDetailPag;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (BOOL)isRedEnvelopesReallyTimeOut:(unsigned long long)arg1 messageWrap:(id)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (BOOL)WCRedEnvelopesRedEnvelopesDetailViewControllerBackBlock;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnGoToBalanceDetail;
- (void)OnGoToLqtDetail;
- (void)OnGoToLqtDetail:(id)arg1;
- (void)OnGotoLqtSave:(id)arg1 operateId:(id)arg2;
- (void)onRealnameActionClick:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (id)getBizDisplayWindow;
- (void)closeIntroView;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setIntroView:(id)arg1;
- (id)m_jumpRemindControlLogic;
- (void)setM_jumpRemindControlLogic:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (BOOL)bHasStartDownloadEmoticon;
- (void)setBHasStartDownloadEmoticon:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)intercept_win_after;
- (void)setIntercept_win_after:(id)arg1;
- (BOOL)m_bIsOpening;
- (void)setM_bIsOpening:(BOOL)arg1;
- (id)complianceHalfPage;
- (void)setComplianceHalfPage:(id)arg1;
- (void)setAtmospherePagView:(id)arg1;
- (id)redEnvelopesDetailView;
- (void)setRedEnvelopesDetailView:(id)arg1;
- (void).cxx_destruct;
@end

