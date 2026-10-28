@interface WCGetNetworkIdCgi : WCBaseCgi
{
    GetNetworkInfoReq * getNetworkInfoReq; // +0x8
    NSString * _localNetId; // +0x10
    NSString * _localCtx; // +0x18
    NSString * _localClientIp; // +0x20
}
- (id)init;
- (void)startRequest;
- (void)getLocalNetworkId;
- (BOOL)isRequesting;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)getNetworkInfoReq;
- (void)setGetNetworkInfoReq:(id)arg1;
- (id)localNetId;
- (void)setLocalNetId:(id)arg1;
- (id)localCtx;
- (void)setLocalCtx:(id)arg1;
- (id)localClientIp;
- (void)setLocalClientIp:(id)arg1;
- (void).cxx_destruct;
@end
