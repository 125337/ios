@interface GroupNoticeUploadTask : NSObject
{
    unsigned char _retryCount; // +0x8
    BOOL _isThumb; // +0x9
    NSString * _fileKey; // +0x10
    NSString * _aesKey; // +0x18
    NSString * _filePath; // +0x20
    CdnProgressInfo * _progressInfo; // +0x28
    CdnUploadTaskInfo * _resultInfo; // +0x30
    id /* block */ _completeBlock; // +0x38
}
- (id)init;
- (id)description;
- (unsigned char)retryCount;
- (void)setRetryCount:(unsigned char)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (id)progressInfo;
- (void)setProgressInfo:(id)arg1;
- (id)resultInfo;
- (void)setResultInfo:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
