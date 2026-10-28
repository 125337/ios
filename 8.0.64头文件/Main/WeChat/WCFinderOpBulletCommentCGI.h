@interface WCFinderOpBulletCommentCGI : WCFinderBaseCgi
{
    int _opType; // +0x8
    int _commentScene; // +0xc
    NSString * _objectId; // +0x10
    NSString * _objectNonceId; // +0x18
    unsigned long long _commentId; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithObjectId:(id)arg1 objectNonceId:(id)arg2 commentId:(unsigned long long)arg3 opType:(int)arg4 commentScene:(int)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (unsigned long long)commentId;
- (void)setCommentId:(unsigned long long)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
