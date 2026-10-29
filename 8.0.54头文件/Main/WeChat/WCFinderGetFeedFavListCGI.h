@interface WCFinderGetFeedFavListCGI : WCFinderBaseCgi
{
    int _requestType; // +0x8
    NSString * _finderUsername; // +0x10
    unsigned long long _scene; // +0x18
    NSData * _lastBuffer; // +0x20
    NSString * _objectID; // +0x28
    id /* block */ _successful; // +0x30
    id /* block */ _failure; // +0x38
}
- (id)initWithFinderUsername:(id)arg1 scene:(unsigned long long)arg2 lastBuffer:(id)arg3 objectID:(id)arg4 requestType:(int)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (int)requestType;
- (void)setRequestType:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

