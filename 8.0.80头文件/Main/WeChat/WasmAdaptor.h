@interface WasmAdaptor : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    WasmAdaptorBridge * _adaptor; // +0x10
    TWasmBindingModule * _wasm_module; // +0x18
    id <WXFileLoaderDelegate> _fileDelegate; // +0x20
    id <WXWASMLogDelegate> _logDelegate; // +0x28
}
+ (id)getBrotiData:(id)arg1;
- (id)initWASMWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (void)setFileDelegate:(id)arg1;
- (void)setLogDelegate:(id)arg1;
- (void)setWebGLWasmAdaptor:(IWasmGlueAdaptor *)arg1;
- (void)addTWasmLinker:(IWasmLinker *)arg1;
- (id)getFileData:(id)arg1;
- (void)wasmNativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;
- (void)releaseContext;
- (void)dealloc;
- (id)fileDelegate;
- (id)logDelegate;
- (void).cxx_destruct;
@end
