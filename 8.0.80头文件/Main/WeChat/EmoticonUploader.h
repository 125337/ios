@interface EmoticonUploader : MMObject <EmoticonUploadPrepareCgiDelegate, EmoticonUploadCdnDelegate>
{
    BOOL _isActive; // +0x8
    BOOL _shouldOperateAdd; // +0x9
    id <EmoticonUploaderDelegate> _delegate; // +0x10
    EmoticonUploadInfoObj * _uploadInfo; // +0x18
    EmoticonUploadPrepareCgi * _prepareCgi; // +0x20
    EmoticonUploadCdn * _uploadCdn; // +0x28
    EmoticonOperateCgi * _operateCgi; // +0x30
    NSString * _realMd5; // +0x38
    unsigned long long _failReason; // +0x40
    unsigned long long _operateRetryCount; // +0x48
    id /* block */ _success; // +0x50
    id /* block */ _failure; // +0x58
}
- (id)initWithUploadInfo:(id)arg1 shouldOperateAdd:(BOOL)arg2 delegate:(id)arg3;
- (id)initWithUploadInfo:(id)arg1 shouldOperateAdd:(BOOL)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)startUpload;
- (void)cancelUpload;
- (BOOL)isActive;
- (void)onUploaderSuccessWithEmojiInfoObj:(id)arg1;
- (void)onUploaderSuccessWithUrl:(id)arg1 url:(id)arg2;
- (void)onUploaderFail;
- (void)onUploaderFailWithRealMd5:(id)arg1;
- (void)onEmoticonUploadPrepareSuccess:(id)arg1;
- (void)onEmoticonUploadPrepareFail;
- (void)onEmoticonUploadCdnSuccess:(id)arg1;
- (void)onEmoticonUploadCdnSuccessWithRealMd5:(id)arg1 url:(id)arg2;
- (void)onEmoticonUploadCdnFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadInfo;
- (void)setUploadInfo:(id)arg1;
- (id)prepareCgi;
- (void)setPrepareCgi:(id)arg1;
- (id)uploadCdn;
- (void)setUploadCdn:(id)arg1;
- (id)operateCgi;
- (void)setOperateCgi:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)shouldOperateAdd;
- (void)setShouldOperateAdd:(BOOL)arg1;
- (id)realMd5;
- (void)setRealMd5:(id)arg1;
- (unsigned long long)failReason;
- (void)setFailReason:(unsigned long long)arg1;
- (unsigned long long)operateRetryCount;
- (void)setOperateRetryCount:(unsigned long long)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
