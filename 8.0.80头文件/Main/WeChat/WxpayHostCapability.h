@interface WxpayHostCapability : NSObject <WxpayCapabilityProvider>
{
    WxpayCapabilitySpec * _spec; // +0x8
}
- (id)initWithKind:(id)arg1 name:(id)arg2 methods:(id)arg3 acknowledges:(id)arg4;
- (id)initWithKind:(id)arg1 name:(id)arg2 methods:(id)arg3 acknowledges:(id)arg4 attributes:(id)arg5;
- (id)spec;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (id)handleInvocation:(id)arg1 sink:(id /* block */)arg2;
- (void).cxx_destruct;
@end
