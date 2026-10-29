@interface WxpayHostJsApiCapability : NSObject <WxpayCapabilityProvider>
{
    WxpayCapabilitySpec * _spec; // +0x8
}
- (id)initWithName:(id)arg1 appIds:(id)arg2;
- (id)initWithName:(id)arg1 appIds:(id)arg2 fileHandles:(id)arg3;
- (id)initAsResolverWithAppIds:(id)arg1;
- (id)initPlaceholderWithName:(id)arg1 appIds:(id)arg2;
- (id)initWithName:(id)arg1 appIds:(id)arg2 attributes:(id)arg3 fileHandles:(id)arg4;
- (id)spec;
- (void)invokeJsApi:(id)arg1 context:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (BOOL)canHandleJsApi:(id)arg1 appId:(id)arg2;
- (id)handleInvocation:(id)arg1 sink:(id /* block */)arg2;
- (void).cxx_destruct;
@end
