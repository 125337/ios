@interface MultiMediaCdnUploadDataState : MultiMediaUploadBaseState
{
    BOOL _enableHitCheck; // +0x8
    int _retryCount; // +0xc
    unsigned long long _totalFileSize; // +0x10
    NSString * _uploadFileKey; // +0x18
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)startUploadData;
- (void)onUploadFail:(id)arg1;
- (void)checkDataMd5:(id)arg1;
- (void)retryUploadDataWithoutHitcheck;
- (void)transformToMiddleVideoUploadState;
- (void)onCdnUploadDataSuccess:(id)arg1 aesk:(id)arg2;
- (C2CUploadRequest)getUploadRequest;
- (BOOL)retryUpload;
- (BOOL)enableHitCheck;
- (void)setEnableHitCheck:(BOOL)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (id)uploadFileKey;
- (void)setUploadFileKey:(id)arg1;
- (void).cxx_destruct;
@end
