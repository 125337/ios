@interface AffBizCppToNativeManagerCallback : NSObject
{
    weak_ptr<zidl::ZServerInvoker> server_invoker_; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)ongetResortContextComplete:(int)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

