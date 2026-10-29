@interface LiteAppViewController : LiteAppBaseViewController <LVUICallbackControllerDelegate, UIGestureRecognizerDelegate>
{
    shared_ptr<LVUICallback> lvUICallback; // +0x8
    int lastFlags; // +0x18
    basic_string<char, std::char_traits<char>, std::allocator<char>> _sourceType; // +0x20
    vector<std::string, std::allocator<std::string>> _enableActions; // +0x38
    vector<std::string, std::allocator<std::string>> _enableViews; // +0x50
    unsigned long long _interfaceOrientationMask; // +0x68
    long long _interfaceOrientation; // +0x70
    BOOL isHiddenHomeIndicator; // +0x78
    CGSize _size; // +0x80
    BOOL _openWithNewTab; // +0x90
    BOOL _isHalfScreen; // +0x91
    BOOL _isPopGestureEnable; // +0x92
    BOOL _isReportStartTimeLine; // +0x93
    BOOL _delayShowNavBar; // +0x94
    BOOL _pageOrientationDefaultValueAuto; // +0x95
    BOOL _isTransparent; // +0x96
    BOOL _preGestureRecognizerEnabled; // +0x97
    BOOL _statusBarHidden; // +0x98
    BOOL _isOpenApp; // +0x99
    BOOL _isPresented; // +0x9a
    BOOL _isNeedShowNavBar; // +0x9b
    BOOL _hasCheckCoreText; // +0x9c
    NSString * _appId; // +0xa0
    NSString * _path; // +0xa8
    NSString * _signatureKey; // +0xb0
    NSString * _page; // +0xb8
    NSString * _query; // +0xc0
    LiteAppReferrerInfo * _referrerInfo; // +0xc8
    LiteAppPageConfig * _pageConfig; // +0xd0
    NSMutableDictionary * _hostInfoExtends; // +0xd8
    double _height; // +0xe0
    LiteAppWindow * _window; // +0xe8
    UIViewController<LiteAppParentViewControllerDelegate> * _liteAppParentViewController; // +0xf0
    UIColor * _preferBackgroundColor; // +0xf8
    UIImage * _preferBackgroundImage; // +0x100
    WxaLiteAppStartReport * _report; // +0x108
    LiteAppStore * _nativeStore; // +0x110
    MMLiteAppReporter * _reporter; // +0x118
    id <UIGestureRecognizerDelegate> _preGestureRecognizerDelegate; // +0x120
    LiteAppViewConsumer * _consumer; // +0x128
    id /* block */ _anrCheckBlock; // +0x130
    id /* block */ _loadingCheckBlock; // +0x138
    CGSize _delayUpdateSize; // +0x140
    PageInfo _currentPageInfo; // +0x150
}
+ (BOOL)isiPhone;
- (id)init;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6 startReport:(id)arg7 reporter:(id)arg8;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6 isHalfScreen:(BOOL)arg7 isTransparent:(BOOL)arg8 startReport:(id)arg9 reporter:(id)arg10;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(BOOL)arg7 isHalfScreen:(BOOL)arg8 isTransparent:(BOOL)arg9 startReport:(id)arg10 reporter:(id)arg11;
- (void)reopen:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)preDealloc;
- (void)setIsTransparent:(BOOL)arg1;
- (unsigned int)getLiteAppUuid;
- (id)getOrCreateNativeStore;
- (id)getStore;
- (void)setStore:(id)arg1;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (void)dataReportTapWhenError;
- (void)tapViewWhenError:(id)arg1;
- (void)dataReportStartLiteAppTimeLine;
- (void)_navigateBackAnimated:(BOOL)arg1;
- (void)_openWebviewByParam:(id)arg1;
- (void)bindLVCPP;
- (void)initParams:(const void *)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setPageOrientation:(int)arg1 landScapeOrientation:(unsigned long long)arg2;
- (void)setFlags:(int)arg1;
- (BOOL)prefersStatusBarHidden;
- (double)statusBarHeight;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleVideoPlayerFullScreen:(id)arg1;
- (id)getViewController;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)showPage:(const void *)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)onShowPageTimeStamp:(unsigned long long)arg1;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (unsigned long long)getAppPtr;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)rightGestureEvent:(id)arg1 popPage:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setCanOverScroll:(BOOL)arg1;
- (void)updateSize:(CGSize)arg1;
- (void)checkCoreText;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (void)loadConfig;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)pageConfig;
- (void)setPageConfig:(id)arg1;
- (BOOL)openWithNewTab;
- (void)setOpenWithNewTab:(BOOL)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (id)hostInfoExtends;
- (void)setHostInfoExtends:(id)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (id)window;
- (void)setWindow:(id)arg1;
- (BOOL)isPopGestureEnable;
- (id)liteAppParentViewController;
- (void)setLiteAppParentViewController:(id)arg1;
- (id)preferBackgroundColor;
- (void)setPreferBackgroundColor:(id)arg1;
- (id)preferBackgroundImage;
- (void)setPreferBackgroundImage:(id)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (BOOL)isReportStartTimeLine;
- (void)setIsReportStartTimeLine:(BOOL)arg1;
- (BOOL)delayShowNavBar;
- (void)setDelayShowNavBar:(BOOL)arg1;
- (BOOL)pageOrientationDefaultValueAuto;
- (void)setPageOrientationDefaultValueAuto:(BOOL)arg1;
- (BOOL)isTransparent;
- (id)nativeStore;
- (void)setNativeStore:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)preGestureRecognizerDelegate;
- (void)setPreGestureRecognizerDelegate:(id)arg1;
- (BOOL)preGestureRecognizerEnabled;
- (void)setPreGestureRecognizerEnabled:(BOOL)arg1;
- (PageInfo)currentPageInfo;
- (void)setCurrentPageInfo:(PageInfo)arg1;
- (id)consumer;
- (void)setConsumer:(id)arg1;
- (BOOL)statusBarHidden;
- (BOOL)isOpenApp;
- (void)setIsOpenApp:(BOOL)arg1;
- (id /* block */)anrCheckBlock;
- (void)setAnrCheckBlock:(id /* block */)arg1;
- (id /* block */)loadingCheckBlock;
- (void)setLoadingCheckBlock:(id /* block */)arg1;
- (BOOL)isPresented;
- (void)setIsPresented:(BOOL)arg1;
- (BOOL)isNeedShowNavBar;
- (void)setIsNeedShowNavBar:(BOOL)arg1;
- (CGSize)delayUpdateSize;
- (void)setDelayUpdateSize:(CGSize)arg1;
- (BOOL)hasCheckCoreText;
- (void)setHasCheckCoreText:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

