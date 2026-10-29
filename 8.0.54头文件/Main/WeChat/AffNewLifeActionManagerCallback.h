@interface AffNewLifeActionManagerCallback : NSObject
{
    weak_ptr<zidl::ZServerInvoker> server_invoker_; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onDoActionComplete:(int)arg1 resp:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

