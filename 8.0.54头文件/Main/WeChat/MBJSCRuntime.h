@interface MBJSCRuntime : MBRuntime <WAOpenGLViewDelegate, WAOpenGLScreenCanvasDelegate, WAOpenGlCaptureDelegate, WXWASMLogDelegate, WeMediaDelegate, wxAudioNativeLogDelegate, wxAudioFileLoaderDelegate, WXFileLoaderDelegate, wxAudioStateDelegate, WCAudioModuleDelegate, MagicBrushCoreScreenCanvasDelegate, MagicBrushCoreResourceDelegate, MagicBrushCVPixelBufferRTDelegate, MagicBrushCoreJSStuffDelegate>
{
    void * bindingBizMap; // +0x8
    void * onBizConnectedFunc; // +0x10
    void * onBizDisconnectedFunc; // +0x18
    void * bindingPsMap; // +0x20
    BOOL _isBackground; // +0x28
    BOOL _isAudioInterrupt; // +0x29
    int _subContextId; // +0x2c
    unsigned int _bufferIDSequence; // +0x30
    WAOpenGLView * _runtimeView; // +0x38
    MagicBrushCore * _mbCore; // +0x40
    MBJSCJSBridgeImpl * _bridge; // +0x48
    JSContext * _mainContext; // +0x50
    void * _nativeGlobal; // +0x58
    void * _mb; // +0x60
    void * _weixinJSContext; // +0x68
    void * _console; // +0x70
    WasmAdaptor * _wasm; // +0x78
    WXAudioNative * _wxAudioNative; // +0x80
    WeMediaApi * _wemedia_api; // +0x88
    NSThread * _thread; // +0x90
    JSVirtualMachine * _jsvm; // +0x98
    NSMutableDictionary * _subContexts; // +0xa0
    NSMutableSet * _playingAudioEngineSet; // +0xa8
    NSMutableDictionary * _mbViewSet; // +0xb0
    NSMutableDictionary * _extViewDict; // +0xb8
    NSMutableDictionary * _mapArrayBuffer; // +0xc0
}
- (void)initPluginModule;
- (BOOL)injectPlugin:(id)arg1;
- (BOOL)bindPublicService:(id)arg1 serviceAlias:(id)arg2 bindingObj:(void *)arg3;
- (void)unbindPublicService:(id)arg1;
- (void)postMessage:(id)arg1 toPublicService:(id)arg2;
- (void)postMessage:(id)arg1 toBiz:(id)arg2;
- (void)receiveMessageFromBiz:(id)arg1 message:(id)arg2;
- (void)onBizListenToPublicService:(id)arg1;
- (void)receiveMessageFromPublicService:(id)arg1 message:(id)arg2;
- (void)onPublicServiceListenToBiz:(id)arg1;
- (void)onPublicServiceCreated;
- (void)connectBiz:(id)arg1;
- (void)disconnectBiz:(id)arg1;
- (void)initVConsole;
- (int)createSubContext:(id)arg1;
- (id)getSubContext:(int)arg1;
- (void)destroySubContext:(int)arg1;
- (void)evaluateScript:(id)arg1 inSubContext:(int)arg2 sourceURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUpWeixinJSContext;
- (int)createWeixinJSSubContext:(id)arg1;
- (int)createWeixinJSSubContext:(id)arg1 currentThis:(OpaqueJSValue *)arg2;
- (id)getWeixinJSSubContext:(int)arg1;
- (void)destroyWeixinJSSubContext:(int)arg1;
- (void)evaluateScript:(id)arg1 inWeixinJSSubContext:(int)arg2 sourceURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)extractNameFromWeixinJSSubContext:(id)arg1;
- (void)injectWeixinArrayBuffer;
- (id)insertNativeArrayBuffer:(int)arg1 bufferId:(int *)arg2;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)getArrayBuffer:(unsigned int)arg1;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)genBufferID;
- (id)init;
- (void)dealloc;
- (void)destroyRuntime;
- (void)stopThread;
- (id)createView:(CGRect)arg1 config:(id)arg2;
- (void)runThread:(id)arg1;
- (void)setupEnv:(id)arg1;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)setupBinding;
- (id)createObject;
- (id)createObject:(id)arg1;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(id /* block */)arg3 context:(id)arg4 inSubThread:(BOOL)arg5;
- (void)runCodeInJsThread:(id /* block */)arg1;
- (void)runCodeInJsThreadSync:(id /* block */)arg1;
- (void)realRunCodeInJsThread:(id /* block */)arg1;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)injectPublicResources;
- (void)notifyOnLoad;
- (void)injectLibs;
- (BOOL)isFileExist:(id)arg1;
- (id)getFileData:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)systemLog:(id)arg1;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)logGLError:(int)arg1 name:(id)arg2;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onScreenCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (id)createViewInCanvas:(int)arg1;
- (void)createPixelBufferInCanvas:(int)arg1;
- (void)onFrameAvailable:(__CVBuffer *)arg1 inRT:(id)arg2;
- (void)onLoadData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (void)pause;
- (void)resume;
- (void)handleJSException:(id)arg1 exception:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (CGRect)getFrame;
- (void)onScreenCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onScreenCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onScreenCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(CGRect)arg3;
- (void)setExternalViewStub:(id)arg1 forCanvasId:(unsigned int)arg2;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(__CVBuffer *)arg4;
- (id)imageFromPixelBuffer:(__CVBuffer *)arg1;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
- (BOOL)weMediaGetExternalConfig:(id)arg1 defaultVal:(BOOL)arg2;
- (void)weMediaReportEventWithEvent:(id)arg1 reportInfo:(id)arg2 params:(id)arg3;
- (BOOL)weMediaTryStartAudioDevice:(unsigned long long)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (id)weMediaGetAbsolutePath:(id)arg1;
- (BOOL)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (void)logError:(id)arg1 target:(long long)arg2;
- (void)logInfo:(id)arg1 target:(long long)arg2;
- (void)logWarning:(id)arg1 target:(long long)arg2;
- (void)logDebug:(id)arg1 target:(long long)arg2;
- (id)getAudioFilePath:(id)arg1;
- (void)pauseAllPlayer;
- (void)resumeAllPlayer;
- (void)setMute:(BOOL)arg1;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)sendAudioInterruptionBeginEvent;
- (void)sendAudioInterruptionEndEvent;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2;
- (id)getIdentifier;
- (void)activeAudioSession:(int)arg1;
- (void)startGpuProfile;
- (void)stopGpuProfile;
- (id)runtimeView;
- (void)setRuntimeView:(id)arg1;
- (id)mbCore;
- (void)setMbCore:(id)arg1;
- (id)bridge;
- (void)setBridge:(id)arg1;
- (id)mainContext;
- (void *)nativeGlobal;
- (void)setNativeGlobal:(void *)arg1;
- (void *)mb;
- (void)setMb:(void *)arg1;
- (void *)weixinJSContext;
- (void)setWeixinJSContext:(void *)arg1;
- (void *)console;
- (void)setConsole:(void *)arg1;
- (id)wasm;
- (void)setWasm:(id)arg1;
- (id)wxAudioNative;
- (void)setWxAudioNative:(id)arg1;
- (id)wemedia_api;
- (void)setWemedia_api:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (BOOL)isAudioInterrupt;
- (void)setIsAudioInterrupt:(BOOL)arg1;
- (id)jsvm;
- (void)setJsvm:(id)arg1;
- (int)subContextId;
- (void)setSubContextId:(int)arg1;
- (id)subContexts;
- (void)setSubContexts:(id)arg1;
- (id)playingAudioEngineSet;
- (void)setPlayingAudioEngineSet:(id)arg1;
- (id)mbViewSet;
- (void)setMbViewSet:(id)arg1;
- (id)extViewDict;
- (void)setExtViewDict:(id)arg1;
- (id)mapArrayBuffer;
- (void)setMapArrayBuffer:(id)arg1;
- (unsigned int)bufferIDSequence;
- (void)setBufferIDSequence:(unsigned int)arg1;
- (void).cxx_destruct;
@end

