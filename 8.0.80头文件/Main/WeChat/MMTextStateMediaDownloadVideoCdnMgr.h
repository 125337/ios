@interface MMTextStateMediaDownloadVideoCdnMgr : MMObject <ICdnComMgrExt, INetworkStatusMgrExt>
{
    unsigned int _lastPreloadChatRoomTime; // +0x8
    NSMutableDictionary * _dicIplist; // +0x10
    MMTextStateMediaDownloadTaskInfo * _curTaskInfo; // +0x18
    NSMutableArray * _arrPreloadQueue; // +0x20
    NSMutableDictionary * _dicPreloadingTask; // +0x28
    NSArray * _arrBadNetworkPreload; // +0x30
    NSArray * _arrSmoothNetworkPreload; // +0x38
}
- (id)init;
- (id)generateDownloadTaskInfoWith:(id)arg1;
- (BOOL)IsTaskNeedPreload:(id)arg1;
- (BOOL)IsNetWorkSmooth;
- (void)stopNotNeedPreloadTasks:(id)arg1;
- (void)cleanTaskForStreamTaksInfo:(id)arg1;
- (void)DoDnsWithTaskInfo:(id)arg1;
- (void)StartVideoPreloadWithItems:(id)arg1;
- (void)StartPreloadChatRoomVideoWithMediaItem:(id)arg1;
- (void)StartPreloadSNSEntranceWithItems:(id)arg1;
- (void)CheckPreloadQueue;
- (void)StartVideoStreamDownloadWithMediaWrap:(id)arg1;
- (BOOL)StopVideoDownloadWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownloadTaskWithClientId:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)IsStreamDownloadingWithMediaItem:(id)arg1;
- (void)downloadTask:(id)arg1;
- (void)realStartDownload:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)OnCdnVideoPreloadEnd:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)dicIplist;
- (void)setDicIplist:(id)arg1;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (id)arrPreloadQueue;
- (void)setArrPreloadQueue:(id)arg1;
- (id)dicPreloadingTask;
- (void)setDicPreloadingTask:(id)arg1;
- (id)arrBadNetworkPreload;
- (void)setArrBadNetworkPreload:(id)arg1;
- (id)arrSmoothNetworkPreload;
- (void)setArrSmoothNetworkPreload:(id)arg1;
- (unsigned int)lastPreloadChatRoomTime;
- (void)setLastPreloadChatRoomTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
