@interface MMCanvasLogicClientContext : MMWebJSContext <MMClientJsApiHandlerDelegate, MMCanvasJsApiHandlerViewDelegate, MMPopupJsApiHandlerDelegate, MMBizCanvasJsApiHandlerDelegate>
{
    MMCanvasLogicClientContextParams * _params; // +0x8
    unsigned long long _preloadTs; // +0x10
    unsigned long long _launchTs; // +0x18
    MMClientJsApiHandler * _clientJsApiHandler; // +0x20
    MMCanvasJsApiHandler * _canvasJsApiHandler; // +0x28
    MMPopupJsApiHandler * _popupJsApiHandler; // +0x30
    MMBizCanvasJsApiHandler * _bizCanvasJsApiHandler; // +0x38
    id <MMCanvasLogicClientContextDelegate> _contextDelegate; // +0x40
}
- (id)initWithJVM:(id)arg1 name:(id)arg2 params:(id)arg3 contextDelegate:(id)arg4 workQueue:(id)arg5;
- (void)internalInit;
- (void)dealloc;
- (void)updateViewDelegate:(id)arg1;
- (void)resetDelegateAndHandler;
- (id)viewDelegate;
- (void)updateDeleteHandler:(id /* block */)arg1;
- (id)canvasId;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)callbackWithId:(id)arg1 eventInfo:(id)arg2;
- (id)getCurrentWebviewViewController;
- (double)getCanvasViewWidth;
- (double)getCanvasViewHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewVisibleContainerHeight;
- (BOOL)isCanvasViewAppear;
- (BOOL)isCanvasViewInBackground;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (void)onSaveCanvasHeight:(double)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (long long)onGetFPS:(id)arg1;
- (void)popUpCanvas:(id)arg1 rect:(CGRect)arg2 hexColor:(id)arg3 mode:(unsigned int)arg4 closeBlock:(id /* block */)arg5;
- (void)closePopupCanvas:(id)arg1;
- (void)callbackPopupCanvasClose:(id)arg1 callbackId:(id)arg2;
- (id)onGetInfoWithKey:(id)arg1;
- (void)onItemClick:(unsigned int)arg1;
- (void)onPreloadImageWithUrl:(id)arg1;
- (void)onDeleteCanvasCard:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)preloadTs;
- (void)setPreloadTs:(unsigned long long)arg1;
- (unsigned long long)launchTs;
- (void)setLaunchTs:(unsigned long long)arg1;
- (id)clientJsApiHandler;
- (void)setClientJsApiHandler:(id)arg1;
- (id)canvasJsApiHandler;
- (void)setCanvasJsApiHandler:(id)arg1;
- (id)popupJsApiHandler;
- (void)setPopupJsApiHandler:(id)arg1;
- (id)bizCanvasJsApiHandler;
- (void)setBizCanvasJsApiHandler:(id)arg1;
- (id)contextDelegate;
- (void)setContextDelegate:(id)arg1;
- (void).cxx_destruct;
@end

