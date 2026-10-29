@interface RecordDownloadCDNMgr : MMObject <ICdnComMgrExt, IRoamBackupPackageServiceExt>
{
    CMessageWrap * m_curDownMsgWrap; // +0x8
    CMessageWrap * m_waitDownMsgWrap; // +0x10
    NSMutableArray * m_arrCDNDownloadInfo; // +0x18
    CdnRecordMediaInfo * m_curDownMediaInfo; // +0x20
}
+ (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
+ (unsigned int)getCacheMediaTypeWithFileType:(unsigned int)arg1;
- (id)init;
- (BOOL)StartDownloadByRecordMsg:(id)arg1;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4 prior:(BOOL)arg5;
- (BOOL)StopDownloadRecordMsg:(id)arg1 downloadTaskInfo:(id *)arg2;
- (id)getDownloadInfo:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (BOOL)needDownloadFromDataList:(id)arg1 inMsgWrap:(id)arg2;
- (void)AddDownloadTasksFromDataList:(id)arg1;
- (void)StartDownloadCurMsg;
- (void)CheckDownloadRecordData;
- (id)getTempFilePath:(id)arg1 data:(id)arg2;
- (id)getFilePath:(id)arg1 data:(id)arg2;
- (id)getMiddleFilePath:(id)arg1 data:(id)arg2;
- (id)getCdnMediaInfoWithFileKey:(id)arg1;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2 DownloadInfo:(id)arg3;
- (void)DownLoadOK;
- (void)handleDownloadSucc:(id)arg1 taskInfo:(id)arg2;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)videoKVReport:(id)arg1 cdnInfo:(id)arg2;
- (void)CallPlayeDownloadErrorWithClientMsgID:(id)arg1 RetCode:(int)arg2 WithDownloadInfo:(id)arg3;
- (void)onPlayerDownloadFinishEvent:(id)arg1 retcode:(int)arg2;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (id)m_curDownMsgWrap;
- (void)setM_curDownMsgWrap:(id)arg1;
- (id)m_waitDownMsgWrap;
- (void)setM_waitDownMsgWrap:(id)arg1;
- (id)m_curDownMediaInfo;
- (void)setM_curDownMediaInfo:(id)arg1;
- (void).cxx_destruct;
@end

