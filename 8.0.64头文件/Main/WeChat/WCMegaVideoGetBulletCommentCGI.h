@interface WCMegaVideoGetBulletCommentCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    NSString * _videoId; // +0x18
    NSString * _videoNonceId; // +0x20
    NSData * _lastBuffer; // +0x28
    unsigned long long _videoTimeStamp; // +0x30
}
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 videoTimeStamp:(unsigned long long)arg3 lastBuffer:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
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
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)videoTimeStamp;
- (void)setVideoTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
