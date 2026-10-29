@interface WxaRouter : NSObject
{
    BOOL _isDefaultEngineUsed; // +0x8
    int _engineId; // +0xc
    int _defaultEngineId; // +0x10
    id <WxaRouterFlutterEngineDelegate> _flutterEngineDelegate; // +0x18
    FlutterEngine * _defaultFlutterEngine; // +0x20
    WxaRouterConfig * _config; // +0x28
    NSMutableDictionary * _pluginMap; // +0x30
    NSMutableDictionary * _flutterEngineIdMap; // +0x38
    NSMutableArray * _destroyingEngines; // +0x40
}
+ (id)sharedInstance;
- (id)init;
- (void)setup:(id)arg1;
- (BOOL)isSetup;
- (void)create:(id)arg1 engineId:(int)arg2;
- (void)prepareNextEngine:(id)arg1;
- (void)destroy:(id)arg1 engineId:(int)arg2;
- (BOOL)isFlutterEngineReady;
- (void)preloadFlutterEngine;
- (BOOL)canReleasePreloadFlutterEngine;
- (void)destroyPreloadFlutterEngine;
- (int)provideFlutterEngine:(BOOL)arg1;
- (void)registerPlugins:(id)arg1;
- (void)createFlutterEngine;
- (void)invokeMethod:(int)arg1 method:(id)arg2 arguments:(id)arg3;
- (void)invokeMethod:(int)arg1 method:(id)arg2 arguments:(id)arg3 result:(id /* block */)arg4;
- (void)addConsumer:(int)arg1 conusmer:(id)arg2;
- (void)removeConsumer:(int)arg1 conusmer:(id)arg2;
- (void)releaseEngine:(int)arg1;
- (void)recordFlutterEngineId:(int)arg1 engine:(id)arg2;
- (void)removeFlutterEngine:(int)arg1;
- (id)getFlutterEngine:(int)arg1;
- (void)clearAllEngine;
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
- (int)engineId;
- (void)setEngineId:(int)arg1;
- (int)defaultEngineId;
- (void)setDefaultEngineId:(int)arg1;
- (BOOL)isDefaultEngineUsed;
- (void)setIsDefaultEngineUsed:(BOOL)arg1;
- (id)destroyingEngines;
- (void)setDestroyingEngines:(id)arg1;
- (void).cxx_destruct;
@end

