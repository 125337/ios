@interface FavCdnDownloadMgr : MMUserService <ICdnComMgrExt, MMServiceProtocol>
{
    NSMutableSet * m_set; // +0x8
    NSMutableArray * m_queue; // +0x10
    FavCdnTaskInfo * m_currentTask; // +0x18
    BOOL m_downloading; // +0x20
    BOOL m_needSwitchFileType; // +0x21
}
- (id)init;
- (void)StartDownloadFavCdnData:(id)arg1 isPrior:(BOOL)arg2;
- (BOOL)IsDownloading:(id)arg1;
- (void)realStartDownloadFavCdnData:(id)arg1 isPrior:(BOOL)arg2;
- (void)tryNext;
- (void)StopDownloadFavMedia:(id)arg1;
- (void)realStopDownloadFavMedia:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void).cxx_destruct;
@end
