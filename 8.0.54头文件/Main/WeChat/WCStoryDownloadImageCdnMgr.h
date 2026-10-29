@interface WCStoryDownloadImageCdnMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray * _arrQueue; // +0x8
    CdnSnsTaskInfo * _curTaskInfo; // +0x10
}
- (id)init;
- (void)StartPreloadImageWithItems:(id)arg1;
- (void)StartDownloadImageWithMediaItem:(id)arg1;
- (void)StartDownloadImageWithMediaItem:(id)arg1 Priority:(BOOL)arg2;
- (BOOL)IsImageDownloadingWithMediaItem:(id)arg1;
- (id)generateDownloadTaskInfo:(id)arg1;
- (void)CheckQueue;
- (void)startDownloadWithTaskInfo:(id)arg1;
- (void)realStartDownloadWithTaskInfo:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)arrQueue;
- (void)setArrQueue:(id)arg1;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end

