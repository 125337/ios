@interface DownloadImageMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_arrQueue; // +0x8
    DownloadImageInfo * m_oCurInfo; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)StopCurrentDownload;
- (BOOL)CheckMsgIsInQueue:(id)arg1;
- (void)RemoveInfoFromQueue:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2;
- (void)StopDownloadImage:(id)arg1;
- (void)CheckQueue;
- (BOOL)CreateImplGetImg:(id)arg1;
- (BOOL)CreateDownload;
- (BOOL)IsDownloading:(id)arg1;
- (BOOL)StopImageDownloadTaskWithMsg:(id)arg1;
- (id)GetFilePath:(id)arg1;
- (id)GetTempFilePath:(id)arg1;
- (void)HandleDownload:(id)arg1;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2;
- (void)DownloadFail:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_oCurInfo;
- (void)setM_oCurInfo:(id)arg1;
- (void).cxx_destruct;
@end

