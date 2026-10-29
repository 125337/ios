@interface MagicBrushCore : NSObject <MBRuntimeOCWrapper, MagicBrushProfileTrait, MagicBrushCanvasCaptureTrait, MagicBrushRenderTargetTrait, MagicBrushNativeRenderTrait, MagicBrushMemoryTrait, MagicBrushExternalDrawableTrait>
{
    id <MagicBrushCoreScreenCanvasDelegate> _windowDelegate; // +0x8
    id <MagicBrushCoreResourceDelegate> _resDelegate; // +0x10
    id <MagicBrushCoreJSStuffDelegate> _jsDelegate; // +0x18
    void * _runtime; // +0x20
}
+ (unsigned long long)metalCppDecoderVersion;
+ (BOOL)supportRenderdoc;
- (void)dealloc;
- (void)setup:(id)arg1;
- (void)bindTo:(id)arg1;
- (void)pause;
- (void)resume;
- (void)destroy;
- (id)performance;
- (void)run;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)sendTouchEvent:(id)arg1 forCanvas:(int)arg2;
- (void)runOnJsThread:(id /* block */)arg1;
- (void)runOnJsThreadSync:(id /* block */)arg1;
- (void)postToJsThread:(id /* block */)arg1;
- (id)createRenderTargetWithLayer:(id)arg1 forCanvas:(int)arg2;
- (id)createRenderTargetWithPixelBufferDelegate:(id)arg1 forCanvas:(int)arg2;
- (id)createRenderTargetWithMTLLayer:(id)arg1 forCanvas:(int)arg2;
- (id)transformDrawableToUIImage:(shared_ptr<magicbrush::PlainPixelDrawable>)arg1;
- (id)fetchCanvasContent:(int)arg1;
- (void)fetchCanvasContentAsync:(int)arg1 callback:(id /* block */)arg2;
- (void)release2DMemory;
- (void)notifyNativeRenderCanvasCreated:(int)arg1 width:(int)arg2 height:(int)arg3 onscreen:(BOOL)arg4;
- (void)notifyNativeRenderCanvasResized:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)notifyNativeRenderCanvasDestroyed:(int)arg1;
- (void)notifyNativeRenderCanvasSetStyle:(int)arg1 x:(float)arg2 y:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (void)notifyNativeRenderCanvasGotContext:(int)arg1 contextId:(int)arg2 contextType:(id)arg3 options:(id)arg4;
- (id)onNativeRenderCanvasToDataURL:(int)arg1 type:(id)arg2 encoderOptions:(float)arg3;
- (id)notifyNativeRenderImageLoaded:(id)arg1 withId:(int)arg2;
- (void)notifyNativeRenderImageDestroyed:(int)arg1;
- (id)notifyNativeRenderFontLoaded:(id)arg1;
- (id)onNativeRenderProcessBuffer:(id)arg1 extBuffer:(id)arg2;
- (void)onNativeRenderSwapWindow;
- (id)detachCanvasForWorkerTransfer:(int)arg1;
- (void)bindCanvasFromWorkerTransfer:(id)arg1;
- (BOOL)registerExternaPlainPixelRGBA:(const char *)arg1 withId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)unregisterExternalPlainPixel:(int)arg1;
- (void)notifyExternalCVPixelBuffer:(id)arg1 elementId:(int)arg2 buffer:(__CVBuffer *)arg3;
- (void)setupFrameCapture:(unsigned long long)arg1;
- (void)startCaptureFrames:(int)arg1 count:(int)arg2;
- (void)stopCaptureFrames:(int)arg1;
- (void)startGLProfile:(id)arg1;
- (void)stopGLProfile;
- (id)windowDelegate;
- (void)setWindowDelegate:(id)arg1;
- (id)resDelegate;
- (void)setResDelegate:(id)arg1;
- (id)jsDelegate;
- (void)setJsDelegate:(id)arg1;
- (void *)runtime;
- (void)setRuntime:(void *)arg1;
- (void).cxx_destruct;
@end
