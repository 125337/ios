@interface MMCanvasRenderClientContext : MMWebJSContext <MMCanvasJsApiHandlerViewDelegate>
{
    MMCanvasRenderClientContextParams * _params; // +0x8
    NSString * _canvasId; // +0x10
    id <MMCanvasRenderClientContextDelegate> _delegate; // +0x18
    MMCanvasJsApiHandler * _canvasJsApiHandler; // +0x20
}
- (id)initWithJVM:(id)arg1 name:(id)arg2 params:(id)arg3;
- (void)internalInit;
- (void)dealloc;
- (id)contextDelegate;
- (id)viewDelegate;
- (id)canvasId;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (double)getCanvasViewWidth;
- (double)getCanvasViewHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewVisibleContainerHeight;
- (BOOL)isCanvasViewAppear;
- (BOOL)isCanvasViewInBackground;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (void)onSaveCanvasHeight:(double)arg1;
- (id)getJsCanvas;
- (long long)onGetFPS:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setCanvasId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)canvasJsApiHandler;
- (void)setCanvasJsApiHandler:(id)arg1;
- (void).cxx_destruct;
@end

