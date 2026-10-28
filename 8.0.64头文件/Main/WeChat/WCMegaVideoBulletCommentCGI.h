@interface WCMegaVideoBulletCommentCGI : WCFinderBaseCgi
{
    BOOL _isAuthorView; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _videoId; // +0x20
    NSString * _videoNonceId; // +0x28
    long long _videoTimestamp; // +0x30
    NSString * _content; // +0x38
    NSString * _username; // +0x40
}
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 videoTimestamp:(unsigned long long)arg3 content:(id)arg4 username:(id)arg5 isAuthorView:(BOOL)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)createPostRequest;
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
- (long long)videoTimestamp;
- (void)setVideoTimestamp:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)isAuthorView;
- (void)setIsAuthorView:(BOOL)arg1;
- (void).cxx_destruct;
@end
