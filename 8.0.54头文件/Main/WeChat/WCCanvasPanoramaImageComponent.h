@interface WCCanvasPanoramaImageComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    WCPanoramaImageView * _panoramaImageView; // +0x8
    MMProgressViewEx * _loadingView; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initViews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (void)tryStartMonitoring;
- (void)tryStopMonitoring;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)panoramaImageView;
- (void)setPanoramaImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

