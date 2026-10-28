@interface BTCanvasItemCellView : BTBaseItemCellView
{
    NSString * _canvasId; // +0x8
    double _navigationBarHeight; // +0x10
    double _statusBarHeight; // +0x18
    MMWebCanvasView * _canvasView; // +0x20
    NSMutableDictionary * _dicPopupView; // +0x28
}
- (id)initWithViewModel:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setViewModel:(id)arg1;
- (void)initCanvasView;
- (void)updateCanvasView;
- (double)canvasViewHeight;
- (void)popUpCanvas:(id)arg1 rect:(CGRect)arg2 hexColor:(id)arg3 mode:(unsigned int)arg4 closeBlock:(id /* block */)arg5;
- (void)closePopupCanvas:(id)arg1;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewVisibleContainerHeight;
- (long long)getFPS;
- (BOOL)isCanvasViewInBackground;
- (void)onCellDidScroll;
- (id)accessibilityLabel;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (double)navigationBarHeight;
- (void)setNavigationBarHeight:(double)arg1;
- (double)statusBarHeight;
- (void)setStatusBarHeight:(double)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)dicPopupView;
- (void)setDicPopupView:(id)arg1;
- (void).cxx_destruct;
@end
