@interface UploadImageMgr : MMObject <MessageCommonUploaderDelegate, IMsgExt, PBMessageObserverDelegate>
{
    NSMutableArray * m_arrQueue; // +0x8
    UploadImageInfo * m_oCurUpload; // +0x10
    MessageCommonUploader * _uploader; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)caculateOriginSourceMD5:(id)arg1;
- (void)CheckQueue;
- (BOOL)IsUploading:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StartUploadImage:(id)arg1;
- (void)UploadOk:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)createUploader;
- (void)messageUploaderSuccess:(id)arg1 result:(id)arg2;
- (void)messageUploaderFailure:(id)arg1 uploadId:(id)arg2;
- (void)messageUploaderProgress:(id)arg1 progress:(double)arg2;
- (BOOL)isWxamEnable;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (void).cxx_destruct;
@end

