@interface YYWKGameWebView : YYWKWebView
{
    BOOL _didSuccessUseSchemeMethod; // +0x8
    BOOL _isFirstLoad; // +0x9
    YYWKGameWebViewConfig * _gameWebViewConfig; // +0x10
    YYWKGameSchemeHandler * _schemeHandler; // +0x18
}
+ (void)forceInitializeWebPlatformStrategies;
+ (id)targetUrlSchemeArray;
+ (BOOL)enableHttpCustomScheme;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 config:(id)arg3;
- (void)configurationWillCreate:(id)arg1;
- (void)addAjaxPostBlobScript:(id)arg1;
- (BOOL)canRegisterUrlScheme:(id)arg1;
- (void)injectLoadRequestTimeIfNeed;
- (void)LoadRequest:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void)notifyWebViewNetworkChange;
- (id)gameWebViewConfig;
- (void)setGameWebViewConfig:(id)arg1;
- (BOOL)didSuccessUseSchemeMethod;
- (void)setDidSuccessUseSchemeMethod:(BOOL)arg1;
- (id)schemeHandler;
- (void)setSchemeHandler:(id)arg1;
- (BOOL)isFirstLoad;
- (void)setIsFirstLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end
