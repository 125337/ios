@interface CEmoticonUploadMgr : MMObject <EmoticonUploaderDelegate, IMsgExt, PBMessageObserverDelegate>
{
    unsigned int m_uiCurEventID; // +0x8
    NSMutableArray * m_uploadInfoQueue; // +0x10
    CEmoticonUploadInfo * m_oCurUploadInfo; // +0x18
    EmoticonUploader * m_emoticonUploader; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)ClearEventID;
- (void)ClearCurUpload;
- (BOOL)IsMsgInUploadQueue:(id)arg1;
- (void)DeleteUploadInfoWithMsg:(id)arg1;
- (void)DeleteUploadInfosWithUserName:(id)arg1;
- (BOOL)InsertMessageToUploadQueue:(id)arg1;
- (void)StartUpload:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)CheckUpload;
- (BOOL)CreateUploadEvent:(id)arg1;
- (BOOL)StartCdnUpload;
- (void)UploadFail;
- (void)UploadOK:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void).cxx_destruct;
@end

