@interface HandOffMsgFileUploadMgr : MMObject <ICdnComMgrExt, MMAppAttachFileMgrExt>
{
    id <HandOffCDNUploadMgrDelegate> _delegate; // +0x8
    NSMutableArray * _fileInfoQueue; // +0x10
    NSMutableArray * _deletingItems; // +0x18
    CdnTaskInfo * _curTaskInfo; // +0x20
    NSMutableDictionary * _msgInfoDict; // +0x28
    NSMutableDictionary * _bigFileUploadRespDict; // +0x30
    long long _lastUploadProgressTime; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)CheckQueue;
- (void)StartUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StopUpload:(id)arg1;
- (void)checkBigFileUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)onCheckBigFileUploadResult:(BOOL)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)startUploadAppAttach:(id)arg1;
- (void)startUploadAppAttach:(id)arg1 enableHitCheck:(BOOL)arg2;
- (void)UploadFail;
- (void)UploadOk:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fileInfoQueue;
- (void)setFileInfoQueue:(id)arg1;
- (id)deletingItems;
- (void)setDeletingItems:(id)arg1;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (id)msgInfoDict;
- (void)setMsgInfoDict:(id)arg1;
- (id)bigFileUploadRespDict;
- (void)setBigFileUploadRespDict:(id)arg1;
- (long long)lastUploadProgressTime;
- (void)setLastUploadProgressTime:(long long)arg1;
- (void).cxx_destruct;
@end

