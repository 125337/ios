@interface MMTextStateMediaUploadCdnMgr : MMObject <INetworkStatusMgrExt, ICdnComMgrExt>
{
    id <MMTextStateMediaUploadCdnMgrDelegate> _delegate; // +0x8
    NSMutableArray * _taskQueue; // +0x10
    MMTextStateMediaUploadTaskInfo * _curTaskInfo; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)reloadQueue;
- (id)genTaskInfoWithSightDraftItem:(id)arg1 thumbPath:(id)arg2 tid:(id)arg3;
- (id)createSightDraftWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3;
- (void)startUploadWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 tid:(id)arg4;
- (void)startUploadImageMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadLivePhotoMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadTextStateTaskInfo:(id)arg1;
- (void)retryUploadTaskInfoWithTaskInfo:(id)arg1;
- (void)CheckQueue;
- (void)startUploadTextStateTask;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)onTextStateUploadRetryFail:(id)arg1;
- (void)onTextStateUploadCdnSuccess:(id)arg1;
- (void)OnCdnInit;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)reportCDNKV;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end

