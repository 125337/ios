@interface WCFinderLiveTestSpeedCGI : WCFinderLiveBaseCgi
{
    unsigned int _sceneCode; // +0x8
    unsigned int _opCode; // +0xc
    unsigned int _uploadSize; // +0x10
    unsigned int _downloadSize; // +0x14
    unsigned int _concurrentNum; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithSceneCode:(unsigned int)arg1 opCode:(unsigned int)arg2 uploadSize:(unsigned int)arg3 downloadSize:(unsigned int)arg4 concurrentNum:(unsigned int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned int)sceneCode;
- (void)setSceneCode:(unsigned int)arg1;
- (unsigned int)opCode;
- (void)setOpCode:(unsigned int)arg1;
- (unsigned int)uploadSize;
- (void)setUploadSize:(unsigned int)arg1;
- (unsigned int)downloadSize;
- (void)setDownloadSize:(unsigned int)arg1;
- (unsigned int)concurrentNum;
- (void)setConcurrentNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end
