@interface WCFinderCommentListCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    int _pullScene; // +0xc
    unsigned long long _objectId; // +0x10
    unsigned long long _refCommentID; // +0x18
    unsigned long long _rootCommentID; // +0x20
    NSData * _lastBuffer; // +0x28
    id /* block */ _successBlock; // +0x30
    NSString * _finderUsername; // +0x38
    id /* block */ _failBlock; // +0x40
    unsigned long long _direction; // +0x48
    NSString * _nonceID; // +0x50
    unsigned long long _identityScene; // +0x58
    NSData * _likeListBuffer; // +0x60
    FinderGetCommentListCtx * _commentCtx; // +0x68
    NSString * _enterSessionId; // +0x70
}
- (id)init;
- (id)requestWithParam:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)requestWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 scene:(int)arg3 enterSessionId:(id)arg4 pullScene:(int)arg5 identityScene:(unsigned long long)arg6 lastBuffer:(id)arg7 refCommentID:(unsigned long long)arg8 direction:(unsigned long long)arg9 commentRequestCtx:(id)arg10 successBlock:(id /* block */)arg11 failureBlock:(id /* block */)arg12;
- (id)requestWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 scene:(int)arg3 pullScene:(int)arg4 identityScene:(unsigned long long)arg5 lastBuffer:(id)arg6 rootCommentID:(unsigned long long)arg7 direction:(unsigned long long)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createRequest;
- (BOOL)needADDeviceInfo;
- (id)customSuccessfulRetCodeArray;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (unsigned long long)rootCommentID;
- (void)setRootCommentID:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)direction;
- (void)setDirection:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)identityScene;
- (void)setIdentityScene:(unsigned long long)arg1;
- (int)pullScene;
- (void)setPullScene:(int)arg1;
- (id)likeListBuffer;
- (void)setLikeListBuffer:(id)arg1;
- (id)commentCtx;
- (void)setCommentCtx:(id)arg1;
- (id)enterSessionId;
- (void)setEnterSessionId:(id)arg1;
- (void).cxx_destruct;
@end
