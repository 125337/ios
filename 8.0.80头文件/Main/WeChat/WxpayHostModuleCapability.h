@interface WxpayHostModuleCapability : NSObject <WxpayCapabilityProvider>
{
    WxpayCapabilitySpec * _spec; // +0x8
    WxpayModuleDescriptor * _descriptor; // +0x10
}
- (id)initWithDescriptor:(id)arg1;
- (id)spec;
- (id)invokeModuleMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (id)handleInvocation:(id)arg1 sink:(id /* block */)arg2;
- (id)descriptor;
- (void).cxx_destruct;
@end
