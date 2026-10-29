@interface MMWebCanvasJsEngineMgr : MMUserService <MMWebCanvasLogicJsEngineDelegate, MMWebCanvasRenderJsEngineDelegate, WCMainWindowExt, MMServiceProtocol>
{
    BOOL _isSettingUpLogicEngine; // +0x8
    BOOL _reflowWhenEnterForeground; // +0x9
    MMWebCanvasLogicJsEngine * _logicEngine; // +0x10
    MMWebCanvasRenderJsEngine * _renderEngine; // +0x18
    MMWebCanvasPkgInfo * _canvasPkgInfo; // +0x20
    MMUIViewController<WXCustomWebViewControllerProtocol> * _contextViewController; // +0x28
    NSMutableDictionary * _logicClientAddQueueMap; // +0x30
    WCEliminatedSlotMMKV * _layoutDataSlotKv; // +0x38
}
- (void)onServiceInit;
- (void)observeKeyPaths:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (void)setupEngine;
- (void)setupLogicJsEngine:(id /* block */)arg1;
- (void)setupRenderJsEngine;
- (void)releaseAllEngine;
- (BOOL)isClientContextActive:(id)arg1;
- (id)getClientContextPerfInfo:(id)arg1;
- (BOOL)isClientContextInLaunchWaitingQueue:(id)arg1;
- (void)addOrUpdateClientContext:(id)arg1 viewDelegate:(id)arg2 deleteHandler:(id /* block */)arg3;
- (void)addOrUpdateClientContext:(id)arg1 viewDelegate:(id)arg2 deleteHandler:(id /* block */)arg3 fromPreload:(BOOL)arg4;
- (void)addOrUpdateClientContext:(id)arg1 viewDelegate:(id)arg2 prepareCompletion:(id /* block */)arg3 deleteHandler:(id /* block */)arg4 fromPreload:(BOOL)arg5;
- (void)resetClientContextViewDelegateAndCallback:(id)arg1 fromViewDelegate:(id)arg2;
- (void)checkGetLogicClientWaitingQueue;
- (id)createCanvasViewWithItem:(id)arg1 frame:(CGRect)arg2 viewDelegate:(id)arg3;
- (void)updateCanvasRenderClientWithCanvasId:(id)arg1 withViewDelegate:(id)arg2;
- (BOOL)isMediaPlaying;
- (id)getContextViewController;
- (void)setContextViewController:(id)arg1;
- (void)resetContextViewController:(id)arg1;
- (double)getCanvasLayoutHeightWithId:(id)arg1;
- (id)getLayoutDataForCanvasId:(id)arg1;
- (void)saveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (void)saveCanvasHeight:(double)arg1 forCanvasId:(id)arg2;
- (void)clearAllLayoutData;
- (void)attatch:(id)arg1;
- (void)detach:(id)arg1;
- (void)pause;
- (void)pause:(id)arg1;
- (void)resume;
- (void)resume:(id)arg1;
- (void)stop;
- (void)stop:(id)arg1;
- (void)repaint:(id)arg1;
- (void)destory:(id)arg1 viewDelegate:(id)arg2;
- (void)enterHotZone:(id)arg1;
- (void)exitHotZone:(id)arg1;
- (void)onScroll:(id)arg1;
- (void)reflow:(id)arg1;
- (void)reflowAllClient;
- (void)enterPage;
- (void)exitPage;
- (void)enterBackground;
- (void)enterForeground;
- (id)basePkgInfo;
- (id)bizPkgInfo;
- (id)canvasPkgInfo;
- (void)didTakeScreenshot;
- (void)onLogicJsEngineTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)onRenderJsEngineTransferMessage:(id)arg1 targetOrigin:(id)arg2;
- (void)onTouchEvent:(id)arg1 withEvent:(id)arg2 canvasView:(id)arg3;
- (void)onFirstFrameRendered:(id)arg1;
- (void)mm_onColorAppearanceDidChange;
- (id)logicEngine;
- (void)setLogicEngine:(id)arg1;
- (id)renderEngine;
- (void)setRenderEngine:(id)arg1;
- (void)setCanvasPkgInfo:(id)arg1;
- (id)contextViewController;
- (id)logicClientAddQueueMap;
- (void)setLogicClientAddQueueMap:(id)arg1;
- (id)layoutDataSlotKv;
- (void)setLayoutDataSlotKv:(id)arg1;
- (BOOL)isSettingUpLogicEngine;
- (void)setIsSettingUpLogicEngine:(BOOL)arg1;
- (BOOL)reflowWhenEnterForeground;
- (void)setReflowWhenEnterForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end

