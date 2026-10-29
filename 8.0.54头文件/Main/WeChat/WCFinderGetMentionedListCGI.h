@interface WCFinderGetMentionedListCGI : WCFinderBaseCgi
{
    NSString * _lastDisplayId; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSData * _lastBuff; // +0x20
    NSString * _userName; // +0x28
}
- (id)initWithUserName:(id)arg1 lastBuff:(id)arg2 type:(int)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest:(int)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastDisplayId;
- (void)setLastDisplayId:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

