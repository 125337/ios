@interface WCPlayerHttpDownloadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>
{
    int _videoPreloadQueueMaxCount; // +0x8
    unsigned int _maxHttpConcurrent; // +0xc
    NSMutableArray * _preloadingArray; // +0x10
    NSMutableArray * _preloadQueue; // +0x18
    NSMutableDictionary * _dicMediaTaskInfo; // +0x20
}
- (void)onServiceInit;
- (void)StartDownloadWithMediaWrap:(id)arg1;
- (void)eliminateMediaTaskInfos;
- (void)removePreloadTaskWithMediaWrap:(id)arg1;
- (BOOL)realStartHttpVideoStreamingDownloadWithIdentifier:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 filePath:(id)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6 referer:(id)arg7 blockSize:(unsigned int)arg8;
- (BOOL)realStartSnsVideoStreamingDownloadWithMediaWrap:(id)arg1 httpUrl:(id)arg2 filePath:(id)arg3 preloadPercent:(int)arg4 referer:(id)arg5;
- (BOOL)StopDownloadTaskWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownloadTaskWithUrl:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)RemovePreLoadWithVideoUrl:(id)arg1;
- (BOOL)IsPreloadingVideoUrl:(id)arg1;
- (BOOL)IsDownloadingWithMediaWrap:(id)arg1;
- (BOOL)IsPreloadingWithMediaWrap:(id)arg1;
- (void)StartPreloadVideoWithMediaWraps:(id)arg1;
- (void)StartOnePreloadVideoWithMediaWrap:(id)arg1;
- (void)StartOneLIFOPreloadWithMediaWrap:(id)arg1;
- (void)CheckPreloadQueue;
- (void)onPreloadSuccessWithTaskInfo:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (id)preloadingArray;
- (void)setPreloadingArray:(id)arg1;
- (id)preloadQueue;
- (void)setPreloadQueue:(id)arg1;
- (id)dicMediaTaskInfo;
- (void)setDicMediaTaskInfo:(id)arg1;
- (int)videoPreloadQueueMaxCount;
- (void)setVideoPreloadQueueMaxCount:(int)arg1;
- (unsigned int)maxHttpConcurrent;
- (void)setMaxHttpConcurrent:(unsigned int)arg1;
- (void).cxx_destruct;
@end

