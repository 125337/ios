@interface WeMagicMgrService : MMUserService <WCMainWindowExt, IUiUtilExt, IMMFontMgrExt, IMMLanguageMgrExt, MMLimitedModeExt, MMServiceProtocol>
{
    BOOL _isInitialized; // +0x8
    BOOL _isLiteInitialized; // +0x9
    BOOL _isForeground; // +0xa
    BOOL _isListening; // +0xb
    BOOL _isTerminated; // +0xc
    BOOL _isDisplayParamsSyncPending; // +0xd
    _TtC7WeMagic12MBGlobalInfo * _globalInfo; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)initialize;
- (id)getPkgAppVersion:(id)arg1;
- (void)notifyRemotePkgUpdate:(id)arg1 version:(unsigned long long)arg2 path:(id)arg3;
- (void)resetRemotePkgPkgConfigCache;
- (BOOL)isDebugEnv;
- (void)initializeLiteIfNeeded;
- (void)validateBuiltInPkgInfos:(id)arg1;
- (void)initVConsoleScriptProvider;
- (void)setupGlobalInfoAndListeners;
- (id)buildGlobalInfo;
- (id)currentLanguage;
- (BOOL)currentTeenMode;
- (CGSize)currentWindowSize;
- (id)orientationForSize:(CGSize)arg1;
- (void)addListeners;
- (void)removeListeners;
- (void)mm_onColorAppearanceDidChange;
- (void)syncColorMode;
- (void)onMainWindowFrameChanged;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onLimitedModeChanged;
- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;
- (void)syncForegroundState:(BOOL)arg1;
- (void)scheduleDisplayParamsSync;
- (void)syncDisplayParams;
- (void)runOnMainThread:(id /* block */)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (BOOL)isLiteInitialized;
- (void)setIsLiteInitialized:(BOOL)arg1;
- (id)globalInfo;
- (void)setGlobalInfo:(id)arg1;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
- (BOOL)isListening;
- (void)setIsListening:(BOOL)arg1;
- (BOOL)isTerminated;
- (void)setIsTerminated:(BOOL)arg1;
- (BOOL)isDisplayParamsSyncPending;
- (void)setIsDisplayParamsSyncPending:(BOOL)arg1;
- (void).cxx_destruct;
@end
