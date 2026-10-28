@interface ThumbDownloadMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray * m_arrQueue; // +0x8
    CdnTaskInfo * m_oCurTaskInfo; // +0x10
    NSObject<OS_dispatch_queue> * m_thumbDownloadQueue; // +0x18
}
- (id)init;
- (void)CheckQueue;
- (BOOL)IsDownloadingThumb:(id)arg1;
- (BOOL)realIsDownloadingThumb:(id)arg1;
- (void)StartDownloadThumb:(id)arg1 isPrior:(BOOL)arg2;
- (void)realStartDownloadThumb:(id)arg1 isPrior:(BOOL)arg2;
- (void)StopCurDownload;
- (void)StopDownloadThumb:(id)arg1;
- (void)realStopDownloadThumb:(id)arg1;
- (void)StopDownloadThumbByUsrName:(id)arg1;
- (void)realStopDownloadThumbByUsrName:(id)arg1;
- (void)DownloadFail:(int)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownload:(id)arg1;
- (id)m_oCurTaskInfo;
- (void)setM_oCurTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end
