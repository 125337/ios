@interface MMWebCanvasRenderJsEngine : MMWebCanvasBaseJsEngine <MMCanvasRenderClientContextDelegate, MMWebCanvasViewDataDelegate, MMWebCanvasViewEventDelegate>
{
    id <MMWebCanvasRenderJsEngineDelegate> _delegate; // +0x8
    NSDictionary * _configInfo; // +0x10
    NSMutableDictionary * _dicClientJSContexts; // +0x18
    NSMutableDictionary * _eventQueue2Client; // +0x20
    MMWebJsMediaServiceHandler * _videoDecoder; // +0x28
    WACanvasFileHelper * _fileHelper; // +0x30
}
+ (id)pathOfCacheDir;
+ (id)fileNameForResWithUrl:(id)arg1;
- (id)initWithBasePkgInfo:(id)arg1 bizPkgInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)internalInit;
- (void)setup;
- (void)stopEngine;
- (void)invalidAllTimers;
- (void)initMainContext;
- (BOOL)isClientContextExist:(id)arg1;
- (id)createCanvasViewWithFrame:(CGRect)arg1 itemData:(id)arg2 viewDelegate:(id)arg3;
- (void)updateClientWithCanvasId:(id)arg1 withViewDelegate:(id)arg2;
- (id)arrRenderClientCanvasId;
- (BOOL)isMediaPlaying;
- (void)attach:(id)arg1;
- (void)detach:(id)arg1;
- (void)repaint:(id)arg1;
- (void)pause;
- (void)pause:(id)arg1;
- (void)resume;
- (void)resume:(id)arg1;
- (void)destory:(id)arg1 viewDelegate:(id)arg2;
- (void)internalDestroy:(id)arg1;
- (void)stop;
- (void)stop:(id)arg1;
- (void)enterHotZone:(id)arg1;
- (void)exitHotZone:(id)arg1;
- (void)onScreenShot;
- (id)getLayoutDataForCanvasId:(id)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(id)arg2;
- (void)onCallbackWithId:(id)arg1 params:(id)arg2;
- (BOOL)isFileExist:(id)arg1 canvasView:(id)arg2;
- (id)getFileData:(id)arg1 canvasView:(id)arg2;
- (id)getFileDataWithUrl:(id)arg1 canvasView:(id)arg2;
- (void)cancelAllFileTaskFromCanvasView:(id)arg1;
- (id)trimmingWhitespaceWithStr:(id)arg1;
- (void)onTouchEvent:(id)arg1 withEvent:(id)arg2 canvasView:(id)arg3;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onCanvasViewEnterBackground:(id)arg1;
- (void)onCanvasViewEnterForeground:(id)arg1;
- (void)onTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)dispatchEventToAllClient:(id)arg1;
- (void)dispatchEventToClient:(id)arg1 event:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)configInfo;
- (void)setConfigInfo:(id)arg1;
- (id)dicClientJSContexts;
- (void)setDicClientJSContexts:(id)arg1;
- (id)eventQueue2Client;
- (void)setEventQueue2Client:(id)arg1;
- (id)videoDecoder;
- (void)setVideoDecoder:(id)arg1;
- (id)fileHelper;
- (void)setFileHelper:(id)arg1;
- (void).cxx_destruct;
@end

