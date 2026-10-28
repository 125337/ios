@interface DownloadVideoCDNMgr : NSObject <WCPlayerEventExt, C2CVideoDownloadMgrExt, ICdnComMgrExt>
{
    NSMutableArray * _arrDownloadTask; // +0x8
    NSMutableArray * _arrPreloadTask; // +0x10
    BOOL _bEnablePreload; // +0x18
    PreloadVideoCleanLogic * m_preloadCacheCleanLogic; // +0x20
    CdnTaskInfo * _curTaskInfo; // +0x28
}
- (id)init;
- (BOOL)IsNextPreloadOverDailyMaxCount;
- (void)AddPreloadRecord:(id)arg1;
- (void)RemovePreloadRecord:(id)arg1 shouldRemoveFile:(BOOL)arg2;
- (void)CleanOutOfDatePreloadTempFile;
- (unsigned long long)CleanAllPreloadTempFile;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2 result:(const void *)arg3;
- (void)updateVideoThumbImage:(id)arg1;
- (void)updateVideoThumb:(id)arg1;
- (void)DownloadOk:(id)arg1;
- (void)DownloadFail:(int)arg1 oDownloadInfo:(id)arg2 taskInfo:(id)arg3;
- (void)videoKVReportWithTaskInfo:(id)arg1 result:(const void *)arg2;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)DelTaskInPreloadQueue:(id)arg1;
- (void)DelTask:(id)arg1 inQueue:(id)arg2;
- (BOOL)CheckForLocalCache:(id)arg1 isPreloadTask:(BOOL)arg2;
- (void)CheckQueue;
- (BOOL)checkDownloadState:(id)arg1;
- (BOOL)isFirstDownloadTask:(id)arg1;
- (void)updateFileAndCache:(id)arg1;
- (BOOL)IsMsgInDownloadQueue:(id)arg1;
- (BOOL)IsMsgInPreloadQueue:(id)arg1;
- (BOOL)IsMsgCurrentDownloading:(id)arg1 inNormalDownloadQueue:(BOOL)arg2;
- (void)StartDownloadVideo:(id)arg1 AutoDownload:(BOOL)arg2;
- (void)StartDownloadVideo:(id)arg1 AutoDownload:(BOOL)arg2 Priority:(BOOL)arg3;
- (void)StartDownloadVideo:(id)arg1 AutoDownload:(BOOL)arg2 Priority:(BOOL)arg3 Silent:(BOOL)arg4;
- (void)StartPreloadVideo:(id)arg1;
- (void)StartPreloadVideo:(id)arg1 useQuota:(BOOL)arg2;
- (void)StartPreloadVideo:(id)arg1 behavior:(long long)arg2;
- (unsigned long long)GetVideoMessageDownloadingMode:(id)arg1;
- (BOOL)canUseStreamStopLogic:(id)arg1;
- (BOOL)shouldUseOldVideoDownloadLogic:(id)arg1;
- (BOOL)canUseVideoStreamFullDownloadLogic:(id)arg1;
- (BOOL)StopCurDownload:(id *)arg1;
- (BOOL)StopDownload:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownload:(id)arg1 downloadTaskInfo:(id *)arg2 needNotify:(BOOL)arg3;
- (void)StopDownloadByChatName:(id)arg1;
- (void)Stop;
- (void)PausePreload;
- (void)ResumePreload;
- (BOOL)StopVideoStreamingDownload:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)IsVideoMoovHasDownloadedByMessageWrap:(id)arg1;
- (void)updateVideoDownloadModeWithClientId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)processDownloadCompleteEvent:(id)arg1 downloadInfo:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onVideoDownloadComplete:(id)arg1 isRaw:(BOOL)arg2 taskInfo:(id)arg3;
- (void)onVideoDownloadStop:(id)arg1;
- (void)onRoamBackupPackageServiceLoadMediaProgress:(id)arg1 dataID:(id)arg2 finished:(unsigned long long)arg3 total:(unsigned long long)arg4;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end
