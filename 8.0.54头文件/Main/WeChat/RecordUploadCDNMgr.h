@interface RecordUploadCDNMgr : NSObject <RecordUploadTaskDelegate, IBufferUploadExt, MMAppAttachFileMgrExt, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray * m_arrMsgWrap; // +0x8
    NSMutableArray * m_arrRecordData; // +0x10
    NSMutableArray * m_arrCDNUploadInfo; // +0x18
    CMessageWrap * m_curMsgWrap; // +0x20
    RecordUploadTask * m_curUploadTask; // +0x28
    RecordUploadTask * m_recordSelfUploadTask; // +0x30
    OpenBufferUploadMgr * m_openBufferUploadMgr; // +0x38
    int m_sendRetryCount; // +0x40
    NSMutableArray * m_bigFileTasks; // +0x48
    unsigned long long m_uiCurUploadTaskTotalSize; // +0x50
    NSMutableArray * m_favTranCDNItemArr; // +0x58
    NSMutableArray * m_favTranCDNItemRespArr; // +0x60
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x68
    id <RecordUploadCDNMgrDelegate> m_delegate; // +0x70
}
- (id)init;
- (void)dealloc;
- (BOOL)IsRecordMsgUploading:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (BOOL)isUploadSameMsg:(id)arg1 compare:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)StopCurUpload;
- (void)CheckCDNUploadMsgQueue;
- (void)UploadRecordData;
- (void)AddUploadTaskForDataList:(id)arg1;
- (void)BatchTransCDNItemForMsg;
- (id)genBatchTransItemArrayWithDataList:(id)arg1 withClientStrId:(id)arg2;
- (void)BatchTransCDNItemForFav;
- (void)sendBatchTranCDNItem;
- (void)RemoveMsgWrap:(id)arg1;
- (BOOL)handleFinishRecordUpload;
- (void)clearLocalProperty:(id)arg1;
- (BOOL)SendCurAppMsg;
- (void)SendMsgFail;
- (void)SendMsgOK:(id)arg1;
- (void)TryNextMsgWrap;
- (void)HandleBatchTransCDNResp:(id)arg1;
- (void)HandleSendMsgResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnSetCdnDnsInfo;
- (void)makeMessageUploadFail;
- (void)OnRecordUploadTaskFail:(id)arg1;
- (void)OnRecordUploadTaskFinish:(id)arg1 uploadTask:(id)arg2;
- (void)OnRecordUploadTask:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnBufferUploadFail:(id)arg1 ClientAppDataId:(id)arg2;
- (void)OnBufferUploadOK:(id)arg1 ClientAppDataId:(id)arg2 MediaId:(id)arg3;
- (void)checkBigFileTaskAndUpload;
- (void)onBatchCheckBigFileUploadResult:(BOOL)arg1 respList:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (BOOL)UploadCurAppMsg;
- (id)exportCurMsg;
- (void)convertUploadBigFileRecordData:(id)arg1;
- (void)calTotalUploadSize;
- (unsigned long long)remainUploadSize:(id)arg1 exceptTask:(id)arg2;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_curMsgWrap;
- (void)setM_curMsgWrap:(id)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (void).cxx_destruct;
@end

