@interface WCFinderGetLikeListCGI : WCFinderBaseCgi
{
    int _tabType; // +0x8
    NSString * _targetUsername; // +0x10
    NSString * _lastDisplayId; // +0x18
    id /* block */ _successful; // +0x20
    id /* block */ _failure; // +0x28
    NSData * _lastBuff; // +0x30
    FinderClientStatus * _clientStatus; // +0x38
}
- (id)initWithLastBuff:(id)arg1 targetUsername:(id)arg2 clientStatus:(id)arg3 scene:(int)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (id)initWithLastBuff:(id)arg1 targetUsername:(id)arg2 scene:(int)arg3 clientStatus:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (id)initWithLastBuff:(id)arg1 targetUsername:(id)arg2 scene:(int)arg3 tabType:(int)arg4 clientStatus:(id)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)createRequestWithScene:(int)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)targetUsername;
- (void)setTargetUsername:(id)arg1;
- (id)lastDisplayId;
- (void)setLastDisplayId:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (void).cxx_destruct;
@end

