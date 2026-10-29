@interface NewLifeUploadCdnMgr : NSObject <INetworkStatusMgrExt, ICdnComMgrExt>
{
    NSMutableArray * _taskQueue; // +0x8
    NSMutableArray * _retryQueue; // +0x10
    NSMutableArray * _deleteQueue; // +0x18
    NSMutableArray * _backupQueue; // +0x20
    NSString * _taskRetryPath; // +0x28
    NSString * _taskUploadingPath; // +0x30
    NSString * _taskUploadingShouldDeletePath; // +0x38
    NSString * _taskUploadingBackupPath; // +0x40
    WCFinderUploadTask * _currentTask; // +0x48
    id <WCFinderUploadCdnMgrDelegate> _delegate; // +0x50
    NSObject<OS_dispatch_queue> * _ioQueue; // +0x58
}
+ (void)updateMentionedHistoryArray:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)filterIgnoreTask;
- (void)clearInvalidUploadTask;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)finderUploadRetryFail:(id)arg1;
- (BOOL)checkDataItem:(id)arg1 inQueue:(id)arg2;
- (BOOL)checkDataItemHasUpload:(id)arg1;
- (BOOL)deleteTaskTid:(id)arg1 inQueue:(id)arg2;
- (BOOL)uploadTaskNeedDeleteWithTid:(id)arg1;
- (void)deleteTaskInAllQueueWithTid:(id)arg1;
- (void)deleteUploadTaskWithTid:(id)arg1;
- (id)getUploadTaskWithTid:(id)arg1;
- (id)getUploadTaskWithTid:(id)arg1 fromQueue:(id)arg2;
- (void)startWithTaskInfo:(id)arg1;
- (id)taskQueue;
- (id)retryQueue;
- (id)deleteQueue;
- (id)backupQueue;
- (void)syncQueueToLocal;
- (void)checkQueue;
- (void)checkRetryQueue;
- (void)uploadMgrIdle;
- (void)startUploadFinderDraft:(id)arg1;
- (void)preUploadFinderWithPostSession:(id)arg1;
- (void)preCancelUploadFinderWithPostSession:(id)arg1;
- (id)_getShouldUploadTaskByPostSession:(id)arg1;
- (void)startUploadFinderWithPostSession:(id)arg1;
- (void)startUploadFinderLiveWithDataItem:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)startUploadFinderMemberQAWithPostSession:(id)arg1;
- (id)createPostTaskOrRaiseError:(id)arg1;
- (id)checkPostInvalidAddQueue:(id)arg1;
- (void)startUploadFinderCoverWithPostSession:(id)arg1;
- (void)startUploadCdnTask;
- (BOOL)realStartUpload;
- (void)startUploadCdnMediaTask;
- (BOOL)checkFileExistsWithTask:(id)arg1;
- (id)handleCDNResultCombineLogic;
- (BOOL)hasSamePrefixWithFirstString:(id)arg1 secondString:(id)arg2;
- (void)startUploadCGIPost;
- (void)finderMemberQAPost;
- (void)draftPost;
- (void)afterPostTaskFinish:(id)arg1;
- (void)afterDraftPostTaskFailed:(long long)arg1 tid:(id)arg2;
- (void)onDraftCDNUploadFailed;
- (void)clearLiveUploadTask;
- (void)finderMusicDraftPost;
- (void)finderPost;
- (void)bindTraceInfoToDataItem:(id)arg1 traceInfo:(id)arg2;
- (void)addPostTaskToUploadQueue:(id)arg1;
- (void)finderUploadCDNSuccess:(id)arg1;
- (void)moveFileToDataItemPath:(id)arg1;
- (void)OnCdnInit;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (BOOL)busy;
- (BOOL)checkDataItemInCDNUploadQueue:(id)arg1;
- (void)reportUploadResultWithMediaTaskInfo:(id)arg1 taskInfo:(id)arg2 retCode:(long long)arg3;
- (void)setTaskQueue:(id)arg1;
- (void)setRetryQueue:(id)arg1;
- (void)setDeleteQueue:(id)arg1;
- (void)setBackupQueue:(id)arg1;
- (id)taskRetryPath;
- (void)setTaskRetryPath:(id)arg1;
- (id)taskUploadingPath;
- (void)setTaskUploadingPath:(id)arg1;
- (id)taskUploadingShouldDeletePath;
- (void)setTaskUploadingShouldDeletePath:(id)arg1;
- (id)taskUploadingBackupPath;
- (void)setTaskUploadingBackupPath:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ioQueue;
- (void)setIoQueue:(id)arg1;
- (void).cxx_destruct;
@end

