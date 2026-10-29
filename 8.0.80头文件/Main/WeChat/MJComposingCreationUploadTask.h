@interface MJComposingCreationUploadTask : NSObject
{
    BOOL _isRetrying; // +0x8
    BOOL _cancelled; // +0x9
    NSString * _taskId; // +0x10
    NSString * _templateZipFilePath; // +0x18
    NSString * _cdnFileKey; // +0x20
    unsigned long long _retryCount; // +0x28
    double _firstFailTime; // +0x30
    double _lastFailTime; // +0x38
    long long _errorType; // +0x40
    long long _cdnRetCode; // +0x48
    NSString * _errorMsg; // +0x50
    NSString * _cdnUrl; // +0x58
    NSString * _md5; // +0x60
    unsigned long long _fileSize; // +0x68
    id /* block */ _progressBlock; // +0x70
    id /* block */ _successBlock; // +0x78
    id /* block */ _failBlock; // +0x80
}
- (id)initWithFilePath:(id)arg1;
- (id)description;
- (BOOL)shouldStopRetry;
- (void)cancel;
- (BOOL)isCancelled;
- (void)incrementRetryCount;
- (void)setIsRetrying:(BOOL)arg1;
- (void)setLastFailTimeNow;
- (void)setErrorType:(long long)arg1 cdnRetCode:(long long)arg2 errorMsg:(id)arg3;
- (void)setUploadSuccessWithCdnUrl:(id)arg1 md5:(id)arg2 fileSize:(unsigned long long)arg3;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)templateZipFilePath;
- (void)setTemplateZipFilePath:(id)arg1;
- (id)cdnFileKey;
- (void)setCdnFileKey:(id)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (BOOL)isRetrying;
- (double)firstFailTime;
- (void)setFirstFailTime:(double)arg1;
- (double)lastFailTime;
- (void)setLastFailTime:(double)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (long long)cdnRetCode;
- (void)setCdnRetCode:(long long)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
