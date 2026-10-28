@interface MMFlutterRoute : NSObject
{
    BOOL _needGeneratedPlugin; // +0x8
    NSString * _entry; // +0x10
    NSString * _plugin; // +0x18
    NSString * _route; // +0x20
    NSDictionary * _params; // +0x28
    NSString * _engineId; // +0x30
    NSString * _paramsKey; // +0x38
    NSString * _routeJson; // +0x40
    NSNumber * _sharedIsolateMode; // +0x48
}
+ (id)getEmojiParams;
- (id)initWithPlugin:(id)arg1;
- (id)initWithPlugin:(id)arg1 route:(id)arg2;
- (id)initWithPlugin:(id)arg1 route:(id)arg2 params:(id)arg3;
- (id)getRoute;
- (id)getRouteJson;
- (id)getParamsJson;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (id)paramsKey;
- (void)setParamsKey:(id)arg1;
- (BOOL)needGeneratedPlugin;
- (void)setNeedGeneratedPlugin:(BOOL)arg1;
- (id)routeJson;
- (void)setRouteJson:(id)arg1;
- (id)sharedIsolateMode;
- (void)setSharedIsolateMode:(id)arg1;
- (void).cxx_destruct;
@end
