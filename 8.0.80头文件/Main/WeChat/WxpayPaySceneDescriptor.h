@interface WxpayPaySceneDescriptor : NSObject
{
    BOOL _preloadStore; // +0x8
    BOOL _preloadView; // +0x9
    BOOL _loading; // +0xa
    NSString * _name; // +0x10
    NSString * _appId; // +0x18
    NSString * _route; // +0x20
    long long _storeAliveSeconds; // +0x28
    NSSet * _requiredServices; // +0x30
    NSSet * _capabilities; // +0x38
    NSString * _routeOverridePattern; // +0x40
}
+ (id)descriptorWithName:(id)arg1 appId:(id)arg2 route:(id)arg3 configure:(id /* block */)arg4;
- (id)resolvedWithRoute:(id)arg1 query:(id)arg2 sessionId:(id)arg3 configure:(id /* block */)arg4;
- (id)name;
- (void)setName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (BOOL)preloadStore;
- (void)setPreloadStore:(BOOL)arg1;
- (BOOL)preloadView;
- (void)setPreloadView:(BOOL)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (long long)storeAliveSeconds;
- (void)setStoreAliveSeconds:(long long)arg1;
- (id)requiredServices;
- (void)setRequiredServices:(id)arg1;
- (id)capabilities;
- (void)setCapabilities:(id)arg1;
- (id)routeOverridePattern;
- (void)setRouteOverridePattern:(id)arg1;
- (void).cxx_destruct;
@end
