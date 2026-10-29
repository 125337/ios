@interface CDownloadVideoMgr : NSObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_arrDownloadList; // +0x8
    NSMutableArray * m_arrDownloadStatList; // +0x10
    CMessageWrap * m_wrapCurDownloadMsg; // +0x18
    unsigned int m_uiCurDownloadEventID; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)DelMsgInDownloadQueue:(id)arg1;
- (id)GetStatInfo:(id)arg1;
- (void)updateMessageWrap:(id)arg1 downloadStatus:(unsigned int)arg2;
- (void)logStatInfo:(id)arg1 retCode:(int)arg2;
- (void)updateMessageWrapDownload:(id)arg1 offset:(unsigned int)arg2;
- (id)getFilePath:(id)arg1;
- (BOOL)saveData:(id)arg1 file:(id)arg2;
- (unsigned int)getFileSize:(id)arg1;
- (void)resetCurrentDownloadStatus;
- (void)StopCurrentDownload;
- (void)Stop;
- (BOOL)createDownloadEvent:(id)arg1;
- (void)downloadVideo:(id)arg1;
- (BOOL)IsMsgInDownloadQueue:(id)arg1;
- (id)GetMsg:(id)arg1;
- (void)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)interStopDownload:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadByChatName:(id)arg1;
- (id)getDownloadingMesageWrap:(id)arg1;
- (void)OnDownloadPartFail:(id)arg1 RetCode:(int)arg2;
- (BOOL)CheckDownloadPart:(id)arg1 messageWrap:(id)arg2;
- (void)OnDownloadPartOK:(id)arg1 messageWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_wrapCurDownloadMsg;
- (void)setM_wrapCurDownloadMsg:(id)arg1;
- (void).cxx_destruct;
@end

