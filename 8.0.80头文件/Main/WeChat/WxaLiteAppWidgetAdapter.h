@interface WxaLiteAppWidgetAdapter : NSObject <LVUICallbackControllerDelegate>
{
    shared_ptr<LVUICallback> lvUICallback; // +0x8
    BOOL _isPopGestureEnable; // +0x18
    BOOL _keyboardShow; // +0x19
    BOOL _statusBarHidden; // +0x1a
    BOOL _hasCheckCoreText; // +0x1b
    BOOL _disableScroll; // +0x1c
    BOOL _isHalfScreen; // +0x1d
    BOOL _isTransparent; // +0x1e
    BOOL _isEmbedView; // +0x1f
    BOOL _autoWidth; // +0x20
    BOOL _autoHeight; // +0x21
    BOOL _isReportStartTimeLine; // +0x22
    unsigned int _appUuid; // +0x24
    int _lastFlags; // +0x28
    float _fontScale; // +0x2c
    float _lastBatteryLevel; // +0x30
    float _lastVolume; // +0x34
    UIViewController<LiteAppWidgetParentViewControllerDelegate> * _liteAppParentViewController; // +0x38
    FlutterViewController * _flutterViewController; // +0x40
    unsigned long long _engineId; // +0x48
    NSString * _appId; // +0x50
    NSString * _path; // +0x58
    NSString * _signatureKey; // +0x60
    NSString * _page; // +0x68
    NSString * _query; // +0x70
    NSString * _sessionId; // +0x78
    NSString * _referrerInfo; // +0x80
    NSString * _activityId; // +0x88
    NSString * _pageName; // +0x90
    NSMutableDictionary * _params; // +0x98
    LiteAppStore * _localStore; // +0xa0
    WxaLiteAppWidgetConsumer * _consumer; // +0xa8
    unsigned long long _pluginHash; // +0xb0
    WxaLiteAppStartReport * _startReport; // +0xb8
    MMLiteAppReporter * _reporter; // +0xc0
    LiteAppPageConfig * _pageConfig; // +0xc8
    FlutterMethodChannel * _channel; // +0xd0
    NSMutableDictionary * _extraData; // +0xd8
    WxaLiteAppWidgetFlutterPluginApi * _pluginApi; // +0xe0
    UIView * _backgroundImageView; // +0xe8
    long long _lastOrientation; // +0xf0
    CGSize _size; // +0xf8
    PageInfo _currentPageInfo; // +0x108
}
- (id)initWithAppUuid:(unsigned int)arg1 flutterViewcontroller:(id)arg2 pluginApi:(id)arg3 engineId:(unsigned long long)arg4 pluginHash:(unsigned long long)arg5 appId:(id)arg6 path:(id)arg7 page:(id)arg8 query:(id)arg9 sessionId:(id)arg10 referrerInfo:(id)arg11 signatureKey:(id)arg12 isHalfScreen:(BOOL)arg13 isTransparent:(BOOL)arg14 isEmbedView:(BOOL)arg15 width:(double)arg16 height:(double)arg17 autoWidth:(BOOL)arg18 autoHeight:(BOOL)arg19 extraData:(id)arg20 startReport:(id)arg21 reporter:(id)arg22;
- (void)startLiteAppWidget;
- (void)destroyLiteAppWidget;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)updateWidgetSize:(double)arg1 height:(double)arg2;
- (void)showLiteAppView;
- (void)navigateBackAnimated:(BOOL)arg1;
- (void)setCanOverScroll:(BOOL)arg1;
- (void)setReachBottom:(BOOL)arg1;
- (void)rightGestureEvent:(id)arg1;
- (void)checkCoreText;
- (void)registerObserver;
- (void)loadConfig;
- (void)addBackgroundImage;
- (void)removeBackgroundImage;
- (void)initParams:(const void *)arg1;
- (void)setupChannelMethod;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)setFlags:(int)arg1;
- (void)setPageOrientation:(int)arg1 landScapeOrientation:(unsigned long long)arg2;
- (void)setHomeIndicatorAutoHidden:(BOOL)arg1;
- (double)statusBarHeight;
- (id)getCurrentVC;
- (void)dataReportStartLiteAppTimeLine;
- (void)dismissMyselfanimation:(BOOL)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)boldTextStatusChanged:(id)arg1;
- (void)SystemFontSizeChanged:(id)arg1;
- (void)handleVideoPlayerFullScreen:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)batteryLevelDidChange:(id)arg1;
- (void)lowPowerModeDidChange:(id)arg1;
- (void)onVolumeDidChangeBeforeIOS15:(id)arg1;
- (void)onVolumeDidChangeAfterIOS15:(id)arg1;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (id)getViewController;
- (id)appId;
- (BOOL)isHalfScreen;
- (void)showPage:(const void *)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)onShowPageTimeStamp:(const void *)arg1;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (id)getStore;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setDragToClose:(BOOL)arg1;
- (void)closeWindow:(BOOL)arg1;
- (BOOL)isDarkMode;
- (id)liteAppParentViewController;
- (void)setLiteAppParentViewController:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (unsigned long long)engineId;
- (void)setEngineId:(unsigned long long)arg1;
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
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)isPopGestureEnable;
- (id)localStore;
- (int)lastFlags;
- (void)setLastFlags:(int)arg1;
- (PageInfo)currentPageInfo;
- (void)setCurrentPageInfo:(PageInfo)arg1;
- (id)consumer;
- (void)setConsumer:(id)arg1;
- (BOOL)keyboardShow;
- (void)setKeyboardShow:(BOOL)arg1;
- (BOOL)statusBarHidden;
- (unsigned long long)pluginHash;
- (void)setPluginHash:(unsigned long long)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (BOOL)hasCheckCoreText;
- (void)setHasCheckCoreText:(BOOL)arg1;
- (BOOL)disableScroll;
- (void)setDisableScroll:(BOOL)arg1;
- (float)fontScale;
- (void)setFontScale:(float)arg1;
- (void)setIsHalfScreen:(BOOL)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)isEmbedView;
- (void)setIsEmbedView:(BOOL)arg1;
- (BOOL)autoWidth;
- (void)setAutoWidth:(BOOL)arg1;
- (BOOL)autoHeight;
- (void)setAutoHeight:(BOOL)arg1;
- (BOOL)isReportStartTimeLine;
- (void)setIsReportStartTimeLine:(BOOL)arg1;
- (id)startReport;
- (void)setStartReport:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)pageConfig;
- (void)setPageConfig:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)pluginApi;
- (void)setPluginApi:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (float)lastBatteryLevel;
- (void)setLastBatteryLevel:(float)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (float)lastVolume;
- (void)setLastVolume:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
