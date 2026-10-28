@interface MMWebCanvasPopupView : MMUIWindow <MMUIViewControllerExt, MMWebJsCanvasViewPortDelegate>
{
    MMWebCanvasView * _canvasView; // +0x8
    MMWebCanvasPopupParamas * _params; // +0x10
    UIView * _backgroundView; // +0x18
}
- (void)dealloc;
- (id)initWithParams:(id)arg1;
- (void)updateWithParams:(id)arg1;
- (void)internalInit;
- (void)setupRootViewController;
- (void)initBgView;
- (void)updateBgView;
- (void)initCanvasView;
- (void)updateCanvasView;
- (id)canvasId;
- (void)show;
- (void)__repaintCanvas;
- (void)close;
- (void)onTapBackground;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (double)getCanvasViewWidth:(id)arg1;
- (double)getCanvasViewHeight:(id)arg1;
- (double)getCanvasViewVisibleOffsetY:(id)arg1;
- (double)getCanvasViewVisibleContainerHeight:(id)arg1;
- (BOOL)isCanvasViewAppear:(id)arg1;
- (BOOL)isCanvasViewInBackground:(id)arg1;
- (long long)getFPS:(id)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
