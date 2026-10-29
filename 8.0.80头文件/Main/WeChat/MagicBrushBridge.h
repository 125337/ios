@interface MagicBrushBridge : NSObject
+ (id)sharedInstance;
- (id)bridge;
- (void)registerGlobalInfo:(id)arg1;
- (void)registerBizInfo:(id)arg1;
- (id)getPkgAppVersion:(id)arg1;
- (void)notifyRemotePkgUpdate:(id)arg1 version:(unsigned long long)arg2 path:(id)arg3;
- (void)resetRemotePkgPkgConfigCache;
- (void)updateDisplayParamsWithWindowWidthDp:(int)arg1 windowHeightDp:(int)arg2 pixelRatio:(float)arg3 deviceOrientation:(id)arg4;
- (void)notifyFontSizeChange:(float)arg1;
- (void)notifyColorModeChange:(BOOL)arg1;
- (void)notifyFontIdChange:(id)arg1;
- (void)notifyAppLanguageChange:(id)arg1;
- (void)notifyTeenModeChange:(BOOL)arg1;
- (void)notifyAppForegroundStateChange:(BOOL)arg1;
@end
