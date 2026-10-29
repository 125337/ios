@interface LiteAppEmbedViewController : LiteAppBaseViewController <LVUICallbackControllerDelegate>
{
    shared_ptr<LVUICallback> lvUICallback; // +0x8
    basic_string<char, std::char_traits<char>, std::allocator<char>> _sourceType; // +0x18
    vector<std::string, std::allocator<std::string>> _enableActions; // +0x30
    vector<std::string, std::allocator<std::string>> _enableViews; // +0x48
    BOOL isHiddenHomeIndicator; // +0x60
    BOOL _isTransparent; // +0x61
    BOOL _isPopGestureEnable; // +0x62
    BOOL _isReportStartTimeLine; // +0x63
    BOOL _autoWidth; // +0x64
    BOOL _autoHeight; // +0x65
    BOOL _preGestureRecognizerEnabled; // +0x66
    BOOL _hasInitConfig; // +0x67
    BOOL _isOpenApp; // +0x68
    NSString * _appId; // +0x70
    NSString * _path; // +0x78
    NSString * _signatureKey; // +0x80
    NSString * _page; // +0x88
    NSString * _query; // +0x90
    NSString * _sessionId; // +0x98
    LiteAppReferrerInfo * _referrerInfo; // +0xa0
    LiteAppPageConfig * _pageConfig; // +0xa8
    id <LiteAppEmbedViewControllerDelegate> _delegate; // +0xb0
    NSMutableDictionary * _hostInfoExtends; // +0xb8
    UIColor * _preferBackgroundColor; // +0xc0
    WxaLiteAppStartReport * _report; // +0xc8
    LiteAppStore * _nativeStore; // +0xd0
    MMLiteAppReporter * _reporter; // +0xd8
    id <UIGestureRecognizerDelegate> _preGestureRecognizerDelegate; // +0xe0
    LiteAppEmbedViewConsumer * _consumer; // +0xe8
    id /* block */ _anrCheckBlock; // +0xf0
    id /* block */ _loadingCheckBlock; // +0xf8
    CGSize _lastSize; // +0x100
    CGSize _delayUpdateSize; // +0x110
    PageInfo _currentPageInfo; // +0x120
}
- (id)init;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 sessionId:(id)arg5 referrerInfo:(id)arg6 signatureKey:(id)arg7 isTransparent:(BOOL)arg8 startReport:(id)arg9 reporter:(id)arg10 useImpeller:(BOOL)arg11;
- (void)initReportStart:(id)arg1 report:(id)arg2;
- (void)initReportEnd;
- (void)reopen:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)preDealloc;
- (unsigned int)getLiteAppUuid;
- (void)setLiteAppSessionId:(id)arg1;
- (void)setIsTransparent:(BOOL)arg1;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (void)dataReportTapWhenError;
- (void)tapViewWhenError:(id)arg1;
- (void)dataReportStartLiteAppTimeLine;
- (void)_navigateBackAnimated:(BOOL)arg1;
- (void)_openWebviewByParam:(id)arg1;
- (void)initConfig:(void *)arg1;
- (void)bindLVCPP;
- (void)initParams:(const void *)arg1;
- (BOOL)isDarkMode;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (id)getViewController;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckSumFail:(id)arg1;
- (BOOL)isHalfScreen;
- (void)showPage:(const void *)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)onShowPageTimeStamp:(const void *)arg1;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)setDragToClose:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (id)getStore;
- (void)setStore:(id)arg1;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (unsigned long long)getAppPtr;
- (void)setCanOverScroll:(BOOL)arg1;
- (void)setReachBottom:(BOOL)arg1;
- (void)updateSize:(CGSize)arg1;
- (BOOL)canSheetDrag;
- (void)checkCoreText;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (void)loadConfig;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)closeWindow:(BOOL)arg1;
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
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)pageConfig;
- (void)setPageConfig:(id)arg1;
- (BOOL)isTransparent;
- (BOOL)isPopGestureEnable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)hostInfoExtends;
- (void)setHostInfoExtends:(id)arg1;
- (id)preferBackgroundColor;
- (void)setPreferBackgroundColor:(id)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (BOOL)isReportStartTimeLine;
- (void)setIsReportStartTimeLine:(BOOL)arg1;
- (BOOL)autoWidth;
- (void)setAutoWidth:(BOOL)arg1;
- (BOOL)autoHeight;
- (void)setAutoHeight:(BOOL)arg1;
- (id)nativeStore;
- (void)setNativeStore:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (PageInfo)currentPageInfo;
- (void)setCurrentPageInfo:(PageInfo)arg1;
- (id)preGestureRecognizerDelegate;
- (void)setPreGestureRecognizerDelegate:(id)arg1;
- (BOOL)preGestureRecognizerEnabled;
- (void)setPreGestureRecognizerEnabled:(BOOL)arg1;
- (id)consumer;
- (void)setConsumer:(id)arg1;
- (BOOL)hasInitConfig;
- (void)setHasInitConfig:(BOOL)arg1;
- (BOOL)isOpenApp;
- (void)setIsOpenApp:(BOOL)arg1;
- (id /* block */)anrCheckBlock;
- (void)setAnrCheckBlock:(id /* block */)arg1;
- (id /* block */)loadingCheckBlock;
- (void)setLoadingCheckBlock:(id /* block */)arg1;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (CGSize)delayUpdateSize;
- (void)setDelayUpdateSize:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
