@interface FavPublicCdnDownloadMgr : MMUserService <ICdnComMgrExt, MMServiceProtocol>
{
    NSMutableSet * m_set; // +0x8
    NSMutableArray * m_queue; // +0x10
    FavPublicCdnTaskInfo * m_currentTask; // +0x18
    BOOL m_downloading; // +0x20
    BOOL m_needSwitchFileType; // +0x21
    FavResourceDownloadPreCheckHelper * m_ctxHelper; // +0x28
}
- (id)init;
- (void)startDownloadWithSize:(unsigned long long)arg1 md5:(id)arg2 cdnUrl:(id)arg3 cdnKey:(id)arg4 streamWebUrl:(id)arg5 localDataID:(id)arg6 dataType:(int)arg7 dataFmt:(id)arg8 htmlId:(id)arg9 targetLocalPath:(id)arg10 completion:(id /* block */)arg11;
- (void)realStartDownloadWithSize:(unsigned long long)arg1 md5:(id)arg2 cdnUrl:(id)arg3 cdnKey:(id)arg4 streamWebUrl:(id)arg5 localDataID:(id)arg6 dataType:(int)arg7 dataFmt:(id)arg8 htmlId:(id)arg9 targetLocalPath:(id)arg10 completion:(id /* block */)arg11;
- (BOOL)isDownloading:(id)arg1;
- (void)stopDownload:(id)arg1;
- (void)realStopDownload:(id)arg1;
- (id)getTempPathForTargetPath:(id)arg1;
- (void)tryNext;
- (void)startCdnDownloadWithMediaInfo:(id)arg1 tempPath:(id)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void).cxx_destruct;
@end
