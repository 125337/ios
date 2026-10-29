@interface WCStoryCommentUploadMgr : NSObject <PBMessageObserverDelegate, INewSyncExt, ICdnComMgrExt, INetworkStatusMgrExt>
{
    id <WCStoryCommentUploadMgrDelegate> _delegate; // +0x8
    NSMutableArray * _taskQueue; // +0x10
    NSMutableArray * _failedQueue; // +0x18
    WCStoryComment * _curTask; // +0x20
    NSMutableDictionary * _dicUploadingComments; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)loadTaskQueue;
- (void)loadFailQueue;
- (void)saveTaskQueue;
- (void)saveFailQueue;
- (BOOL)isUploadingWithComment:(id)arg1;
- (BOOL)isFailCommentWithComment:(id)arg1;
- (BOOL)isRetryTimeout:(id)arg1;
- (long long)getErrorTypeWithRetcode:(int)arg1;
- (void)addNewStoryComment:(id)arg1;
- (void)retry;
- (void)CheckQueue;
- (BOOL)startCgiWithStoryComment:(id)arg1;
- (id)getFailedComments;
- (void)deleteFailedComment:(id)arg1;
- (BOOL)canTaskRetryWithErrorType:(long long)arg1;
- (void)addTask:(id)arg1;
- (id)removeFirstTask;
- (void)moveTaskToBack;
- (id)getUploadingCommentsWithTid:(id)arg1;
- (void)addCommentToDicUploadingCache:(id)arg1;
- (void)removeCommentFromDicUploadingCache:(id)arg1;
- (void)onStoryCommentFail:(long long)arg1;
- (void)handleNewStoryDoCommentResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncOplogOK;
- (void)OnSetCdnDnsInfo;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)failedQueue;
- (void)setFailedQueue:(id)arg1;
- (id)curTask;
- (void)setCurTask:(id)arg1;
- (id)dicUploadingComments;
- (void)setDicUploadingComments:(id)arg1;
- (void).cxx_destruct;
@end
