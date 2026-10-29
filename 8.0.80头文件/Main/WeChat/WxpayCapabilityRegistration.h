@interface WxpayCapabilityRegistration : NSObject <WxpayCapabilityProvider>
{
    WxpayCapabilitySpec * _spec; // +0x8
    id <WxpayCapabilityProvider> _capability; // +0x10
}
+ (id)registrationSealing:(id)arg1;
- (id)initInternal;
- (id)spec;
- (id)handleInvocation:(id)arg1 sink:(id /* block */)arg2;
- (id)description;
- (id)capability;
- (void).cxx_destruct;
@end
