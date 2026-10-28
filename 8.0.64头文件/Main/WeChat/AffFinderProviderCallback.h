@interface AffFinderProviderCallback : NSObject
{
    weak_ptr<zidl::ZServerInvoker> server_invoker_; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onfinderRedDotHasAddActionComplete:(unsigned long long)arg1;
- (void)onfinderRedDotHasDisposeActionComplete:(unsigned long long)arg1;
- (void)onfinderRedDotDataChangedActionComplete:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
