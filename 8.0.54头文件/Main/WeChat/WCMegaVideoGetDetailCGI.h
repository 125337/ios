@interface WCMegaVideoGetDetailCGI : WCFinderBaseCgi
{
    unsigned int _scene; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _videoId; // +0x20
    NSString * _videoNonceId; // +0x28
    NSString * _encryptedVideoId; // +0x30
}
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 scene:(long long)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)videoNonceId;
- (void)setVideoNonceId:(id)arg1;
- (id)encryptedVideoId;
- (void)setEncryptedVideoId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

