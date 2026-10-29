@interface MMFinderLiveCommentTableViewModel : MMLiveCommentTableViewModel
{
    BOOL _needTableViewAutoScrollToRereshBeforeUnDisplay; // +0x8
    BOOL _hasSuccessLoadLocalDataAfterDisplay; // +0x9
    BOOL _hasSuccessFetchRemoteDataAfterDisplay; // +0xa
    long long _commentContentState; // +0x10
    id /* block */ _finderCellModelDidTapBlock; // +0x18
    id /* block */ _actionInvokeBlock; // +0x20
    id /* block */ _getSingleEnableCommentCallback; // +0x28
    id /* block */ _tableVMDidDoubleTapBlock; // +0x30
    id /* block */ _localCommentAppendCallback; // +0x38
    id /* block */ _tableVMRetryPostBlock; // +0x40
    MMFinderLiveCommentDataAppendLogic * _commentDataAppendLogic; // +0x48
}
- (long long)commentCellFrameStyle;
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)initData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)commentDataMgr;
- (Class)commentTableViewCellFrameClass;
- (id)createCommentPubbleViewWithCommentItem:(id)arg1 taskId:(id)arg2;
- (void)prepareTableViewCellForReuse:(id)arg1;
- (id)appendCommentContentFromMySelf:(id)arg1 toDataItem:(id)arg2;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 extra:(id)arg4;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 poiAddrSubStr:(id)arg4 extra:(id)arg5;
- (id)finderLiveTask;
- (void)handleForCommentContentViewDisplay:(BOOL)arg1;
- (void)checkIsHasTrackingData:(BOOL)arg1;
- (void)checkisFirstLocalDataLoaded;
- (void)checkisFirstRemoteDataLoaded;
- (CGPoint)convertLocation:(CGPoint)arg1 fromCellToTableView:(id)arg2;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (void)onInsertLiveCommentFail;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (BOOL)canAddHotWords;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)arg1 boxId:(id)arg2 isHistoryComment:(BOOL)arg3;
- (void)onMMLiveCommentDataInsertPreForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataResetForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMFinderGroupLiveChatMessageSuccessLoaded:(id)arg1;
- (void)onMMFinderGroupLiveChatLocalMessageLoaded:(id)arg1;
- (BOOL)calculateCellFrameAsync;
- (void)setHasSuccessFetchRemoteDataAfterDisplay:(BOOL)arg1;
- (void)setHasSuccessLoadLocalDataAfterDisplay:(BOOL)arg1;
- (void)setLoadingFirstLocalData:(BOOL)arg1;
- (void)setLoadingFirstRemoteData:(BOOL)arg1;
- (void)updateEnableCustomData;
- (void)showHotWord:(id)arg1 prevCount:(long long)arg2 currentCount:(long long)arg3;
- (void)hideHotWords;
- (long long)commentContentState;
- (void)setCommentContentState:(long long)arg1;
- (id /* block */)finderCellModelDidTapBlock;
- (void)setFinderCellModelDidTapBlock:(id /* block */)arg1;
- (id /* block */)actionInvokeBlock;
- (void)setActionInvokeBlock:(id /* block */)arg1;
- (id /* block */)getSingleEnableCommentCallback;
- (void)setGetSingleEnableCommentCallback:(id /* block */)arg1;
- (id /* block */)tableVMDidDoubleTapBlock;
- (void)setTableVMDidDoubleTapBlock:(id /* block */)arg1;
- (id /* block */)localCommentAppendCallback;
- (void)setLocalCommentAppendCallback:(id /* block */)arg1;
- (id /* block */)tableVMRetryPostBlock;
- (void)setTableVMRetryPostBlock:(id /* block */)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeUnDisplay;
- (void)setNeedTableViewAutoScrollToRereshBeforeUnDisplay:(BOOL)arg1;
- (BOOL)hasSuccessLoadLocalDataAfterDisplay;
- (BOOL)hasSuccessFetchRemoteDataAfterDisplay;
- (id)commentDataAppendLogic;
- (void)setCommentDataAppendLogic:(id)arg1;
- (void).cxx_destruct;
@end

