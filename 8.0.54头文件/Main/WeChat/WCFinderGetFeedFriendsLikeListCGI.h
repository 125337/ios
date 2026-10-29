@interface WCFinderGetFeedFriendsLikeListCGI : WCFinderBaseCgi
{
    NSString * _username; // +0x8
    unsigned long long _scene; // +0x10
    NSData * _lastBuffer; // +0x18
    NSString * _objectID; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithUsername:(id)arg1 scene:(unsigned long long)arg2 lastBuffer:(id)arg3 objectID:(id)arg4 nonceID:(id)arg5 likeBuffer:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

