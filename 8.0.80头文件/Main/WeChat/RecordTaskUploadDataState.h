@interface RecordTaskUploadDataState : RecordTaskBaseState
{
    int _retryCount; // +0x8
    unsigned long long _totalFileSize; // +0x10
    NSString * _uploadFileKey; // +0x18
}
- (void)start;
- (void)stop;
- (id)getStateName;
- (BOOL)isNeedDerivedFileId;
- (void)startUploadData;
- (void)onUploadFail:(id)arg1;
- (void)transformToCompressVideoUploadState;
- (void)onCdnUploadDataSuccess:(id)arg1;
- (C2CUploadRequest)getUploadRequest;
- (BOOL)retryUpload;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (id)uploadFileKey;
- (void)setUploadFileKey:(id)arg1;
- (void).cxx_destruct;
@end
