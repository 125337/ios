@interface WCUploadMgr : MMObject <WCTaskUploaderDelegate, INetworkStatusMgrExt, ICdnComMgrExt, WCUploadPendingExt>
{
    FIFOFileQueue * m_taskQueue; // +0x8
    NSMutableArray * m_failedQueue; // +0x10
    NSMutableArray * m_succeedItems; // +0x18
    id <WCUploadMgrDelegate> m_delegate; // +0x20
    BOOL m_taskRunning; // +0x28
    WCTaskUploader * m_taskUploader; // +0x30
    NSDate * m_dateLastNotifySentFail; // +0x38
    FIFOFileQueue * _pendingQueue; // +0x40
}
+ (id)createPendingExtensionKeyWithTaskId:(id)arg1 businessType:(int)arg2;
- (id)init;
- (void)dealloc;
- (unsigned long long)onServiceCleanCache;
- (id)debugDescription;
- (BOOL)loadFailedQueue;
- (BOOL)saveFailedQueue;
- (BOOL)loadSucceedItems;
- (BOOL)saveSucceedItems;
- (void)cleanUpForTask:(id)arg1;
- (id)getInQueueUploads;
- (id)getFailedUploads;
- (void)addSucceedUpload:(id)arg1;
- (id)getTimelineSucceedUploads;
- (id)getHomepageSucceedUploads;
- (void)doDeleteSucceedUploads:(id)arg1 from:(id)arg2;
- (void)deleteTimelineSucceedUploads:(id)arg1;
- (void)deleteHomepageSucceedUploads:(id)arg1;
- (BOOL)cleanFailDataItemForSpam:(id)arg1;
- (void)updateFailDataItemForSpam:(id)arg1;
- (void)updateAllSpamDataItemsForSecurityVerification:(BOOL)arg1;
- (void)setTaskFail:(id)arg1;
- (void)setTaskArrFail:(id)arg1;
- (void)TryStartTask;
- (void)restartUploadTaskWithDataIem:(id)arg1;
- (BOOL)deleteUploadTaskWithDataIem:(id)arg1;
- (BOOL)_deleteUploadFailedTaskWithDataIem:(id)arg1;
- (BOOL)_deleteUploadingTaskWithDataItem:(id)arg1;
- (void)retryStartTask;
- (void)addUploadTask:(id)arg1;
- (void)notifyUploadFinished:(id)arg1;
- (void)notifyUploadFailed:(id)arg1;
- (void)notifyUploadRestart:(id)arg1;
- (void)notifyUploadFailStatusChanged:(id)arg1;
- (void)saveCurrentTask;
- (void)onMediaUploadFinished:(id)arg1 task:(id)arg2;
- (void)onUploader:(id)arg1 didUpdateUploadTask:(id)arg2;
- (void)onUploadFinished:(id)arg1;
- (void)onUploadFailNotify:(id)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (void)enterForeground;
- (void)enterBackground;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnInit;
- (void)initPendingQueue;
- (void)registerPendingExtension;
- (id)getInPendingQueue;
- (void)uploadPendingTask:(id)arg1;
- (void)addPendingTask:(id)arg1 pendingTaskKey:(id)arg2 forBusiness:(int)arg3;
- (id)removePendingTaskForTaskKey:(id)arg1 forBusiness:(int)arg2;
- (id)deletePendingTaskForDataItem:(id)arg1;
- (id)getPendingTask:(id)arg1 forBusiness:(int)arg2;
- (void)onPendingTaskUploaded:(id)arg1 forBusiness:(int)arg2 prepareUploadTask:(id)arg3;
- (void)deleteFailedPendingTask:(id)arg1;
- (void)onPendingTaskUpdatedForFail:(id)arg1 forBusiness:(int)arg2 removedFromPending:(BOOL)arg3;
- (id)checkIsNeedDeletePendingTask:(id)arg1;
- (void)checkPendingTaskOverTime;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)pendingQueue;
- (void)setPendingQueue:(id)arg1;
- (void).cxx_destruct;
@end

