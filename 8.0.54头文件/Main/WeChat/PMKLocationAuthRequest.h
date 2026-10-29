@interface PMKLocationAuthRequest : NSObject <CLLocationManagerDelegate>
{
    int _initialAuthorizationState; // +0x8
    id /* block */ _resolve; // +0x10
    id _retainCycle; // +0x18
    CLLocationManager * _manager; // +0x20
}
- (id)pRequestWhenInUseAuthorization;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id /* block */)resolve;
- (void)setResolve:(id /* block */)arg1;
- (id)retainCycle;
- (void)setRetainCycle:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (int)initialAuthorizationState;
- (void)setInitialAuthorizationState:(int)arg1;
- (void).cxx_destruct;
@end

