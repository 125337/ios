@interface OpenUploadVideoCDNMgr : MMObject <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    FIFOFileQueue * _fileInfoQueue; // +0x8
    NSMutableArray * m_arrDeletingItems; // +0x10
    unsigned int _curEventId; // +0x18
    CdnTaskInfo * _curTaskInfo; // +0x20
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x28
    id <OpenUploadCDNMgrDelegate> m_delegate; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)InitQueue;
- (void)CheckQueue;
- (void)UploadOk:(long long)arg1 aeskey:(id)arg2;
- (void)UploadFail:(int)arg1;
- (void)ClearEventID;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)StopCurUpload;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (BOOL)CreateCurUploadEvent:(unsigned int)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (void).cxx_destruct;
@end

