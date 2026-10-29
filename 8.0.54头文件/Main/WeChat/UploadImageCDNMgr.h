@interface UploadImageCDNMgr : MMObject <MsgDataDownloadDelegate, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray * m_arrQueue; // +0x8
    CdnTaskInfo * m_oCurTaskInfo; // +0x10
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x18
    id <UploadImageCDNMgrDelegate> m_delegate; // +0x20
    MsgDataDownloadLogic * _msgDownloadLogic; // +0x28
}
+ (BOOL)isCloseCalOriginSourceMd5;
+ (id)genUploadMsgImgRequest:(id)arg1 hitMd5:(BOOL)arg2 imgInfo:(id)arg3 imgType:(int)arg4 md5:(id)arg5 msgWrap:(id)arg6;
+ (unsigned int)CreateSendImageEvent:(id)arg1 clientMsgId:(id)arg2 md5:(id)arg3 hitMd5:(BOOL)arg4 imgType:(int)arg5 imgInfoBuffer:(id)arg6;
- (id)init;
- (void)dealloc;
- (void)caculateOriginSourceMD5:(id)arg1;
- (void)CheckQueue;
- (int)getLastCndError;
- (BOOL)IsUploading:(id)arg1;
- (BOOL)isCurrentTaskBigHDImage;
- (BOOL)isEnableWxamUpload;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StartUploadImage:(id)arg1;
- (void)StopCurUpload;
- (void)StopUploadImage:(id)arg1;
- (void)StopUploadImageByUsrName:(id)arg1;
- (void)cacheFileToHardLink:(id)arg1;
- (void)UploadOk:(id)arg1;
- (void)UploadOkByCdn:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)UploadFail:(int)arg1 canRetry:(BOOL)arg2;
- (void)UploadFail:(int)arg1 canRetry:(BOOL)arg2 cdnTask:(id)arg3;
- (void)UploadFail:(int)arg1 canRetry:(BOOL)arg2 cgiResp:(id)arg3;
- (void)UploadFail:(int)arg1 canRetry:(BOOL)arg2 cdnTask:(id)arg3 cgiResp:(id)arg4;
- (void)uploadWithDisableHitCheck;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)updateClientMsgId;
- (BOOL)CreateUploadEvent:(id)arg1 hitMd5:(BOOL)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)shouldTryDownloadImage:(id)arg1;
- (void)startDownloadImage;
- (void)onDownloadAnyFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (BOOL)canSendMsgFromCdn:(id)arg1;
- (BOOL)canAttachPrepareRequest:(id)arg1;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)m_oCurTaskInfo;
- (void)setM_oCurTaskInfo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)msgDownloadLogic;
- (void)setMsgDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end

