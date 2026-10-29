@interface OpenDownloadMgr : MMObject <EmoticonDownloadProxyDelegate, PBMessageObserverDelegate>
{
    NSMutableArray * m_queDownload; // +0x8
    unsigned int m_uiCurEventID; // +0x10
    OpenInfo * m_oCurDownloadInfo; // +0x18
    EmoticonHybridDownloadProxy * m_emoticonDownloadProxy; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)ClearEventID;
- (id)GetTop;
- (void)Pop;
- (BOOL)InDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (BOOL)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)StartDownload:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned int)arg4 AttachFileExt:(id)arg5;
- (BOOL)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadByUsr:(id)arg1;
- (void)CheckQueue;
- (BOOL)CreateDownloadEvent;
- (void)DownloadFail:(unsigned int)arg1;
- (void)DownloadFail:(unsigned int)arg1 expired:(BOOL)arg2;
- (void)DownloadOK:(id)arg1;
- (void)DownloadFinishedWithTempFilePath:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadingMd5:(id)arg1 withUserInfo:(id)arg2 partLen:(unsigned long long)arg3 totalLen:(unsigned long long)arg4;
- (void).cxx_destruct;
@end

