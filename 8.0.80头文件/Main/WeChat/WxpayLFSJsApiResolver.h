@interface WxpayLFSJsApiResolver : WxpayHostJsApiCapability
- (id)init;
- (BOOL)canHandleJsApi:(id)arg1 appId:(id)arg2;
- (void)invokeJsApi:(id)arg1 context:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
@end
