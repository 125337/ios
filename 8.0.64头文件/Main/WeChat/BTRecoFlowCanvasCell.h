@interface BTRecoFlowCanvasCell : BTRecoFlowBaseTableViewCell <MMWebJsCanvasViewPortDelegate>
{
    BOOL _isDisplaying; // +0x8
    BOOL _hasExposedOnce; // +0x9
    BTRecoFlowSeparatorLineView * _bottomSeparatorView; // +0x10
    NSString * _canvasId; // +0x18
    double _navigationBarHeight; // +0x20
    double _statusBarHeight; // +0x28
    MMWebCanvasView * _canvasView; // +0x30
    NSMutableDictionary * _dicPopupView; // +0x38
    double _viewHeight; // +0x40
    MMWebCanvasItemData * _itemData; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)canvasId;
- (double)viewHeight;
- (void)detachLogicAndDestroyCurrentCanvas;
- (void)setSectionData:(id)arg1;
- (void)updateSectionWithHeight:(double)arg1 needReload:(BOOL)arg2;
- (void)initOrUpdateCanvasView;
- (id)accessibilityLabel;
- (void)initBottomSeparatorView;
- (void)onAppear;
- (void)reportCanvasExpose:(BOOL)arg1;
- (void)reportOnAppear:(BOOL)arg1;
- (void)onDisappear;
- (void)layoutSubviews;
- (double)getCanvasViewWidth:(id)arg1;
- (double)getCanvasViewHeight:(id)arg1;
- (double)getCanvasViewVisibleOffsetY:(id)arg1;
- (double)getCanvasViewVisibleContainerHeight:(id)arg1;
- (BOOL)isCanvasViewAppear:(id)arg1;
- (BOOL)isCanvasViewInBackground:(id)arg1;
- (void)canvasSetHeight:(double)arg1 canvasId:(id)arg2;
- (void)reportSetHeight;
- (void)canvasPopUp:(id)arg1 fromCanvasId:(id)arg2 rect:(CGRect)arg3 hexColor:(id)arg4 mode:(unsigned int)arg5 closeBlock:(id /* block */)arg6;
- (void)popUpCanvas:(id)arg1 rect:(CGRect)arg2 hexColor:(id)arg3 mode:(unsigned int)arg4 closeBlock:(id /* block */)arg5;
- (void)canvasClosePopUp:(id)arg1 fromCanvasId:(id)arg2;
- (id)getInfoWithKey:(id)arg1;
- (long long)getFPS:(id)arg1;
- (id)getCurrentWebviewViewController;
- (BOOL)isAppear;
- (id)bottomSeparatorView;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setCanvasId:(id)arg1;
- (double)navigationBarHeight;
- (void)setNavigationBarHeight:(double)arg1;
- (double)statusBarHeight;
- (void)setStatusBarHeight:(double)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)dicPopupView;
- (void)setDicPopupView:(id)arg1;
- (BOOL)isDisplaying;
- (void)setIsDisplaying:(BOOL)arg1;
- (void)setViewHeight:(double)arg1;
- (id)itemData;
- (void)setItemData:(id)arg1;
- (BOOL)hasExposedOnce;
- (void)setHasExposedOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end
