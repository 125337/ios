@interface WCCanvasSidebarComponent : WCCanvasComponent
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)enumerateButtonViewWithCallback:(id /* block */)arg1;
- (id)genSeparatorView;
- (void)initViews;
@end
