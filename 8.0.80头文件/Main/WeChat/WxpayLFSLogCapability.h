@interface WxpayLFSLogCapability : WxpayHostLogCapability
- (id)init;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (void)logWithLevel:(long long)arg1 layer:(id)arg2 tag:(id)arg3 message:(id)arg4;
@end
