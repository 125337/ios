@interface WSWebViewPlugin_loadingPage : WSWebViewPluginBase
{
    UIScrollView * _loadingContainerView; // +0x8
    UIImageView * _headView; // +0x10
    WSDotLoadingView * _WSDotLoadingView; // +0x18
}
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (BOOL)isLoading;
- (void)initAnimatingView;
- (void)startLoadingAnimation;
- (void)handleLoadingTimeout;
- (void)stopLoadingAnimation;
- (void)removeAllView;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)WSDotLoadingView;
- (void)setWSDotLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

