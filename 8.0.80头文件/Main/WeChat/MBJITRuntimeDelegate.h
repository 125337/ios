@interface MBJITRuntimeDelegate : NSObject <JITRuntimeDelegate, JITRuntimeDataTransferDelegate, MagicBrushCoreScreenCanvasDelegate, JITRuntimeNativeRenderDelegate, JITRuntimeJsApiHandlerDelegate>
{
    NSString * _fsScheme; // +0x8
    shared_ptr<magicbrush_v2::internal::JITJsRuntime> _rt; // +0x10
}
- (id)initWithRuntime:(shared_ptr<magicbrush_v2::internal::JITJsRuntime>)arg1 fsScheme:(id)arg2;
- (void)dealloc;
- (void)onLoad:(id)arg1 jitRuntimeView:(id)arg2;
- (void)onTerminate;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (id)getFileData:(id)arg1;
- (void)onXHRRequest:(id)arg1;
- (void)onAlertMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 workerId:(unsigned int)arg4;
- (id)onRequestScreenCanvasDelegateFor:(id)arg1 workerId:(int)arg2;
- (shared_ptr<magicbrush_v2::internal::JITJsRuntime>)rt;
- (void)setRt:(shared_ptr<magicbrush_v2::internal::JITJsRuntime>)arg1;
- (id)fsScheme;
- (void)setFsScheme:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
