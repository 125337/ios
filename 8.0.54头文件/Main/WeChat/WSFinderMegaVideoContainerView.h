@interface WSFinderMegaVideoContainerView : WSContainerBaseView
{
    BOOL _needCreateContextId; // +0x8
    BOOL _appearBySelectTab; // +0x9
    BOOL _isCurWSWebView; // +0xa
    OpenLiteAppInfo * _liteAppInfo; // +0x10
    MMLiteAppView * _liteAppView; // +0x18
    unsigned long long _startCount; // +0x20
    MMTimer * _cleanLiteAppTimer; // +0x28
    unsigned long long _enterTime; // +0x30
    NSDictionary * _createConfig; // +0x38
    NSString * _curContextId; // +0x40
}
- (id)initWithConfig:(id)arg1;
- (void)preDownloadLiteApp;
- (void)createPreloadStore;
- (void)preloadPageAction;
- (void)initViewIfNeed;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)_cleanLiteApp;
- (void)onEnterWSWebView:(BOOL)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onContainerAppear;
- (void)onContainerDisAppear;
- (void)updateContextId;
- (void)dealloc;
- (int)commentScene;
- (void)reportEnter;
- (void)reportEventCode:(long long)arg1;
- (void)checkShouldStartLiteApp;
- (void)reportExpose;
- (void)reportUnExpose:(BOOL)arg1;
- (id)enterQueryDict;
- (id)liteAppInfo;
- (void)setLiteAppInfo:(id)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (unsigned long long)startCount;
- (void)setStartCount:(unsigned long long)arg1;
- (id)cleanLiteAppTimer;
- (void)setCleanLiteAppTimer:(id)arg1;
- (BOOL)needCreateContextId;
- (void)setNeedCreateContextId:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (BOOL)appearBySelectTab;
- (void)setAppearBySelectTab:(BOOL)arg1;
- (id)createConfig;
- (void)setCreateConfig:(id)arg1;
- (id)curContextId;
- (void)setCurContextId:(id)arg1;
- (BOOL)isCurWSWebView;
- (void)setIsCurWSWebView:(BOOL)arg1;
- (void).cxx_destruct;
@end

