@interface WxpayHostHttpCapability : WxpayHostPlatformCapability
- (id)init;
- (id)executeWithContext:(id)arg1 request:(id)arg2 callback:(id /* block */)arg3;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
@end
