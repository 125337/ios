@interface WCDownloadVideoCDNMgr : NSObject <WCPlayerEventExt, ICdnComMgrExt>
{
    BOOL _bEnablePreload; // +0x8
    long long _category; // +0x10
    NSMutableArray * _arrDownloadTask; // +0x18
    NSMutableArray * _arrPreloadTask; // +0x20
    WCPreloadVideoCleanLogic * _preloadCacheCleanLogic; // +0x28
    NSMutableDictionary * _dicPreloadingTask; // +0x30
    NSMutableDictionary * _dicStreamingTask; // +0x38
    NSMutableDictionary * _dicDownloadingInfoWraps; // +0x40
    NSMutableDictionary * _dicDownloadingArgsWraps; // +0x48
}
+ (long long)videoDownloadCategoryForDataItem:(id)arg1;
+ (long long)videoDownloadCategoryForMediaItem:(id)arg1;
- (id)initWithCategory:(long long)arg1;
- (void)initData;
- (BOOL)IsMediaItemInDownloadQueue:(id)arg1;
- (BOOL)IsMediaItemInDownloadQueue:(id)arg1 isIncludePlayerDownload:(BOOL)arg2;
- (BOOL)checkDownloadState:(id)arg1;
- (id)getDownloadReferUrl:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartPreloadVideoForMediaItem:(id)arg1 preloadItem:(id)arg2;
- (void)clearAllCurrentVideoPreload;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2 requestPercent:(unsigned int)arg3 preloadItem:(id)arg4;
- (void)startPreloadWithTask:(id)arg1;
- (void)stopPreloadWithTask:(id)arg1;
- (void)startStreamingDownloadWithTask:(id)arg1;
- (BOOL)StopCurDownloadWithTaskInfo:(id)arg1 outInfo:(id *)arg2;
- (void)reportKVVideoArgsWithResult:(id)arg1;
- (BOOL)StopPreloadVideo:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownloadVideo:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)downloadTaskWithTaskInfo:(id)arg1;
- (void)CheckQueue;
- (BOOL)prepareDownloadArgsForTaskInfo:(id)arg1;
- (id)generateVideoInfoWrap:(id)arg1;
- (void)realStartDownload:(id)arg1 info:(id)arg2;
- (void)PausePreload;
- (void)ResumePreload;
- (BOOL)createFileWithPath:(id)arg1 exists:(BOOL *)arg2;
- (BOOL)saveFileFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)IsNextPreloadOverDailyMaxCount;
- (void)AddPreloadRecord:(id)arg1;
- (void)RemovePreloadRecord:(id)arg1 shouldRemoveFile:(BOOL)arg2;
- (void)CleanOutOfDatePreloadTempFile;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2 result:(const void *)arg3;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)downloadVideoSucess:(id)arg1;
- (BOOL)regenerateThumbImageForMediaItem:(id)arg1 withSightPath:(id)arg2;
- (void)getMomentsFileKey:(id *)arg1 mid:(id *)arg2 fromDownloadArgsWrap:(id)arg3;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (long long)category;
- (BOOL)bEnablePreload;
- (void)setBEnablePreload:(BOOL)arg1;
- (id)arrDownloadTask;
- (void)setArrDownloadTask:(id)arg1;
- (id)arrPreloadTask;
- (void)setArrPreloadTask:(id)arg1;
- (id)preloadCacheCleanLogic;
- (void)setPreloadCacheCleanLogic:(id)arg1;
- (id)dicPreloadingTask;
- (void)setDicPreloadingTask:(id)arg1;
- (id)dicStreamingTask;
- (void)setDicStreamingTask:(id)arg1;
- (id)dicDownloadingInfoWraps;
- (void)setDicDownloadingInfoWraps:(id)arg1;
- (id)dicDownloadingArgsWraps;
- (void)setDicDownloadingArgsWraps:(id)arg1;
- (void).cxx_destruct;
@end
