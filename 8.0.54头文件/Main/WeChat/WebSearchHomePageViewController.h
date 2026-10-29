@interface WebSearchHomePageViewController : MMUIViewController <_TtP4Hero26HeroViewControllerDelegate_, WebSearchHomePage, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, WSWebViewPluginableProtocol>
{
    BOOL _isPreload; // +0x68
    WSWebViewPluginScheduler * _pluginScheduler; // +0x70
    unsigned long long _VCType; // +0x78
    NSString * _liteAppExtInfo; // +0x80
    UIButton * _contentSearchHitBtn; // +0x88
    UIButton * _contentVoiceInputButton; // +0x90
    UIStackView * _logoContainerView; // +0x98
    UIView * _searchBoxContainer; // +0xa0
    MMUILabel * _titleLabel; // +0xa8
    UIImageView * _titleLogoView; // +0xb0
    WebSearchHomePagePresenter * _presenter; // +0xb8
    WSLocalTemplateController * _webviewController; // +0xc0
    WCWebSearchInputProvider * _inputProvider; // +0xc8
    NSString * _sessionId; // +0xd0
}
+ (void)preHeatSearchHomePage;
+ (id)getPreloadInstance;
+ (void)removeCache;
- (void)tryRecycleSelf;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)initData;
- (void)initView;
- (void)initLogoView;
- (void)initWebview;
- (void)onNavigationBackItemClick:(id)arg1;
- (id)inputProvider;
- (id)presenter;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (BOOL)hasFirstWebviewJsbridgeReady;
- (void)heroWillStartAnimatingToViewController:(id)arg1;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (void)heroDidEndAnimatingToViewController:(id)arg1;
- (double)getSearchBoxAnimeOffsetY;
- (void)setTransitionAnime;
- (id)getSessionId;
- (void)reloadWebview;
- (void)registerYReportSdk;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (unsigned long long)VCType;
- (void)setVCType:(unsigned long long)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (id)liteAppExtInfo;
- (void)setLiteAppExtInfo:(id)arg1;
- (id)contentSearchHitBtn;
- (void)setContentSearchHitBtn:(id)arg1;
- (id)contentVoiceInputButton;
- (void)setContentVoiceInputButton:(id)arg1;
- (id)logoContainerView;
- (void)setLogoContainerView:(id)arg1;
- (id)searchBoxContainer;
- (void)setSearchBoxContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleLogoView;
- (void)setTitleLogoView:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (void)setInputProvider:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

