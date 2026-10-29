@interface EcsCoreEcsTracker_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsTracker_Ur>
+ (id)sharedInstance;
- (void)start:(id)arg1;
- (void)step:(id)arg1;
- (void)end:(id)arg1 status:(int)arg2;
- (BOOL)isMonitoring:(id)arg1;
- (void)onAppLaunch;
- (void)onAppEnterForground;
- (void)doReport:(id)arg1 sceneId:(id)arg2 dest:(int)arg3;
@end
