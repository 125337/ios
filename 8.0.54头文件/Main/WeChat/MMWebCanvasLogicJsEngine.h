@interface MMWebCanvasLogicJsEngine : MMWebCanvasBaseJsEngine <MMCanvasLogicClientContextDelegate, MMWebJSContextWasmDelegate>
{
    BOOL _finishedSetup; // +0x8
    BOOL _hasStopped; // +0x9
    id <MMWebCanvasLogicJsEngineDelegate> _delegate; // +0x10
    NSDictionary * _configInfo; // +0x18
    NSObject<OS_dispatch_queue> * _workQueue; // +0x20
    NSObject<OS_dispatch_queue> * _preloadQueue; // +0x28
    NSMutableArray * _arrEngineContext; // +0x30
    NSMutableDictionary * _dicClientJSContexts; // +0x38
    NSMutableDictionary * _eventQueue2Client; // +0x40
    NSMutableSet * _setClientLaunchingQueue; // +0x48
    NSMutableDictionary * _dicClientLaunchUpdateParams; // +0x50
    WACanvasFileHelper * _fileHelper; // +0x58
}
- (id)initWithBasePkgInfo:(id)arg1 bizPkgInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)internalInit;
- (void)setup:(id /* block */)arg1;
- (BOOL)hasSetup;
- (void)stopEngine;
- (void)stopAllJsContextTimers;
- (void)delayReleaseJsEngine;
- (void)initMainContext;
- (void)initEngineContext;
- (id)canvasClientContextWithId:(id)arg1;
- (void)addClientContextWithParams:(id)arg1;
- (void)updateClientContextViewDelegate:(id)arg1 canvasId:(id)arg2 deleteHandler:(id /* block */)arg3;
- (void)resetClientContextViewDelegateAndHandler:(id)arg1 fromViewDelegate:(id)arg2;
- (void)attach:(id)arg1;
- (void)detach:(id)arg1;
- (void)reflow:(id)arg1;
- (void)reflowAll;
- (void)pause;
- (void)pause:(id)arg1;
- (void)resume;
- (void)resume:(id)arg1;
- (void)stop;
- (void)stop:(id)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)onScreenShot;
- (void)onScroll:(id)arg1;
- (void)enterPage;
- (void)exitPage;
- (void)setupClient:(id)arg1 metaInfo:(id)arg2 bizType:(id)arg3;
- (void)addClientEventToQueue:(id)arg1 canvasId:(id)arg2;
- (void)addClientEventToQueue:(id)arg1;
- (void)checkAndDispatchEventToClientInEventQueue:(id)arg1;
- (void)checkAndDispatchEventToClientInEventQueue;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (void)dispatchEventToClient:(id)arg1 event:(id)arg2;
- (void)dispatchEventToClient:(id)arg1 event:(id)arg2 eventInfo:(id)arg3;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (void)onTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(id)arg2;
- (void)onCallbackWithId:(id)arg1 params:(id)arg2;
- (void)onCallbackWithId:(id)arg1 eventInfo:(id)arg2;
- (void)onCallbackPopUpCanvasClose:(id)arg1 callbackId:(id)arg2;
- (void)onPreloadImageWithUrl:(id)arg1 canvasId:(id)arg2;
- (void)onDeleteCanvasCardByCardId:(id)arg1 fromCanvasId:(id)arg2;
- (id)getCurrentWebviewViewController;
- (id)getFileData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)configInfo;
- (void)setConfigInfo:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)preloadQueue;
- (void)setPreloadQueue:(id)arg1;
- (id)arrEngineContext;
- (void)setArrEngineContext:(id)arg1;
- (id)dicClientJSContexts;
- (void)setDicClientJSContexts:(id)arg1;
- (id)eventQueue2Client;
- (void)setEventQueue2Client:(id)arg1;
- (id)setClientLaunchingQueue;
- (void)setSetClientLaunchingQueue:(id)arg1;
- (id)dicClientLaunchUpdateParams;
- (void)setDicClientLaunchUpdateParams:(id)arg1;
- (id)fileHelper;
- (void)setFileHelper:(id)arg1;
- (BOOL)finishedSetup;
- (void)setFinishedSetup:(BOOL)arg1;
- (BOOL)hasStopped;
- (void)setHasStopped:(BOOL)arg1;
- (void).cxx_destruct;
@end

