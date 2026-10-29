@interface WAOpenGLView : UIView <EJNativeLogViewDelegate, EJFileSystemDelegate, EJScreenCanvasDelegate, EJExternalTextureDelegate>
{
    id <WAOpenGLViewDelegate> delegate; // +0x8
    WAEJJavaScriptView * _glView; // +0x10
    double _startTime; // +0x18
    id <WAOpenGLScreenCanvasDelegate> _screenCanvasDelegate; // +0x20
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 context:(OpaqueJSContext *)arg2 appId:(id)arg3 name:(const char *)arg4 config:(id)arg5;
- (id)initWithFrameOnlyMainThreadPart:(CGRect)arg1;
- (void)commonInit;
- (void)setupJSContextOnSubThread:(OpaqueJSContext *)arg1 appId:(id)arg2 name:(const char *)arg3 config:(id)arg4;
- (void)initSubContext:(OpaqueJSContext *)arg1;
- (void)layoutSubviews;
- (void)loadScriptAtPath:(id)arg1;
- (void)clearCaches;
- (OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2 ignoreException:(BOOL)arg3;
- (void)pause;
- (void)resume;
- (void)suspend;
- (void)stop:(BOOL)arg1;
- (void)setInterrupt:(BOOL)arg1;
- (void)setReportVarianceFps:(BOOL)arg1;
- (BOOL)isEnterBackground;
- (BOOL)isFileExist:(id)arg1;
- (id)getFileData:(id)arg1;
- (id)createImageWithSvgData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
- (id)getFileDataWithUrl:(id)arg1;
- (void)cancelAllFileTask;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)systemLog:(id)arg1;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)logGLError:(int)arg1 name:(id)arg2;
- (void)onFrameTimeout:(int)arg1;
- (void)onFrameBegin;
- (void)onFrameEnd;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)onEJViewEnterBackground;
- (void)onEJViewEnterForeground;
- (unsigned int)getRunDuration;
- (long long)getVarianceFps;
- (unsigned long long)getMainCanvasContextType;
- (struct)getPerformance;
- (void)resetJankInfo;
- (void)enableDebug:(BOOL)arg1;
- (void)setLandScape:(BOOL)arg1;
- (void)setComponent:(BOOL)arg1;
- (__CVBuffer *)getPixelBuffer:(unsigned int)arg1;
- (void)getImageFromOffscreenCanvas:(id)arg1;
- (id)getCanvasImage:(unsigned int)arg1;
- (id)getCanvasImageWithScaleFactor:(unsigned int)arg1 Factor:(float)arg2;
- (void)getCanvasImageAsync:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)setUseCommandBuffer:(BOOL)arg1;
- (void)present;
- (void)setGestureDelegate:(id)arg1;
- (void)setBindingDelegate:(id)arg1;
- (id)getObjClass;
- (BOOL)setCaptureDelegate:(unsigned int)arg1 mark:(unsigned int)arg2 options:(id)arg3 delegate:(id)arg4;
- (void)onGLViewStyleChanged:(unsigned int)arg1 withStyle:(CGRect)arg2;
- (WasmAdaptorImpl *)createWasmWebGLAdaptor;
- (void *)sg_get_context:(OpaqueJSValue *)arg1;
- (void)sg_retain_context:(void *)arg1;
- (void)sg_release_context:(void *)arg1;
- (void)sg_make_current:(void *)arg1;
- (void)sg_swap:(void *)arg1;
- (unsigned int)sg_get_texture:(OpaqueJSValue *)arg1;
- (void *)sg_get_state:(void *)arg1;
- (void)setScreenCanvasDelegate:(id)arg1;
- (id)onCreateScreenCanvas:(unsigned int)arg1 viewId:(int)arg2;
- (void)onScreenCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onScreenCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onScreenCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(CGRect)arg3;
- (__CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)screenCanvasDelegate;
- (void).cxx_destruct;
@end

