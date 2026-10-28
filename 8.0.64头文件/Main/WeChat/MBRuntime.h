@interface MBRuntime : NSObject
{
    BOOL _isRuntimeInvalid; // +0x8
    BOOL _enableVConsole; // +0x9
    id _privateData; // +0x10
    id <MagicBrushDelegate> _delegate; // +0x18
    MagicBrushBiz * _biz; // +0x20
    NSThread * _jsThread; // +0x28
    MBBuildConfig * _config; // +0x30
    MagicBrushService * _service; // +0x38
}
- (id)createView:(CGRect)arg1 config:(id)arg2;
- (void)injectLibs;
- (id)createObject;
- (id)createObject:(id)arg1;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)notifyExternalCVPixelBuffer:(id)arg1 elementId:(int)arg2 buffer:(__CVBuffer *)arg3;
- (void)destroyRuntime;
- (void)pause;
- (void)resume;
- (void)nativeLog:(unsigned long long)arg1 msg:(id)arg2;
- (void)vConsoleLog:(id)arg1;
- (void)switchVConsole:(BOOL)arg1;
- (id)getFileData:(id)arg1;
- (CGRect)getFrame;
- (void)setMute:(BOOL)arg1;
- (void)runCodeInJsThread:(id /* block */)arg1;
- (void)runCodeInJsThreadSync:(id /* block */)arg1;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)setExternalViewStub:(id)arg1 forCanvasId:(unsigned int)arg2;
- (id)createViewInCanvas:(int)arg1;
- (void)createPixelBufferInCanvas:(int)arg1;
- (BOOL)isRuntimeInvalid;
- (id)privateData;
- (void)setPrivateData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (BOOL)enableVConsole;
- (void)setEnableVConsole:(BOOL)arg1;
- (id)jsThread;
- (void)setJsThread:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void).cxx_destruct;
@end
