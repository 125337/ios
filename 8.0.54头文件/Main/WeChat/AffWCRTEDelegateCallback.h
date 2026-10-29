@interface AffWCRTEDelegateCallback : NSObject
{
    weak_ptr<zidl::ZServerInvoker> server_invoker_; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onSayHelloComplete:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

