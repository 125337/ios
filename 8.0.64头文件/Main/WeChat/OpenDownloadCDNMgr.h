@interface OpenDownloadCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray * _arrFileInfo; // +0x8
    CdnTaskInfo * _curTaskInfo; // +0x10
    BOOL _bLargeFile; // +0x18
    BOOL _enableChatMessageNotify; // +0x19
    id <OpenDownloadCDNMgrDelegate> m_delegate; // +0x20
    NSRecursiveLock * _lock; // +0x28
}
- (id)init;
- (BOOL)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)IsNonQuotaDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)IsCurrentDownloading:(id)arg1 MsgWrap:(id)arg2;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (id)GetTop;
- (void)Pop;
- (void)CheckQueue;
- (void)modMsgByBitSetInMainQueue:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)DownloadOk;
- (void)DownloadFail:(int)arg1 expired:(BOOL)arg2;
- (BOOL)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(BOOL)arg3 autoDownload:(BOOL)arg4;
- (BOOL)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(BOOL)arg3 autoDownload:(BOOL)arg4 behavior:(long long)arg5;
- (void)StopCurDownload;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 needNotify:(BOOL)arg3;
- (void)StopDownloadByUsr:(id)arg1;
- (id)getAppAttachFilePath:(id)arg1;
- (id)GetFileCachePath;
- (void)addCommmonCache:(id)arg1;
- (void)moveFileCacheToCommomCache;
- (void)LoadCacheData;
- (BOOL)preCheckIfMsgWrapCanQuickDownload:(id)arg1;
- (BOOL)CheckForLocalCache:(id)arg1;
- (void)localCacheDownloadSuccess;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadNotifyPeerUploadFinish:(id)arg1 uploadFinish:(BOOL)arg2 fileSize:(unsigned long long)arg3;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bLargeFile;
- (void)setBLargeFile:(BOOL)arg1;
- (BOOL)enableChatMessageNotify;
- (void)setEnableChatMessageNotify:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
