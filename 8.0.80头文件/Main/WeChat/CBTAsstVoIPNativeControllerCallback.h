@interface CBTAsstVoIPNativeControllerCallback : NSObject
{
    CBTAsstVoIPNativeControllerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTAsstVoIPNativeControllerDispatcherBridgeObjcImpl *)arg1;
- (void)onLaunchFlutterComplete:(unsigned long long)arg1;
- (void)onDismissFlutterComplete:(unsigned long long)arg1;
- (void)onPlayRingComplete:(unsigned long long)arg1;
- (void)onStopRingComplete:(unsigned long long)arg1;
- (void)onSetAudioActiveComplete:(unsigned long long)arg1;
- (void)onOnCallContextChangedComplete:(unsigned long long)arg1;
- (void)onGetAvailableAudioRoutesComplete:(unsigned long long)arg1 routeArr:(id)arg2;
- (void)onSwitchAudioRouteComplete:(unsigned long long)arg1;
- (void)onDismissLCKComplete:(unsigned long long)arg1;
- (void)onSetAudioCategoryComplete:(unsigned long long)arg1;
- (void)onStartSessionComplete:(unsigned long long)arg1 sessionId:(id)arg2;
@end
