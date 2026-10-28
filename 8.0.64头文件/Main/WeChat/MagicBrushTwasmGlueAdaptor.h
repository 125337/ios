@interface MagicBrushTwasmGlueAdaptor : NSObject
{
    WasmAdaptor * _wasmAdaptor; // +0x8
    void * _glueAdaptorImpl; // +0x10
}
- (id)initWithWasmAdaptor:(id)arg1;
- (void)bindTo:(id)arg1;
- (id)wasmAdaptor;
- (void)setWasmAdaptor:(id)arg1;
- (void *)glueAdaptorImpl;
- (void)setGlueAdaptorImpl:(void *)arg1;
- (void).cxx_destruct;
@end
