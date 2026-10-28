@interface WeXNetAdaptor : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    unique_ptr<mm::JSHolder<OpaqueJSValue *>, std::default_delete<mm::JSHolder<OpaqueJSValue *>>> jsInferenceHolder; // +0x10
    shared_ptr<WeXNet::MNXNetRuntime> mRuntime; // +0x18
    id <WeXNetAdaptorDelegate><WeXNetLogDelegate> weakDelegate; // +0x28
}
- (void)dealloc;
- (void)log:(int)arg1 message:(const void *)arg2;
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2 delegate:(id)arg3;
- (void)releaseContext;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
