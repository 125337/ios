@interface WCFinderBatchGetMentionInfoCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    NSString * _userName; // +0x18
    NSArray * _mentionIDList; // +0x20
    long long _requestScene; // +0x28
}
- (id)initWithUserName:(id)arg1 mentionIDList:(id)arg2 requestScene:(long long)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)mentionIDList;
- (void)setMentionIDList:(id)arg1;
- (long long)requestScene;
- (void)setRequestScene:(long long)arg1;
- (void).cxx_destruct;
@end
