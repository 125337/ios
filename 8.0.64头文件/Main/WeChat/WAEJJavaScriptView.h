@interface WAEJJavaScriptView : UIView <EJDrawableHandler>
{
    CGSize oldSize; // +0x8
    NSString * appFolder; // +0x18
    BOOL hasScreenCanvas; // +0x20
    BOOL isPaused; // +0x21
    BOOL isEnterBackground; // +0x22
    BOOL isRenderTriggersPaused; // +0x23
    BOOL exitOnMenuPress; // +0x24
    BOOL landScape; // +0x25
    WAEJNonRetainingProxy * proxy; // +0x28
    OpaqueJSContext * jsGlobalContext; // +0x30
    OpaqueJSContext * jsSubContext; // +0x38
    WAEJClassLoader * classLoader; // +0x40
    WAEJTimerCollection * timers; // +0x48
    WAEJRenderTriggerCollection * renderTriggers; // +0x50
    WAEJSharedOpenGLContext * openGLContext; // +0x58
    WAEJSharedTextureCache * textureCache; // +0x60
    WAEJFontCache * fontCache; // +0x68
    WAEJCanvasContext * currentRenderingContext; // +0x70
    EAGLContext * glCurrentContext; // +0x78
    __CVOpenGLESTextureCache * cvTextureCache; // +0x80
    CADisplayLink * displayLink; // +0x88
    NSObject<EJWindowEventsDelegate> * windowEventsDelegate; // +0x90
    NSObject<EJTouchDelegate> * touchDelegate; // +0x98
    WAEJCanvasContext<EJPresentable> * screenRenderingContext; // +0xa0
    id <EJNativeLogViewDelegate> nativeLogDelegate; // +0xa8
    NSOperationQueue * backgroundQueue; // +0xb0
    OpaqueJSClass * jsBlockFunctionClass; // +0xb8
    BOOL stoped; // +0xc0
    NSString * appId; // +0xc8
    WAEJFileSystem * fileSystem; // +0xd0
    WAEJBindingGlobalUtils * globalObject; // +0xd8
    OpaqueJSValue * jsUndefined; // +0xe0
    long long fps; // +0xe8
    long long fpsEx; // +0xf0
    long long time; // +0xf8
    long long jank; // +0x100
    long long bigJank; // +0x108
    long long jankPerSecond; // +0x110
    long long bigJankPerSecond; // +0x118
    BOOL isComponent; // +0x120
    NSThread * thread; // +0x128
    BOOL hasSecureCanvas; // +0x130
    WAEJObjectMemoryMgr * objectMemoryMgr; // +0x138
    WAEJBindingCanvasContextWebGLBase * webGLCtx; // +0x140
    WAEJBindingCanvasContext2D * canvasCtx; // +0x148
    BOOL useWebGL; // +0x150
    BOOL useCommandBuffer; // +0x151
    id <EJGestureDelegate> gestureDelegate; // +0x158
    id <WABindingDelegate> bindingDelegate; // +0x160
    long long signalWaitingCount; // +0x168
    BOOL experimental; // +0x170
    BOOL isPreserveDrawingBufferDoClear; // +0x171
    double _lastFrameTime; // +0x178
    double _lastBatchFrameTime; // +0x180
    unsigned long long _framesTimeTotal; // +0x188
    unsigned long long _framesTimePerSecond; // +0x190
    unsigned long long _jankFramesTimeTotalPerSecond; // +0x198
    NSMutableArray * _lastNFramesTimeRecords; // +0x1a0
    unsigned long long _lastNFramesTimeTotal; // +0x1a8
    unsigned long long _jankFramesTimeTotal; // +0x1b0
    unsigned long long _fpsExTime; // +0x1b8
    NSMutableSet * _noRetainingContexts; // +0x1c0
    NSMutableDictionary * _noRetainingID2CanvasMap; // +0x1c8
    unsigned int _canvasId; // +0x1d0
    NSMutableArray * _garbageNativeObjects; // +0x1d8
    NSMutableArray * _bindingNativeObjects; // +0x1e0
    NSMutableArray * _varianceFpsArray; // +0x1e8
    BOOL _bInterrupt; // +0x1f0
    BOOL _resumeRelease; // +0x1f1
    BOOL _delayToRAFEndRelease; // +0x1f2
    BOOL _runWhenAppInactive; // +0x1f3
    BOOL _isUseSetCurrentContextRefactor; // +0x1f4
    BOOL _isPreserveDrawingBufferDoClear; // +0x1f5
    NSMutableDictionary * _noRetainingDrawables; // +0x1f8
    long long _drawCall; // +0x200
    long long _vertexCount; // +0x208
    long long _triangleCount; // +0x210
    BOOL _bFirstRendered; // +0x218
    BOOL _bReportVarianceFps; // +0x219
    long long _currentFpsVarianceBatchCount; // +0x220
    long long _frameNum; // +0x228
    char * _commandString; // +0x230
    unsigned long long _commandLength; // +0x238
    OpaqueJSValue * _getCommandFunc; // +0x240
    OpaqueJSValue * _clearCommandFunc; // +0x248
    OpaqueJSValue * _resetContextFunc; // +0x250
    WAEJObjClass * _objClass; // +0x258
    NSMutableDictionary * _customScreenContext; // +0x260
    __CVOpenGLESTextureCache * _cvTextureCache; // +0x268
    BOOL stopped; // +0x270
    BOOL _isEnableSkia2D; // +0x271
    BOOL _isRollbackPresentBugfix; // +0x272
    BOOL _isEnableRetryLoadImageWhenEnterForeground; // +0x273
    BOOL _customStyleImpl; // +0x274
    BOOL _isMagicBrushEnv; // +0x275
    BOOL _isGameEnv; // +0x276
    int _maxCanvasSize; // +0x278
    double startTime; // +0x280
    long long _viewContentMode; // +0x288
    unsigned long long _mainCanvasContextType; // +0x290
    id <EJScreenCanvasDelegate> _screenCanvasDelegate; // +0x298
    id <EJExternalTextureDelegate> _extTextureDelegate; // +0x2a0
    ExternalTextureHandler * _extTextureHandler; // +0x2a8
    void * _fontHandler; // +0x2b0
    CGSize _size; // +0x2b8
}
- (id)initWithFrame:(CGRect)arg1 context:(OpaqueJSContext *)arg2 name:(const char *)arg3 config:(id)arg4;
- (id)initWithFrameOnlyMainThreadPart:(CGRect)arg1;
- (void)setupJSContextOnSubThread:(OpaqueJSContext *)arg1 name:(const char *)arg2 config:(id)arg3;
- (void)attachJSContext:(OpaqueJSContext *)arg1;
- (void)setupWithJSContext:(OpaqueJSContext *)arg1 name:(const char *)arg2 isComponent:(BOOL)arg3;
- (void)dealloc;
- (void)releaseContext:(BOOL)arg1;
- (void)removeObserverForKeyPaths:(id)arg1;
- (void)observeKeyPaths:(id)arg1 selector:(SEL)arg2;
- (void)layoutSubviews;
- (void)onLayoutSubviews:(id)arg1;
- (void)loadScriptAtPath:(id)arg1;
- (OpaqueJSValue *)evaluateScript:(id)arg1;
- (OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2 ignoreException:(BOOL)arg3;
- (OpaqueJSValue *)invokeCallback:(OpaqueJSValue *)arg1 isMain:(BOOL)arg2 thisObject:(OpaqueJSValue *)arg3 argc:(unsigned long long)arg4 argv:(const OpaqueJSValue * *)arg5;
- (void)logException:(OpaqueJSValue *)arg1 ctx:(OpaqueJSContext *)arg2;
- (OpaqueJSValue *)jsValueForPath:(id)arg1;
- (OpaqueJSValue *)createFunctionWithBlock:(id /* block */)arg1;
- (void)run:(id)arg1;
- (void)presentRenderingContextAndRecord:(id)arg1 drawCall:(long long *)arg2 vertexCount:(long long *)arg3 triangleCount:(long long *)arg4;
- (void)notifyFrameStart:(double)arg1;
- (void)notifyFrameEnd:(double)arg1;
- (void)present;
- (OpaqueJSValue *)recordFrame:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)listenEnterBackground:(BOOL)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)enterBackground;
- (void)enterForeground;
- (void)pause;
- (void)onPause;
- (void)resume;
- (void)onResume;
- (void)suspend;
- (void)onSuspend;
- (void)clearCaches;
- (void)clearCachesImpl;
- (void)stop:(BOOL)arg1;
- (void)stopImpl:(id)arg1;
- (void)setInterrupt:(BOOL)arg1;
- (BOOL)isEnterBackground;
- (BOOL)isPreserveDrawingBufferDoClear;
- (CGSize)size;
- (void)setCurrentRenderingContext:(id)arg1;
- (void)_setCurrentRenderingContextRefactor:(id)arg1;
- (void)onTouchesBegan:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesEnded:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesCancelled:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesMoved:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (OpaqueJSValue *)createTimer:(OpaqueJSContext *)arg1 isMain:(BOOL)arg2 argc:(unsigned long long)arg3 argv:(const OpaqueJSValue * *)arg4 repeat:(BOOL)arg5;
- (void)triggerTimerImmediate:(id)arg1;
- (void)skipCurrentTaskLoop;
- (OpaqueJSValue *)deleteTimer:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)createRenderTrigger:(OpaqueJSContext *)arg1 isMain:(BOOL)arg2 argc:(unsigned long long)arg3 argv:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)deleteRenderTrigger:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)setPreferredFramesPerSecond:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)sendErrorEvent:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)addContext:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)markContextStopRender;
- (id)getCanvasForID:(unsigned int)arg1;
- (id)getCanvasForElementID:(id)arg1;
- (unsigned int)setCanvas:(id)arg1;
- (void)removeCanvasForID:(unsigned int)arg1;
- (BOOL)enableScreenCanvasViewDelegate;
- (void)notifyScreenCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)notifyScreenCanvasViewDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)notifyScreenCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(CGRect)arg3;
- (void)markBindingObjectStopRender;
- (void)sendGarbageCollectEvent;
- (void)addNativeGarbageObject:(id)arg1;
- (void)addNativeBindingObject:(id)arg1;
- (long long)getVarianceFps;
- (void)setReportVarianceFps:(BOOL)arg1;
- (struct)getPerformance;
- (void)resetJankInfo;
- (void)setBatchRenderingContext:(id)arg1;
- (void)batchRender:(id)arg1;
- (id)getObjClass;
- (void)addDrawableObject:(unsigned int)arg1 drawable:(id)arg2;
- (id)getDrawableObject:(unsigned int)arg1;
- (void)removeDrawableObject:(unsigned int)arg1;
- (void)addCustomScreenContext:(id)arg1 key:(unsigned int)arg2;
- (void)removeCustomScreenContext:(unsigned int)arg1;
- (void)destroyCanvasForID:(unsigned int)arg1;
- (void *)sg_get_context:(OpaqueJSValue *)arg1;
- (void)sg_retain_context:(void *)arg1;
- (void)sg_release_context:(void *)arg1;
- (void)sg_make_current:(void *)arg1;
- (void)sg_swap:(void *)arg1;
- (void *)sg_get_state:(void *)arg1;
- (unsigned int)sg_get_texture:(OpaqueJSValue *)arg1;
- (__CVOpenGLESTextureCache *)cvTextureCache;
- (void)onSetCaptureDelegate:(id)arg1;
- (BOOL)setCaptureDelegate:(unsigned int)arg1 mark:(unsigned int)arg2 options:(id)arg3 delegate:(id)arg4;
- (void)handleGLViewStyleChanged:(id)arg1;
- (void)onGLViewStyleChanged:(unsigned int)arg1 withStyle:(CGRect)arg2;
- (BOOL)isRunInSubThread;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (void)setIsEnterBackground:(BOOL)arg1;
- (BOOL)hasScreenCanvas;
- (void)setHasScreenCanvas:(BOOL)arg1;
- (OpaqueJSContext *)jsGlobalContext;
- (OpaqueJSContext *)jsSubContext;
- (BOOL)exitOnMenuPress;
- (void)setExitOnMenuPress:(BOOL)arg1;
- (double)startTime;
- (BOOL)landScape;
- (void)setLandScape:(BOOL)arg1;
- (long long)signalWaitingCount;
- (void)setSignalWaitingCount:(long long)arg1;
- (id)currentRenderingContext;
- (id)openGLContext;
- (id)windowEventsDelegate;
- (void)setWindowEventsDelegate:(id)arg1;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
- (id)screenRenderingContext;
- (void)setScreenRenderingContext:(id)arg1;
- (id)backgroundQueue;
- (void)setBackgroundQueue:(id)arg1;
- (id)classLoader;
- (void)setClassLoader:(id)arg1;
- (id)fileSystem;
- (void)setFileSystem:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)stopped;
- (void)setStopped:(BOOL)arg1;
- (id)fontCache;
- (id)textureCache;
- (id)nativeLogDelegate;
- (void)setNativeLogDelegate:(id)arg1;
- (id)globalObject;
- (void)setGlobalObject:(id)arg1;
- (BOOL)isComponent;
- (void)setIsComponent:(BOOL)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)objectMemoryMgr;
- (void)setObjectMemoryMgr:(id)arg1;
- (BOOL)hasSecureCanvas;
- (void)setHasSecureCanvas:(BOOL)arg1;
- (id)webGLCtx;
- (void)setWebGLCtx:(id)arg1;
- (id)canvasCtx;
- (void)setCanvasCtx:(id)arg1;
- (BOOL)useWebGL;
- (void)setUseWebGL:(BOOL)arg1;
- (BOOL)useCommandBuffer;
- (void)setUseCommandBuffer:(BOOL)arg1;
- (id)gestureDelegate;
- (void)setGestureDelegate:(id)arg1;
- (id)bindingDelegate;
- (void)setBindingDelegate:(id)arg1;
- (BOOL)experimental;
- (void)setExperimental:(BOOL)arg1;
- (void)setIsPreserveDrawingBufferDoClear:(BOOL)arg1;
- (BOOL)isEnableSkia2D;
- (BOOL)isRollbackPresentBugfix;
- (BOOL)isEnableRetryLoadImageWhenEnterForeground;
- (long long)viewContentMode;
- (void)setViewContentMode:(long long)arg1;
- (void)setSize:(CGSize)arg1;
- (unsigned long long)mainCanvasContextType;
- (void)setMainCanvasContextType:(unsigned long long)arg1;
- (BOOL)customStyleImpl;
- (void)setCustomStyleImpl:(BOOL)arg1;
- (id)screenCanvasDelegate;
- (void)setScreenCanvasDelegate:(id)arg1;
- (id)extTextureDelegate;
- (void)setExtTextureDelegate:(id)arg1;
- (id)extTextureHandler;
- (void)setExtTextureHandler:(id)arg1;
- (void *)fontHandler;
- (BOOL)isMagicBrushEnv;
- (void)setIsMagicBrushEnv:(BOOL)arg1;
- (BOOL)isGameEnv;
- (void)setIsGameEnv:(BOOL)arg1;
- (int)maxCanvasSize;
- (void)setMaxCanvasSize:(int)arg1;
- (void).cxx_destruct;
@end
