@interface MMFinderLiveProductQuestionBoxDataProvider : NSObject <IMsgExt, WCFinderLiveMsgSessionMgrExt>
{
    BOOL _isLoadingPreMsg; // +0x8
    BOOL _isLoadingRecentMsg; // +0x9
    id /* block */ _unReadCntUpdateCallback; // +0x10
    id /* block */ _currSessionInitiatedCallback; // +0x18
    MMFinderLiveProductQuestionBoxItem * _currProductQueBox; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtensions;
- (void)changeToProductQueBox:(id)arg1;
- (void)checkCurrProductQueBoxChanged:(id /* block */)arg1;
- (void)clearUnreadCountForSessionId:(id)arg1;
- (BOOL)checkHasLocalLiveMsgSessions;
- (void)loadRecentMsgs:(int)arg1 completion:(id /* block */)arg2;
- (void)loadPreMsgs:(int)arg1 from:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)transferMessageWrapsToComments:(id)arg1 boxId:(id)arg2 msgFromDBLoad:(BOOL)arg3;
- (id)transferMessageWrapToComment:(id)arg1 boxId:(id)arg2 msgFromDBLoad:(BOOL)arg3;
- (void)clearLastProductQueBoxDatas;
- (void)configNewProductQueBox:(id)arg1;
- (void)updateCommentStatus:(id)arg1 wrapMsg:(id)arg2 modifySucc:(BOOL)arg3 modifyFail:(BOOL)arg4;
- (id)commentDataMgr;
- (BOOL)isLoadingMsg;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onProductQuestionBoxRequestPreMsgsFromComment:(id)arg1 count:(int)arg2 taskId:(id)arg3 boxId:(id)arg4;
- (void)onProductQuestionBoxLoadRecentMsgsWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)onFinderLiveMsgSessionUnReadCntUpdated:(unsigned int)arg1 sessionId:(id)arg2;
- (void)onFinderLiveMsgSessionInitiated:(id)arg1;
- (id /* block */)unReadCntUpdateCallback;
- (void)setUnReadCntUpdateCallback:(id /* block */)arg1;
- (id /* block */)currSessionInitiatedCallback;
- (void)setCurrSessionInitiatedCallback:(id /* block */)arg1;
- (id)currProductQueBox;
- (void)setCurrProductQueBox:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isLoadingPreMsg;
- (void)setIsLoadingPreMsg:(BOOL)arg1;
- (BOOL)isLoadingRecentMsg;
- (void)setIsLoadingRecentMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end

