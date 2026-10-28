@interface WxaRouter : NSObject
{
    BOOL _isDefaultEngineUsed; // +0x8
    id <WxaRouterFlutterEngineDelegate> _flutterEngineDelegate; // +0x10
    FlutterEngine * _defaultFlutterEngine; // +0x18
    WxaRouterConfig * _config; // +0x20
    NSMutableDictionary * _pluginMap; // +0x28
    NSMutableDictionary * _flutterEngineIdMap; // +0x30
    unsigned long long _engineId; // +0x38
    unsigned long long _defaultEngineId; // +0x40
    NSMutableArray * _destroyingEngines; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (void)setup:(id)arg1;
- (BOOL)isSetup;
- (void)create:(id)arg1 engineId:(unsigned long long)arg2;
- (void)destroy:(id)arg1 engineId:(unsigned long long)arg2;
- (BOOL)isFlutterEngineReady;
- (void)preloadFlutterEngine;
- (BOOL)canReleasePreloadFlutterEngine;
- (void)destroyPreloadFlutterEngine:(unsigned long long)arg1;
- (unsigned long long)provideFlutterEngine:(BOOL)arg1;
- (unsigned long long)provideFlutterEngine:(BOOL)arg1 useImpeller:(BOOL)arg2;
- (void)registerPlugins:(id)arg1;
- (id)getDartVmArgsUseImpeller:(id)arg1;
- (unsigned long long)createFlutterEngine:(BOOL)arg1 exclusive:(BOOL)arg2;
- (void)invokeMethod:(unsigned long long)arg1 method:(id)arg2 arguments:(id)arg3;
- (void)invokeMethod:(unsigned long long)arg1 method:(id)arg2 arguments:(id)arg3 result:(id /* block */)arg4;
- (void)addConsumer:(unsigned long long)arg1 conusmer:(id)arg2;
- (void)removeConsumer:(unsigned long long)arg1 conusmer:(id)arg2;
- (void)releaseEngine:(unsigned long long)arg1;
- (void)invokeMethodWithTimeout:(unsigned long long)arg1 method:(id)arg2 arguments:(id)arg3 timeout:(int)arg4 callback:(id /* block */)arg5;
- (void)recordFlutterEngineId:(unsigned long long)arg1 engine:(id)arg2;
- (void)removeFlutterEngine:(unsigned long long)arg1;
- (id)getFlutterEngine:(unsigned long long)arg1;
- (void)clearAllEngine;
- (BOOL)canUseFlutterEngine:(unsigned long long)arg1;
- (id)flutterEngineDelegate;
- (void)setFlutterEngineDelegate:(id)arg1;
- (id)defaultFlutterEngine;
- (void)setDefaultFlutterEngine:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)pluginMap;
- (void)setPluginMap:(id)arg1;
- (id)flutterEngineIdMap;
- (void)setFlutterEngineIdMap:(id)arg1;
- (unsigned long long)engineId;
- (void)setEngineId:(unsigned long long)arg1;
- (unsigned long long)defaultEngineId;
- (void)setDefaultEngineId:(unsigned long long)arg1;
- (BOOL)isDefaultEngineUsed;
- (void)setIsDefaultEngineUsed:(BOOL)arg1;
- (id)destroyingEngines;
- (void)setDestroyingEngines:(id)arg1;
- (void).cxx_destruct;
@end
