@interface HandOffMsgFileUploadMgr : MMObject <ICdnComMgrExt, MMAppAttachFileMgrExt, PBMessageObserverDelegate>
{
    BOOL _enableHitCheck; // +0x8
    id <HandOffCDNUploadMgrDelegate> _delegate; // +0x10
    NSMutableArray * _fileInfoQueue; // +0x18
    NSMutableArray * _deletingItems; // +0x20
    CdnTaskInfo * _curTaskInfo; // +0x28
    NSMutableDictionary * _msgInfoDict; // +0x30
    NSMutableDictionary * _bigFileUploadRespDict; // +0x38
    long long _lastUploadProgressTime; // +0x40
    NSString * _aesKey; // +0x48
    NSString * _fileId; // +0x50
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
- (void)checkMd5:(id)arg1;
- (void)uploadSuccess;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isOpenHitCache;
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
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (BOOL)enableHitCheck;
- (void)setEnableHitCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end
