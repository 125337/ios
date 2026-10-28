@interface WCFinderGetLbsStreamCGI : WCFinderBaseCgi
{
    int _buisnessRequestType; // +0x8
    NSData * _lastBuffer; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    FinderLbsStreamLocation * _realtimeLocation; // +0x28
}
- (id)initWithLastBuffer:(id)arg1 location:(id)arg2 realtimeLocation:(id)arg3 commentScene:(int)arg4 requestType:(int)arg5 sucBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (int)requestType;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
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
