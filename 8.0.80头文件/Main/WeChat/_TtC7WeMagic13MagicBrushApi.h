@interface _TtC7WeMagic13MagicBrushApi : NSObject
{
     lock; // +0x8
     vConsoleScriptProvider; // +0x10
}
+ (id)shared;
- (id)init;
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
- (void)initVConsoleScriptProvider:(id /* block */)arg1;
- (id)provideVConsoleScript;
- (void).cxx_destruct;
@end
