@interface WCFinderGetLbsStreamCGI : WCFinderBaseCgi
{
    int _buisnessRequestType; // +0x8
    NSData * _lastBuffer; // +0x10
    unsigned long long _tabTipsObjectId; // +0x18
    unsigned long long _pullType; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
    FinderLbsStreamLocation * _realtimeLocation; // +0x38
}
- (id)initWithPullType:(unsigned long long)arg1 lastBuffer:(id)arg2 location:(id)arg3 realtimeLocation:(id)arg4 commentScene:(int)arg5 requestType:(int)arg6 tabTipsObjectId:(unsigned long long)arg7 tabTipsByPassInfo:(id)arg8 sucBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
- (int)requestType;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)tabTipsObjectId;
- (void)setTabTipsObjectId:(unsigned long long)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (int)buisnessRequestType;
- (void)setBuisnessRequestType:(int)arg1;
- (id)realtimeLocation;
- (void)setRealtimeLocation:(id)arg1;
- (void).cxx_destruct;
@end
