@interface WASocketBindingHandle : NSObject
{
    unique_ptr<weapp_core::WaSocketBindingCore, std::default_delete<weapp_core::WaSocketBindingCore>> _core; // +0x8
    OpaqueJSContext * _context; // +0x10
    NSThread * _jsThread; // +0x18
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2 enableTCP:(BOOL)arg3 enableUDP:(BOOL)arg4;
- (void)suspend;
- (void)resume;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
