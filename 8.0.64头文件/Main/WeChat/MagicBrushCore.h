@interface MagicBrushCore : NSObject <MBRuntimeDelegate, MagicBrushProfileTrait, MagicBrushCanvasCaptureTrait, MagicBrushRenderTargetTrait, MagicBrushNativeRenderTrait, MagicBrushMemoryTrait, MagicBrushExternalDrawableTrait>
{
    BOOL _pauseByBackground; // +0x8
    BOOL _pauseByUser; // +0x9
    BOOL _suspendInBackground; // +0xa
    BOOL _autoHighFreshRate; // +0xb
    BOOL _isFirstNativeRenderScreenCanvasCreated; // +0xc
    id <MagicBrushCoreScreenCanvasDelegate> _windowDelegate; // +0x10
    id <MagicBrushCoreResourceDelegate> _resDelegate; // +0x18
    id <MagicBrushCoreJSStuffDelegate> _jsDelegate; // +0x20
    MagicBrushPerformance * _performance; // +0x28
    void * _runtime; // +0x30
    CADisplayLink * _displayLink; // +0x38
    NSMutableDictionary * _canvasInfoMap; // +0x40
    NSThread * _thread; // +0x48
    NSCondition * _bgCondition; // +0x50
    MBWeakProxy * _weakProxy; // +0x58
    CmdBufferResultHelperOC * _cmdbuffer_helper; // +0x60
}
+ (id)getMBJS;
+ (unsigned long long)metalCppDecoderVersion;
+ (BOOL)supportRenderdoc;
- (void)dealloc;
- (void)setup:(id)arg1;
- (void)bindTo:(id)arg1;
- (void)run:(id)arg1;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)registerAppLifecycleEvent;
- (void)unregisterAppLifecycleEvent;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)sendTouchEvent:(id)arg1 forCanvas:(int)arg2;
- (void)realRunOnJsThread:(id /* block */)arg1;
- (void)runOnJsThread:(id /* block */)arg1;
- (void)runOnJsThreadSync:(id /* block */)arg1;
- (void)postToJsThread:(id /* block */)arg1;
- (void)onCanvasCreated:(int)arg1 onscreen:(BOOL)arg2;
- (void)onCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onCanvasContextCreated:(int)arg1 contextId:(int)arg2 contextType:(int)arg3;
- (void)onCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onCanvasRemove:(int)arg1;
- (void)onCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onCanvasFirstFrameRendered:(int)arg1;
- (void)onJsLog:(id)arg1;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (void)onJsEventSend:(id)arg1 data:(id)arg2;
- (void)onLoadDataFromURL:(id)arg1 callback:(id /* block */)arg2;
- (id)onLoadDataFromURLSync:(id)arg1;
- (__CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(id)arg2;
- (id)createRenderTargetWithLayer:(id)arg1 forCanvas:(int)arg2;
- (id)createRenderTargetWithPixelBufferDelegate:(id)arg1 forCanvas:(int)arg2;
- (id)createRenderTargetWithMTLLayer:(id)arg1 forCanvas:(int)arg2;
- (void)onRenderTargetCreated:(id)arg1 forCanvas:(int)arg2;
- (void)onRenderTargetDestroyed:(id)arg1 forCanvas:(int)arg2;
- (id)fetchCanvasContentImpl:(int)arg1;
- (id)fetchCanvasContent:(int)arg1;
- (void)fetchCanvasContentAsync:(int)arg1 callback:(id /* block */)arg2;
- (void)release2DMemory;
- (void)notifyNativeRenderCanvasCreated:(int)arg1 width:(int)arg2 height:(int)arg3 onscreen:(BOOL)arg4;
- (void)notifyNativeRenderCanvasResized:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)notifyNativeRenderCanvasDestroyed:(int)arg1;
- (void)notifyNativeRenderCanvasSetStyle:(int)arg1 x:(float)arg2 y:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (BOOL)getBool:(id)arg1 withKey:(id)arg2 andDefaultValue:(BOOL)arg3;
- (void)notifyNativeRenderCanvasGotContext:(int)arg1 contextId:(int)arg2 contextType:(id)arg3 options:(id)arg4;
- (id)onNativeRenderCanvasToDataURL:(int)arg1 type:(id)arg2 encoderOptions:(float)arg3;
- (id)notifyNativeRenderImageLoaded:(id)arg1 withId:(int)arg2;
- (void)notifyNativeRenderImageDestroyed:(int)arg1;
- (id)notifyNativeRenderFontLoaded:(id)arg1;
- (id)onNativeRenderProcessBuffer:(id)arg1 extBuffer:(id)arg2;
- (void)onNativeRenderSwapWindow;
- (BOOL)registerExternaPlainPixelRGBA:(const char *)arg1 withId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)unregisterExternalPlainPixel:(int)arg1;
- (void)notifyExternalCVPixelBuffer:(id)arg1 elementId:(int)arg2 buffer:(__CVBuffer *)arg3;
- (void)setupFrameCapture:(unsigned long long)arg1;
- (void)startCaptureFrames:(int)arg1 count:(int)arg2;
- (void)stopCaptureFrames:(int)arg1;
- (void)startGLProfile:(id)arg1;
- (void)stopGLProfile;
- (void)onSetUserPreferredFps:(double)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (id)windowDelegate;
- (void)setWindowDelegate:(id)arg1;
- (id)resDelegate;
- (void)setResDelegate:(id)arg1;
- (id)jsDelegate;
- (void)setJsDelegate:(id)arg1;
- (id)performance;
- (void)setPerformance:(id)arg1;
- (void *)runtime;
- (void)setRuntime:(void *)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)canvasInfoMap;
- (void)setCanvasInfoMap:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (BOOL)pauseByBackground;
- (void)setPauseByBackground:(BOOL)arg1;
- (BOOL)pauseByUser;
- (void)setPauseByUser:(BOOL)arg1;
- (BOOL)suspendInBackground;
- (void)setSuspendInBackground:(BOOL)arg1;
- (id)bgCondition;
- (void)setBgCondition:(id)arg1;
- (BOOL)autoHighFreshRate;
- (void)setAutoHighFreshRate:(BOOL)arg1;
- (BOOL)isFirstNativeRenderScreenCanvasCreated;
- (void)setIsFirstNativeRenderScreenCanvasCreated:(BOOL)arg1;
- (id)weakProxy;
- (void)setWeakProxy:(id)arg1;
- (CmdBufferResultHelperOC *)cmdbuffer_helper;
- (void)setCmdbuffer_helper:(CmdBufferResultHelperOC *)arg1;
- (void).cxx_destruct;
@end
