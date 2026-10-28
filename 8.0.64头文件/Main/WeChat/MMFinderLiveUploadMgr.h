@interface MMFinderLiveUploadMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _uploadWaitingArray; // +0x8
    NSMutableArray * _retryWaitingArray; // +0x10
    NSMutableDictionary * _uploadingTaskDict; // +0x18
    NSMutableDictionary * _uploadingMediaItemDict; // +0x20
    NSObject<OS_dispatch_queue> * _processQueue; // +0x28
}
- (void)startUploadImagePath:(id)arg1 headerParamsType:(unsigned long long)arg2 cdnAppType:(unsigned long long)arg3 complection:(id /* block */)arg4;
- (void)cancelUploadImagePath:(id)arg1;
- (void)startUploadFinderLiveWithDataItem:(id)arg1 headerParamsType:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)getMediaArrayWithDataItem:(id)arg1 uploadTaskId:(id)arg2 headerParamsType:(unsigned long long)arg3 cdnAppType:(unsigned long long)arg4;
- (id)getFinderUploadTaskWithDataItem:(id)arg1 uploadedMediaArray:(id)arg2;
- (long long)getFinderPostErrorTypeFromUploadFinishType:(long long)arg1;
- (void)addUploadTask:(id)arg1;
- (void)cancelUploadTaskWithId:(id)arg1;
- (void)retryUploadTask:(id)arg1 withTryNext:(BOOL)arg2;
- (void)tryStartNextUploadTaskFromArray;
- (void)startCurUploadingTask:(id)arg1;
- (void)uploadFinishWithMediaItem:(id)arg1 uploadTask:(id)arg2 uploadInfo:(id)arg3;
- (void)uploadTaskSuccess:(id)arg1;
- (void)uploadTaskFail:(id)arg1;
- (void)realStartCdnUploadWithHeader:(C2CUploadRequest)arg1;
- (void)onCdnUploadEndWithUploadInfo:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)checkCurUploadingMediaOverLimit;
- (id)safeGetWaitingTaskByTaskId:(id)arg1;
- (BOOL)checkUploadTaskIsWaiting:(id)arg1;
- (id)safeGetRetryTaskByTaskId:(id)arg1;
- (BOOL)checkUploadTaskIsRetrying:(id)arg1;
- (id)safeGetTaskByTaskId:(id)arg1;
- (id)uploadWaitingArray;
- (void)setUploadWaitingArray:(id)arg1;
- (id)retryWaitingArray;
- (void)setRetryWaitingArray:(id)arg1;
- (id)uploadingTaskDict;
- (void)setUploadingTaskDict:(id)arg1;
- (id)uploadingMediaItemDict;
- (void)setUploadingMediaItemDict:(id)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (void).cxx_destruct;
@end
