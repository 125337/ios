@interface WCFinderLivePresentationFileValidationCGI : WCFinderLiveBaseCgi
{
    unsigned int _fileType; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _finderUsername; // +0x18
    unsigned long long _liveId; // +0x20
    unsigned long long _finderId; // +0x28
    NSString * _finderNonceId; // +0x30
    NSString * _fileMD5; // +0x38
    NSString * _fileCDNURL; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failureBlock; // +0x50
}
- (id)initWithTaskId:(id)arg1 finderUsername:(id)arg2 liveId:(unsigned long long)arg3 finderId:(unsigned long long)arg4 finderNonceId:(id)arg5 fileType:(unsigned int)arg6 fileMD5:(id)arg7 fileCDNURL:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)finderId;
- (void)setFinderId:(unsigned long long)arg1;
- (id)finderNonceId;
- (void)setFinderNonceId:(id)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)fileCDNURL;
- (void)setFileCDNURL:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

