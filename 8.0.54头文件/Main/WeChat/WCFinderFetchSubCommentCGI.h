@interface WCFinderFetchSubCommentCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    int _pullScene; // +0xc
    unsigned long long _objectId; // +0x10
    unsigned long long _refCommentID; // +0x18
    NSData * _rootCommentLastBuffer; // +0x20
    id /* block */ _successBlock; // +0x28
    NSString * _finderUsername; // +0x30
    id /* block */ _failBlock; // +0x38
    unsigned long long _direction; // +0x40
    NSString * _nonceID; // +0x48
    unsigned long long _rootCommentID; // +0x50
    unsigned long long _identityScene; // +0x58
}
- (id)initWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 rootCommentID:(unsigned long long)arg3 scene:(int)arg4 pullScene:(int)arg5 identityScene:(unsigned long long)arg6 rootCommentLastBuffer:(id)arg7 direction:(unsigned long long)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (id)rootCommentLastBuffer;
- (void)setRootCommentLastBuffer:(id)arg1;
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
- (unsigned long long)rootCommentID;
- (void)setRootCommentID:(unsigned long long)arg1;
- (unsigned long long)identityScene;
- (void)setIdentityScene:(unsigned long long)arg1;
- (int)pullScene;
- (void)setPullScene:(int)arg1;
- (void).cxx_destruct;
@end

