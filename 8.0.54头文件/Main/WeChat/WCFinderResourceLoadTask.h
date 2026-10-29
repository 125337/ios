@interface WCFinderResourceLoadTask : NSObject
{
    BOOL _isCanceled; // +0x8
    NSString * _targetURL; // +0x10
    id /* block */ _onLoadCompletionBlock; // +0x18
    NSString * _uid; // +0x20
    NSString * _savePath; // +0x28
    NSString * _fileMD5; // +0x30
    unsigned long long _maxRetryCount; // +0x38
    NSString * _tmpPath; // +0x40
    unsigned long long _retryCount; // +0x48
}
- (id)init;
- (void)setTargetURL:(id)arg1;
- (id)uid;
- (id)savePath;
- (id)tmpPath;
- (id)description;
- (id)targetURL;
- (id /* block */)onLoadCompletionBlock;
- (void)setOnLoadCompletionBlock:(id /* block */)arg1;
- (void)setUid:(id)arg1;
- (void)setSavePath:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned long long)maxRetryCount;
- (void)setMaxRetryCount:(unsigned long long)arg1;
- (void)setTmpPath:(id)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (void).cxx_destruct;
@end

