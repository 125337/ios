@interface WCFinderLiveBatchGetMicContactCGI : WCFinderLiveBaseCgi
{
    unsigned long long _getScene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
    NSArray * _micUsernameList; // +0x28
    NSArray * _sessionIds; // +0x30
    NSArray * _applyIds; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 getScene:(unsigned long long)arg3 micUsernameList:(id)arg4 sessionIds:(id)arg5 applyIds:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)getScene;
- (void)setGetScene:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)micUsernameList;
- (void)setMicUsernameList:(id)arg1;
- (id)sessionIds;
- (void)setSessionIds:(id)arg1;
- (id)applyIds;
- (void)setApplyIds:(id)arg1;
- (void).cxx_destruct;
@end
