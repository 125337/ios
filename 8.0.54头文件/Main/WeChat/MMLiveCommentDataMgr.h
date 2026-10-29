@interface MMLiveCommentDataMgr : MMUserService <MMLiveTaskMgrExt, WCFinderLiveExt, MMServiceProtocol>
{
    SafeMutableDictionary * _commentDataDict; // +0x8
    SafeMutableDictionary * _commentDataCacheDict; // +0x10
    SafeMutableDictionary * _liveBoxIdRecordDict; // +0x18
    MMTimer * _cacheTimer; // +0x20
    unsigned long long _maxCacheCommentCount; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateMaxCacheCommentCount;
- (void)initData;
- (void)clearCacheTimer;
- (void)onPurgeCommentDataCache;
- (id)getMMLiveCommentDataWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(BOOL)arg3 boxId:(id)arg4;
- (void)appendLiveCommentImmediately:(id)arg1 forTaskId:(id)arg2;
- (void)appendLiveCommentImmediately:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (BOOL)insertLiveCommentImmediately:(id)arg1 atIndex:(unsigned long long)arg2 forTaskId:(id)arg3 boxId:(id)arg4;
- (void)insertPreLiveComments:(id)arg1 filterSelfCommit:(BOOL)arg2 forTaskId:(id)arg3 boxId:(id)arg4;
- (void)notifyDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)notifyLocalDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)synchronizeCommentFromCacheImmediatelyForTaskId:(id)arg1 boxId:(id)arg2;
- (void)reSetLiveComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)reSetLiveComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 reLoaded:(BOOL)arg4;
- (void)logForCommentsUpdate:(id)arg1 taskId:(id)arg2 boxId:(id)arg3 reset:(BOOL)arg4;
- (BOOL)appendSelfCommitLiveComment:(id)arg1 forTaskId:(id)arg2 cacheSelfUnCompleted:(BOOL)arg3;
- (BOOL)appendSelfCommitLiveComment:(id)arg1 forTaskId:(id)arg2 cacheSelfUnCompleted:(BOOL)arg3 boxId:(id)arg4;
- (void)appendSelfInvokeAppMsgComment:(id)arg1 forTaskId:(id)arg2;
- (void)deleteComment:(double)arg1 taskId:(id)arg2;
- (void)deleteComment:(double)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (id)getLastComment:(double)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (BOOL)checkNeedFilterSelf:(id)arg1 boxId:(id)arg2;
- (void)updateSelfHasCommitComment:(BOOL)arg1 forTaskId:(id)arg2;
- (unsigned long long)getRemainCommentCntInLimitForTaskId:(id)arg1 boxId:(id)arg2;
- (void)checkSpecificMsgFromAppendedComments:(id)arg1 forTaskId:(id)arg2;
- (void)checkBanCommentNotifyMsgFromAppendedComments:(id)arg1 forTaskId:(id)arg2;
- (id)getCommentDataWithTaskId:(id)arg1;
- (void)createCommentDataIfNeed:(id)arg1 boxId:(id)arg2;
- (BOOL)hasPreloadCachedCommentData:(id)arg1;
- (void)clearCommentData:(id)arg1 boxId:(id)arg2;
- (id)getCommentDataWithTaskId:(id)arg1 boxId:(id)arg2;
- (id)getCommentDataWithoutCreatedWithTaskId:(id)arg1 boxId:(id)arg2;
- (unsigned long long)maxCommentCount:(id)arg1;
- (unsigned long long)maxCommentTempCacheCountForTaskId:(id)arg1 boxId:(id)arg2;
- (id)createUniqueIdWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)appendBoxId:(id)arg1 forTaskId:(id)arg2;
- (id)commentDataDict;
- (id)commentDataCacheDict;
- (id)liveBoxIdRecordDict;
- (long long)maxCachedLiveCommentDataCount;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)resetDatasForCacheAfterExitLive:(id)arg1;
- (void)onPostFinderLiveAppMessageSuccess:(id)arg1 boxId:(id)arg2 serverMsgId:(unsigned long long)arg3 localClientMsgId:(id)arg4 userInfo:(id)arg5;
- (void)onPostFinderLiveAppMessageFail:(id)arg1 boxId:(id)arg2 localClientMsgId:(id)arg3 userInfo:(id)arg4 errorType:(int)arg5;
- (void)onMMFinderGroupLiveChatBackFillsMessage:(id)arg1 clientMsgId:(id)arg2 backFillSeq:(unsigned long long)arg3 boxId:(id)arg4;
- (void)updateCommentWithLikeList:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (void)updaeCommentWithModel:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (void)setCommentDataDict:(id)arg1;
- (void)setCommentDataCacheDict:(id)arg1;
- (void)setLiveBoxIdRecordDict:(id)arg1;
- (id)cacheTimer;
- (void)setCacheTimer:(id)arg1;
- (unsigned long long)maxCacheCommentCount;
- (void)setMaxCacheCommentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

