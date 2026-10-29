@interface WxpayHttpCapabilityClient : NSObject
{
    id /* block */ _invoker; // +0x8
}
- (id)initWithInvoker:(id /* block */)arg1;
- (id)executeRequest:(id)arg1 callback:(id /* block */)arg2;
- (id)executeBlockingRequest:(id)arg1;
- (void).cxx_destruct;
@end
