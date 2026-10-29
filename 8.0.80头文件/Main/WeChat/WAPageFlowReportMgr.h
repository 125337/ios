@interface WAPageFlowReportMgr : MMUserService <MMServiceProtocol>
{
    WAPageFlowObject * m_currentPage; // +0x8
    unsigned int m_EntranceWebviewID; // +0x10
    unsigned int m_lastClickTime; // +0x14
    unsigned long long m_lastClickTimeInMs; // +0x18
    NSMutableDictionary * m_preSceneMap; // +0x20
    NSMutableDictionary * m_preSceneInfoMap; // +0x28
    NSMutableDictionary * m_codeSceneMap; // +0x30
    NSString * m_weappUsername; // +0x38
    unsigned long long m_weappFromScene; // +0x40
    unsigned long long m_weappRealStartUpTimeInMs; // +0x48
    unsigned long long m_weappRealStartUpTimeFrom1970InMs; // +0x50
    WAPageFlowAppInfo * _currentAppInfo; // +0x58
    WAPageFlowSessionInfo * _currentSessionInfo; // +0x60
}
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)currentPage;
- (id)currentPageReferPagePath;
- (unsigned int)lastClickTimeStamp;
- (unsigned long long)lastClickTimeStampInMs;
- (unsigned long long)weappStartUpTimeStampInMs;
- (unsigned long long)weappStartUpTimeStampFrom1970InMs;
- (void)onWeAppProcessBegin:(id)arg1;
- (void)onWeAppProcessRelaunchHomeInSessionInfo:(id)arg1;
- (void)onWeAppProcessTriggerDownload;
- (void)onWeAppStartUpProcessTerminate:(unsigned int)arg1;
- (void)onWeAppBecomeActive:(id)arg1 appInfo:(id)arg2 openFromWeApp:(BOOL)arg3 disableVisibilityEvent:(BOOL)arg4;
- (void)onFirstPageInit:(id)arg1 query:(id)arg2 homeWebview:(id)arg3;
- (void)onBackFromLauchWeApp;
- (void)onWebViewIndexFinished;
- (void)onTargetToPage:(id)arg1 toWebviewIfExist:(id)arg2;
- (void)onTargetToWeApp:(id)arg1 appid:(id)arg2;
- (void)onTargetToNativaPage:(id)arg1;
- (void)onTargetToWebPage:(id)arg1;
- (BOOL)shouldReportBackOnPage:(id)arg1;
- (void)onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)onBackFromNative:(id)arg1;
- (void)onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)onAppEnterBackground;
- (void)onFunctionalPageStartGame;
- (void)onUserOperate;
- (id)genDefaultPagePVItem;
- (void)rigisterPreScene:(unsigned long long)arg1 preSourceInfo:(id)arg2 forUrl:(id)arg3;
- (unsigned long long)preSceneForUrlIfExist:(id)arg1;
- (id)preSceneNoteForUrlIfExist:(id)arg1;
- (void)registerCodeScene:(unsigned long long)arg1 forUrl:(id)arg2;
- (unsigned long long)codeSceneForUrlIfExist:(id)arg1;
- (void)reprotWAWebViewPV:(id)arg1;
- (id)genBasePath:(id)arg1;
- (id)genQuery:(id)arg1;
- (id)currentAppInfo;
- (void)setCurrentAppInfo:(id)arg1;
- (id)currentSessionInfo;
- (void)setCurrentSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
