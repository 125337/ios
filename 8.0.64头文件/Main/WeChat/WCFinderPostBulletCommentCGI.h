@interface WCFinderPostBulletCommentCGI : WCFinderBaseCgi
{
    int _contentType; // +0x8
    int _commentSource; // +0xc
    int _postIdentity; // +0x10
    int _commentScene; // +0x14
    NSString * _objectId; // +0x18
    NSString * _objectNonceId; // +0x20
    unsigned long long _followBulletCommentId; // +0x28
    unsigned long long _videoTimestamp; // +0x30
    NSString * _content; // +0x38
    id /* block */ _successful; // +0x40
    id /* block */ _failure; // +0x48
}
- (id)initWithRequestBlock:(id /* block */)arg1 commentScene:(unsigned long long)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (unsigned long long)followBulletCommentId;
- (void)setFollowBulletCommentId:(unsigned long long)arg1;
- (unsigned long long)videoTimestamp;
- (void)setVideoTimestamp:(unsigned long long)arg1;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (int)commentSource;
- (void)setCommentSource:(int)arg1;
- (int)postIdentity;
- (void)setPostIdentity:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
