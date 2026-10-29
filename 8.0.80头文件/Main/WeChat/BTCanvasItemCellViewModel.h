@interface BTCanvasItemCellViewModel : BTBaseItemCellViewModel <MMWebCanvasJsEngineMgrExt, MMWebJsCanvasViewPortDelegate>
{
    BOOL _isDisplaying; // +0x28
    BOOL _isFinishCreateClient; // +0x29
    BOOL _hasExposedOnce; // +0x2a
    id <BTCanvasItemCellViewModelDelegate> _delegate; // +0x30
    MMWebCanvasItemData * _itemData; // +0x38
    unsigned long long _initializeTime; // +0x40
    unsigned long long _appearTime; // +0x48
}
- (id)initWithMsgWrap:(id)arg1 viewWidth:(double)arg2 delegate:(id)arg3;
- (void)internalInit;
- (void)setCellView:(id)arg1;
- (void)dealloc;
- (id)itemViewClassName;
- (id)canvasId;
- (id)bizType;
- (id)canvasCellView;
- (double)viewHeight;
- (id)createCanvasViewWithFrame:(CGRect)arg1;
- (void)updateCanvasRenderClientViewDelegate;
- (void)onAppear;
- (void)reportCanvasExpose:(BOOL)arg1;
- (void)reportOnAppear:(BOOL)arg1;
- (void)onDisappear;
- (void)onDestroyCanvasView;
- (void)onScroll;
- (id)accessibilityLabel;
- (double)getCanvasViewWidth:(id)arg1;
- (double)getCanvasViewHeight:(id)arg1;
- (double)getCanvasViewVisibleOffsetY:(id)arg1;
- (double)getCanvasViewVisibleContainerHeight:(id)arg1;
- (BOOL)isCanvasViewAppear:(id)arg1;
- (BOOL)isCanvasViewInBackground:(id)arg1;
- (void)canvasSetHeight:(double)arg1 canvasId:(id)arg2;
- (void)reportSetHeight;
- (void)canvasPopUp:(id)arg1 fromCanvasId:(id)arg2 rect:(CGRect)arg3 hexColor:(id)arg4 mode:(unsigned int)arg5 closeBlock:(id /* block */)arg6;
- (void)canvasClosePopUp:(id)arg1 fromCanvasId:(id)arg2;
- (id)getInfoWithKey:(id)arg1;
- (void)onItemClick:(unsigned int)arg1 fromCanvasId:(id)arg2;
- (long long)getFPS:(id)arg1;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onCanvasViewTouchEvent:(id)arg1 canvasId:(id)arg2;
- (id)getCurrentWebviewViewController;
- (BOOL)isAppear;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemData;
- (void)setItemData:(id)arg1;
- (BOOL)isDisplaying;
- (void)setIsDisplaying:(BOOL)arg1;
- (BOOL)isFinishCreateClient;
- (void)setIsFinishCreateClient:(BOOL)arg1;
- (unsigned long long)initializeTime;
- (void)setInitializeTime:(unsigned long long)arg1;
- (unsigned long long)appearTime;
- (void)setAppearTime:(unsigned long long)arg1;
- (BOOL)hasExposedOnce;
- (void)setHasExposedOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end
