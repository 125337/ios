@interface WCMegaVideoDeleteBulletCommentCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    NSString * _videoId; // +0x18
    NSString * _videoNonceId; // +0x20
    NSString * _deleteCommentId; // +0x28
    NSString * _username; // +0x30
}
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 deleteCommentId:(id)arg3 username:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createDelRequest;
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
- (id)deleteCommentId;
- (void)setDeleteCommentId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
