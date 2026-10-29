@interface CdnServiceMgr : MMUserService <ICdnComMgrExt, MMServiceProtocol, CallbackProtocol>
{
    shared_ptr<CdnCallback> m_spCallback; // +0x8
    NSRecursiveLock * _lock; // +0x18
    NSMutableArray * _arrNotInitUploadTaskBlock; // +0x20
    NSMutableArray * _arrNotInitDownloadTaskBlock; // +0x28
    NSMutableDictionary * _dicTasksBlock; // +0x30
}
- (void)onServiceInit;
- (BOOL)startUploadTaskWithRequest:(id /* block */)arg1 progress:(id /* block */)arg2 complete:(id /* block */)arg3;
- (BOOL)startUploadTaskWithRequest:(id /* block */)arg1 progress:(id /* block */)arg2 existOnSvr:(id /* block */)arg3 complete:(id /* block */)arg4;
- (BOOL)startUploadTaskWithRequest:(id /* block */)arg1 progress:(id /* block */)arg2 existOnSvr:(id /* block */)arg3 complete:(id /* block */)arg4 actionType:(unsigned long long)arg5;
- (void)addTaskBlock:(id)arg1 forKey:(id)arg2;
- (BOOL)stopUploadTaskWithFileKey:(id)arg1;
- (BOOL)startDownloadTaskWithRequest:(id /* block */)arg1 progress:(id /* block */)arg2 complete:(id /* block */)arg3;
- (BOOL)startDownloadWithType:(unsigned long long)arg1 request:(id /* block */)arg2 progress:(id /* block */)arg3 complete:(id /* block */)arg4;
- (BOOL)startDownloadWithType:(unsigned long long)arg1 request:(id /* block */)arg2 progress:(id /* block */)arg3 fastComplete:(id /* block */)arg4 complete:(id /* block */)arg5;
- (BOOL)startPreloadDataWithRequest:(unsigned long long)arg1 request:(id /* block */)arg2 progress:(id /* block */)arg3 preloadComplete:(id /* block */)arg4;
- (BOOL)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(id /* block */)arg3 progress:(id /* block */)arg4 m3u8Ready:(id /* block */)arg5 moovReady:(id /* block */)arg6 complete:(id /* block */)arg7;
- (unsigned long long)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(id /* block */)arg3 progress:(id /* block */)arg4 m3u8Ready:(id /* block */)arg5 moovReady:(id /* block */)arg6 fastComplete:(id /* block */)arg7 complete:(id /* block */)arg8 preloadComplete:(id /* block */)arg9;
- (void)makeDownloadTaskStartFail:(id)arg1 errorCode:(int)arg2;
- (BOOL)checkIfAllowMultipleTask:(id)arg1 existTaskBlocks:(id)arg2;
- (BOOL)StartBatchCheckHitUpload:(void *)arg1 complete:(id /* block */)arg2;
- (void)setFastCompleteBlock:(id)arg1 block:(id /* block */)arg2;
- (int)requestVideoData:(id)arg1 offset:(unsigned long long)arg2 length:(long long)arg3 bitrate:(int)arg4 dataReadyBlock:(id /* block */)arg5;
- (BOOL)stopDownloadTaskWithFileKey:(id)arg1;
- (BOOL)stopDownloadTaskWithFileKey:(id)arg1 taskInfo:(id *)arg2;
- (BOOL)isTaskRunning:(id)arg1;
- (unsigned int)getTaskStatus:(id)arg1;
- (void)removeCallbackBlock:(id)arg1;
- (void)retryTaskWhenCdnInit;
- (void)setCdnDebugIPForUpload:(id)arg1;
- (void)setCdnDebugIPForDownload:(id)arg1;
- (BOOL)internalStartUploadTaskWithTaskBlock:(id)arg1;
- (unsigned long long)internalStartDownloadTaskWithTaskBlock:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (void)onUploadFileExistOnCdn:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)OnDownloadPartialVideoData:(id)arg1;
- (void)OnM3u8Ready:(id)arg1;
- (void)OnMoovReady:(id)arg1;
- (void)OnMoovNotFound:(id)arg1;
- (void)onDownloadToEnd:(id)arg1;
- (void)OnPreloadCompleted:(id)arg1;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)OnRequestGetCdnDistance:(unsigned int)arg1 province:(unsigned int)arg2 city:(unsigned int)arg3;
- (void)OnCdnInit;
- (void)UpdatePlaybackTime:(id)arg1 playTime:(double)arg2;
- (void)NotifyPlayerEnterBuffering:(id)arg1;
- (void)NotifyPlayerLeaveBuffering:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)arrNotInitUploadTaskBlock;
- (void)setArrNotInitUploadTaskBlock:(id)arg1;
- (id)arrNotInitDownloadTaskBlock;
- (void)setArrNotInitDownloadTaskBlock:(id)arg1;
- (id)dicTasksBlock;
- (void)setDicTasksBlock:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
