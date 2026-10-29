@interface WxaLiteAppWidgetAdapter : NSObject <LVUICallbackControllerDelegate>
{
    shared_ptr<LVUICallback> lvUICallback; // +0x8
    BOOL _isPopGestureEnable; // +0x18
    BOOL _keyboardShow; // +0x19
    BOOL _statusBarHidden; // +0x1a
    BOOL _hasCheckCoreText; // +0x1b
    BOOL _disableScroll; // +0x1c
    BOOL _isReportStartTimeLine; // +0x1d
    int _engineId; // +0x20
    unsigned int _appUuid; // +0x24
    int _lastFlags; // +0x28
    float _fontScale; // +0x2c
    float _lastBatteryLevel; // +0x30
    float _lastVolume; // +0x34
    UIViewController<LiteAppWidgetParentViewControllerDelegate> * _liteAppParentViewController; // +0x38
    FlutterViewController * _flutterViewController; // +0x40
    NSString * _appId; // +0x48
    NSString * _path; // +0x50
    NSString * _signatureKey; // +0x58
    NSString * _page; // +0x60
    NSString * _query; // +0x68
    NSString * _activityId; // +0x70
    NSString * _pageName; // +0x78
    NSMutableDictionary * _params; // +0x80
    WxaLiteAppWidgetConsumer * _consumer; // +0x88
    WxaLiteAppStartReport * _startReport; // +0x90
    MMLiteAppReporter * _reporter; // +0x98
    LiteAppPageConfig * _pageConfig; // +0xa0
    FlutterMethodChannel * _channel; // +0xa8
    WxaLiteAppWidgetFlutterPluginApi * _pluginApi; // +0xb0
    UIImage * _backgroundImage; // +0xb8
    long long _lastOrientation; // +0xc0
    CGSize _delayUpdateSize; // +0xc8
    PageInfo _currentPageInfo; // +0xd8
}
- (id)initWithAppUuid:(unsigned int)arg1 flutterViewcontroller:(id)arg2 pluginApi:(id)arg3 engineId:(int)arg4 appId:(id)arg5 path:(id)arg6 page:(id)arg7 query:(id)arg8 signatureKey:(id)arg9 startReport:(id)arg10 reporter:(id)arg11;
- (void)startLiteAppWidget;
- (void)destroyLiteAppWidget;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)showLiteAppView;
- (void)navigateBackAnimated:(BOOL)arg1;
- (void)setCanOverScroll:(BOOL)arg1;
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
- (void)onShowPageTimeStamp:(unsigned long long)arg1;
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
- (id)liteAppParentViewController;
- (void)setLiteAppParentViewController:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (int)engineId;
- (void)setEngineId:(int)arg1;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)isPopGestureEnable;
- (int)lastFlags;
- (void)setLastFlags:(int)arg1;
- (PageInfo)currentPageInfo;
- (void)setCurrentPageInfo:(PageInfo)arg1;
- (id)consumer;
- (void)setConsumer:(id)arg1;
- (BOOL)keyboardShow;
- (void)setKeyboardShow:(BOOL)arg1;
- (BOOL)statusBarHidden;
- (CGSize)delayUpdateSize;
- (void)setDelayUpdateSize:(CGSize)arg1;
- (BOOL)hasCheckCoreText;
- (void)setHasCheckCoreText:(BOOL)arg1;
- (BOOL)disableScroll;
- (void)setDisableScroll:(BOOL)arg1;
- (float)fontScale;
- (void)setFontScale:(float)arg1;
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
- (id)pluginApi;
- (void)setPluginApi:(id)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (float)lastBatteryLevel;
- (void)setLastBatteryLevel:(float)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (float)lastVolume;
- (void)setLastVolume:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

