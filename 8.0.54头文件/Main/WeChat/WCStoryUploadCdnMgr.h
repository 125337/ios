@interface WCStoryUploadCdnMgr : NSObject <INetworkStatusMgrExt, ICdnComMgrExt>
{
    id <WCStoryUploadCdnMgrDelegate> _delegate; // +0x8
    NSMutableArray * _taskQueue; // +0x10
    NSMutableArray * _retryQueue; // +0x18
    NSMutableArray * _deleteQueue; // +0x20
    WCStoryUploadTaskInfo * _curTaskInfo; // +0x28
    NSString * _taskRetryPath; // +0x30
    NSString * _taskUploadingPath; // +0x38
    NSString * _taskUploadingShouldDeletePath; // +0x40
}
- (id)initWithDelegate:(id)arg1;
- (id)taskRetryPath;
- (id)taskUploadingPath;
- (id)taskUploadingShouldDeletePath;
- (id)deleteQueue;
- (void)syncQueueToLocal;
- (void)reloadQueueFromeLocal;
- (BOOL)IsDataItem:(id)arg1 InQueue:(id)arg2;
- (BOOL)deleteTaskWithTid:(id)arg1 InQueue:(id)arg2;
- (id)getUploadTaskInfoForTid:(id)arg1;
- (id)getUploadTaskInfoForTid:(id)arg1 inQueue:(id)arg2;
- (BOOL)uploadTaskNeedDeleteWithTid:(id)arg1;
- (void)deleteTaskInAllQueueWithTid:(id)arg1;
- (BOOL)isTaskUploadingWithDataItem:(id)arg1;
- (BOOL)isTaskRetryingWithDataItem:(id)arg1;
- (void)startUploadStoryWithDataItem:(id)arg1;
- (void)deleteUploadTaskWithDataIem:(id)arg1;
- (void)retry;
- (void)CheckQueue;
- (void)CheckRetryQueue;
- (void)startUploadStoryTask;
- (void)startStoryPostCgiWithTask;
- (BOOL)canTaskRetryWithErrorType:(long long)arg1;
- (void)reportCDNKV;
- (void)reportVideoArgsWhenPostSucc:(id)arg1;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)onStoryUploadRetryFail:(id)arg1;
- (void)onStoryUploadCdnSuccess:(id)arg1;
- (void)OnCdnInit;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)retryQueue;
- (void)setRetryQueue:(id)arg1;
- (void)setDeleteQueue:(id)arg1;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (void)setTaskRetryPath:(id)arg1;
- (void)setTaskUploadingPath:(id)arg1;
- (void)setTaskUploadingShouldDeletePath:(id)arg1;
- (void).cxx_destruct;
@end

