@interface OpenBufferUploadMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_uiCurEventID; // +0x8
    NSMutableArray * m_queUpload; // +0x10
    OpenBufferUploadInfo * m_oCurUploadInfo; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)ClearEventID;
- (void)StartUpload:(id)arg1 ClientAppDataId:(id)arg2 UploadBufferData:(id)arg3 Scene:(unsigned int)arg4;
- (void)CheckQueue;
- (BOOL)CreateUploadEvent;
- (BOOL)CreateUploadAppAttach;
- (void)UploadFail:(unsigned int)arg1;
- (void)UploadOK:(BOOL)arg1;
- (void)popInfoItem:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_queUpload;
- (void)setM_queUpload:(id)arg1;
- (id)m_oCurUploadInfo;
- (void)setM_oCurUploadInfo:(id)arg1;
- (void).cxx_destruct;
@end

