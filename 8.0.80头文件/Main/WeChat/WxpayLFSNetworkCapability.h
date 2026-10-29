@interface WxpayLFSNetworkCapability : WxpayHostServiceCapability
{
    WXPLiteAppNetworkService * _networkService; // +0x8
    KindaCrtService * _crtService; // +0x10
    long long _nextNetId; // +0x18
    NSMutableSet * _cancelledNetIds; // +0x20
}
- (id)init;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (void)cancelAll;
- (id)networkService;
- (void)setNetworkService:(id)arg1;
- (id)crtService;
- (void)setCrtService:(id)arg1;
- (long long)nextNetId;
- (void)setNextNetId:(long long)arg1;
- (id)cancelledNetIds;
- (void)setCancelledNetIds:(id)arg1;
- (void).cxx_destruct;
@end
