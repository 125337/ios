@interface WCPIPAttachWidgetObj : WCPIPRenderObj
{
    UIView * _rootView; // +0x8
    CIImage * _widgetCIImage; // +0x10
    double _widthHeightPercent; // +0x18
    id /* block */ _updateCallback; // +0x20
}
- (id)initWithRootView:(id)arg1;
- (void)refresh;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (BOOL)checkEnableRefresh;
- (CGRect)transferNormalizedFrameFromCGModeToCIMode:(CGRect)arg1;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (id)widgetCIImage;
- (void)setWidgetCIImage:(id)arg1;
- (double)widthHeightPercent;
- (void)setWidthHeightPercent:(double)arg1;
- (id /* block */)updateCallback;
- (void)setUpdateCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
