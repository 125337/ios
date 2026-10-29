@interface WCMegaVideoLikeCGI : WCFinderBaseCgi
{
    BOOL _isLike; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _videoId; // +0x20
    NSString * _videoNonceId; // +0x28
}
- (id)initVideoLikeCGIWith:(id)arg1 videoNonceId:(id)arg2 isLike:(BOOL)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
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
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (void).cxx_destruct;
@end

