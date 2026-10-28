@interface LiteAppMgr : NSObject
{
    BOOL _fontScaleFollowSystem; // +0x8
    BOOL _isDarkMode; // +0x9
    BOOL _localeFollowSystem; // +0xa
    BOOL _hasLoadBaseLib; // +0xb
    float _fontScale; // +0xc
    float _statusBarHeight; // +0x10
    id <LiteAppCallback> _callbackDelegate; // +0x18
    NSMutableDictionary * _reporters; // +0x20
    WxaRouterConfig * _config; // +0x28
    NSString * _baseLibPath; // +0x30
    NSString * _entryPoint; // +0x38
    long long _setPathResult; // +0x40
}
+ (id)sharedInstance;
- (id)init;
- (unsigned int)genLiteAppUuid;
- (void)setFlutterEntryPoint:(id)arg1;
- (id)preparedRouter;
- (int)preloadBaseLib;
- (int)preloadBaseLibWithExtends:(id)arg1;
- (int)loadBaseLib:(id)arg1;
- (void)releaseBaseLib;
- (id)config;
- (id)initialRoute;
- (void)releaseFlutterEngine;
- (void)releaseFlutterEngine:(BOOL)arg1;
- (void)updateDarkMode:(BOOL)arg1;
- (void)onOrientationChanged:(int)arg1;
- (void)updateLowPower:(BOOL)arg1;
- (void)updateLowPowerMode:(BOOL)arg1;
- (void)updateVolume:(float)arg1;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 json:(id)arg3;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 obj:(id)arg3;
- (void)addGlobalStore:(id)arg1 clz:(Class)arg2;
- (void)addGlobalStore:(id)arg1 store:(id)arg2;
- (void)removeGlobalStore:(id)arg1;
- (id)getGlobalStore:(id)arg1;
- (void)setJsApiViewController:(id)arg1 ForAppId:(id)arg2;
- (void)removeJsApiViewControllerForAppId:(id)arg1;
- (id)getJsApiViewControllerForAppId:(id)arg1;
- (id)getViewController:(unsigned int)arg1;
- (void)setFontScale:(float)arg1;
- (id)callbackDelegate;
- (void)setCallbackDelegate:(id)arg1;
- (BOOL)fontScaleFollowSystem;
- (void)setFontScaleFollowSystem:(BOOL)arg1;
- (float)fontScale;
- (float)statusBarHeight;
- (void)setStatusBarHeight:(float)arg1;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg1;
- (BOOL)localeFollowSystem;
- (void)setLocaleFollowSystem:(BOOL)arg1;
- (id)reporters;
- (void)setReporters:(id)arg1;
- (void)setConfig:(id)arg1;
- (BOOL)hasLoadBaseLib;
- (void)setHasLoadBaseLib:(BOOL)arg1;
- (id)baseLibPath;
- (void)setBaseLibPath:(id)arg1;
- (id)entryPoint;
- (void)setEntryPoint:(id)arg1;
- (long long)setPathResult;
- (void)setSetPathResult:(long long)arg1;
- (void).cxx_destruct;
@end
