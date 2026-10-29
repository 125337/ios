@interface CdnTaskBlock : NSObject
{
    C2CUploadRequest uploadRequest; // +0x8
    C2CDownloadRequest downloadRequest; // +0x328
    BOOL _isRetryTask; // +0x788
    int _mode; // +0x78c
    NSString * _filekey; // +0x790
    unsigned long long _downloadType; // +0x798
    id /* block */ _progressBlock; // +0x7a0
    id /* block */ _existOnSvrBlock; // +0x7a8
    id /* block */ _uploadCompleteBlock; // +0x7b0
    id /* block */ _moovReadyBlock; // +0x7b8
    id /* block */ _m3u8ReadyBlock; // +0x7c0
    id /* block */ _requestDataReadyCallback; // +0x7c8
    id /* block */ _fastCompleteBlock; // +0x7d0
    id /* block */ _downloadCompleteBlock; // +0x7d8
    id /* block */ _preloadCompleteBlock; // +0x7e0
    unsigned long long _uploadActionType; // +0x7e8
}
- (id)filekey;
- (void)setFilekey:(id)arg1;
- (BOOL)isRetryTask;
- (void)setIsRetryTask:(BOOL)arg1;
- (int)mode;
- (void)setMode:(int)arg1;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)existOnSvrBlock;
- (void)setExistOnSvrBlock:(id /* block */)arg1;
- (id /* block */)uploadCompleteBlock;
- (void)setUploadCompleteBlock:(id /* block */)arg1;
- (id /* block */)moovReadyBlock;
- (void)setMoovReadyBlock:(id /* block */)arg1;
- (id /* block */)m3u8ReadyBlock;
- (void)setM3u8ReadyBlock:(id /* block */)arg1;
- (id /* block */)requestDataReadyCallback;
- (void)setRequestDataReadyCallback:(id /* block */)arg1;
- (id /* block */)fastCompleteBlock;
- (void)setFastCompleteBlock:(id /* block */)arg1;
- (id /* block */)downloadCompleteBlock;
- (void)setDownloadCompleteBlock:(id /* block */)arg1;
- (id /* block */)preloadCompleteBlock;
- (void)setPreloadCompleteBlock:(id /* block */)arg1;
- (unsigned long long)uploadActionType;
- (void)setUploadActionType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
