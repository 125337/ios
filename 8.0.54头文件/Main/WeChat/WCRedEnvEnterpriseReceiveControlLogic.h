@interface WCRedEnvEnterpriseReceiveControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvGetSplitRedCoverCgiDelegate, WCRedEnvGetPacketStoryCgiDelegate, WCAtomicRedEnvReceiveHomeViewDelegate, WCAtomicRedEnvReceiveWelcomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCFestivalRedEnvShareViewDelegate, WCFestivalRedEnvFinishViewDelegate, WCPayLogicMgrExt>
{
    int m_scene; // +0x38
    WCRedEnvelopesReceiveHomeView * m_oIntroView; // +0x40
    WCAtomicRedEnvReceiveHomeView * m_oAtomicIntroView; // +0x48
    WCAtomicRedEnvReceiveWelcomeView * m_oWelcomeView; // +0x50
    WCFestivalRedEnvShareView * m_oShareView; // +0x58
    WCFestivalRedEnvFinishView * m_oFinishView; // +0x60
    JSEvent * m_jsEvent; // +0x68
    BOOL bStopedLogic; // +0x70
    NSError * m_error; // +0x78
    id <WCRedEnvWeAppDelegate> _logicDelegate; // +0x80
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x88
}
- (void)stopLoading;
- (void)startGetStoryInfoFromMsgData;
- (void)onGetRedEnvPacketStoryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onGetRedEnvPacketStoryCgiRespOK:(id)arg1 isFromServer:(BOOL)arg2;
- (void)startDownloadStoryInfoResource:(id)arg1 subtypeId:(unsigned int)arg2;
- (void)updateStoryAutoplayConfig:(id)arg1 isFromServer:(BOOL)arg2;
- (void)startGetStoryInfoWithPacketId:(id)arg1;
- (void)initHbShowSource;
- (void)startGetSplitRedCoverFromMsgData;
- (void)onGetSplitRedCoverCgiResp:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)OnReceiveAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)introViewEndAnimation;
- (void)introViewStartReceiveAnimation;
- (void)introViewStopReceiveAnimation;
- (void)introViewRemoveView;
- (void)OnOpenAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (unsigned int)getStatFromScene;
- (void)closeFinishViewAndStopLogic;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnReceiveBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnOpenBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnCheckBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)WCAtomicRedEnvReceiveHomeViewBack;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopes:(BOOL)arg1;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopesInner:(BOOL)arg1;
- (void)WCAtomicRedEnvReceiveHomeViewOpenList;
- (void)WCAtomicRedEnvReceiveWelcomeViewBack;
- (void)WCAtomicRedEnvReceiveWelcomeViewShowDetail;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnGoToBalanceDetail;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)WCFestivalRedEnvShareViewBack;
- (void)WCFestivalRedEnvShareViewToFinish;
- (void)OnAsyncBizSubcribeResponse:(id)arg1 Error:(id)arg2;
- (void)WCFestivalRedEnvFinishViewBack;
- (void)WCFestivalRedEnvFinishViewToShare;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)onRealnameActionClick:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (id)interceptWinLogic;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (int)m_scene;
- (void)setM_scene:(int)arg1;
- (id)m_jsEvent;
- (void)setM_jsEvent:(id)arg1;
- (id)m_error;
- (void)setM_error:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (void).cxx_destruct;
@end

