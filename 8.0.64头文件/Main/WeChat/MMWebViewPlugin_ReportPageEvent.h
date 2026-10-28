@interface MMWebViewPlugin_ReportPageEvent : MMWebViewPluginBase <IMMWebViewReportStatMgrExt>
{
    NSString * _nsSessionID; // +0x8
    NSString * _referLoadUrl; // +0x10
    NSString * _currentLoadUrl; // +0x18
    unsigned long long _enterPageTime; // +0x20
    unsigned long long _didStartLoadTime; // +0x28
    unsigned long long _costLoadTime; // +0x30
    long long _scene; // +0x38
    unsigned long long _recentMenuType; // +0x40
    WCStatTimerHelper * m_oStatTimerHelper; // +0x48
    unsigned int m_stat_enterTime; // +0x50
    double m_beginOffset; // +0x58
    double m_endOffset; // +0x60
    double m_maxOffset; // +0x68
    double m_screenHeight; // +0x70
    unsigned long long m_startInitTime; // +0x78
    unsigned long long m_loadTime; // +0x80
    unsigned long long m_startDisappearTime; // +0x88
    unsigned long long m_disappearTime; // +0x90
    BOOL m_beginDragging; // +0x98
    BOOL m_hasAppear; // +0x99
    BOOL m_hasEnter; // +0x9a
    BOOL m_hasMinimize; // +0x9b
    BOOL _m_isFinishLoaded; // +0x9c
    BOOL _m_isPageLoadFail; // +0x9d
    BOOL _hasCreateBrandActionReport; // +0x9e
    BOOL _navigateActionMatchUniversalLinkAndConfirmed; // +0x9f
    unsigned int _navigateActionMatchControlAction; // +0xa0
    NSString * _m_lastCheckCpKey; // +0xa8
    BrandActionReportLogicController * _m_brandActionReport; // +0xb0
    NSString * _navigateActionSourceUrl; // +0xb8
    NSString * _navigateActionTargetUrl; // +0xc0
    unsigned long long _navigateActionTimeStampInMs; // +0xc8
    NSMutableArray * _arrWebviewJumpInfo; // +0xd0
}
+ (id)getUserAgent;
+ (unsigned long long)getNetType;
+ (unsigned int)getCurrentTimeStamp;
+ (unsigned long long)getCurrentTimeInMs;
+ (void)reportPageInfoWhenForwardMsgOrFav:(id)arg1 actionType:(unsigned long long)arg2 fromScene:(unsigned long long)arg3 ret:(unsigned long long)arg4;
+ (void)reportCityServiceInjectAction:(id)arg1 extString:(id)arg2 success:(BOOL)arg3 reason:(unsigned long long)arg4;
+ (void)reportCityServiceIdKeyAction:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)reportPageEventFrom3rdProvideInfoWithKey:(id)arg1 andValue:(id)arg2;
- (void)reportPageEventWhenClickMenuAction:(unsigned long long)arg1;
- (id)getSessionID;
- (void)genSessionID;
- (id)getAppID;
- (id)getCurrentUrl;
- (id)getPublisherName;
- (BOOL)isShareWithUpdatePluginInfo:(unsigned long long)arg1;
- (void)reportPageEventWhenPageLeft:(BOOL)arg1;
- (void)realReportMenuActionWithType:(unsigned long long)arg1 result:(unsigned long long)arg2;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)updateMaxScroll;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onMenuActionRet:(unsigned long long)arg1;
- (void)reportKeyShouldStartLoadEventWithSourceUrl:(id)arg1 targetUrl:(id)arg2 matchAction:(unsigned int)arg3;
- (void)reportUniversalLinkAlertUserAction:(BOOL)arg1 sourceUrl:(id)arg2 targetUrl:(id)arg3;
- (void)onCheckUniversalLinkActionWhenNavigationDidStart:(id)arg1;
- (void)onCheckUniversalLinkActionWhenEnterBackground;
- (void)__reportUniversalLinkNavigationKVStatWithPerfomUniversalLinkNavigationResult:(BOOL)arg1;
- (void)__clearNavigateActionReportData;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)reportH5PageWrapWhenShouldStartLoad:(id)arg1;
- (void)reportH5PageWrapWhenDidFinishLoad:(id)arg1;
- (void)reportH5PageWrapWhenDidFailLoad:(id)arg1;
- (void)reportH5PageWrapWhenDealloc:(id)arg1;
- (void)reportTopStory:(id)arg1;
- (void)reportCloseWebView;
- (void)createBrandActionReport;
- (unsigned long long)reportFromScene;
- (void)reportAdPageTakeScreenshot;
- (void)savePageInfoForKv10643Report;
- (id)arrWebviewJumpInfo;
- (void)saveCurrentPageTiteInfoForKv10643Report;
- (id)genUrlListForKv10643Report;
- (void)extractAndreportPageFeatureWithInitUrl:(id)arg1 a8keyUrl:(id)arg2 currentUrl:(id)arg3 andRequstID:(unsigned int)arg4;
- (id)genReportStringWithFeatureVectorArray:(id)arg1 startIndex:(unsigned long long)arg2;
- (id)m_lastCheckCpKey;
- (void)setM_lastCheckCpKey:(id)arg1;
- (BOOL)m_isFinishLoaded;
- (void)setM_isFinishLoaded:(BOOL)arg1;
- (BOOL)m_isPageLoadFail;
- (void)setM_isPageLoadFail:(BOOL)arg1;
- (BOOL)hasCreateBrandActionReport;
- (void)setHasCreateBrandActionReport:(BOOL)arg1;
- (id)m_brandActionReport;
- (void)setM_brandActionReport:(id)arg1;
- (id)navigateActionSourceUrl;
- (void)setNavigateActionSourceUrl:(id)arg1;
- (id)navigateActionTargetUrl;
- (void)setNavigateActionTargetUrl:(id)arg1;
- (unsigned long long)navigateActionTimeStampInMs;
- (void)setNavigateActionTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)navigateActionMatchControlAction;
- (void)setNavigateActionMatchControlAction:(unsigned int)arg1;
- (BOOL)navigateActionMatchUniversalLinkAndConfirmed;
- (void)setNavigateActionMatchUniversalLinkAndConfirmed:(BOOL)arg1;
- (void)setArrWebviewJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
