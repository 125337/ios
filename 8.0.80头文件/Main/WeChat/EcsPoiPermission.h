@interface EcsPoiPermission : NSObject <ILocationMgrExt>
{
    id /* block */ _pendingCallback; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)checkLocationPermissionWithCallback:(id /* block */)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)showSystemDeniedAlert;
- (id /* block */)pendingCallback;
- (void)setPendingCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
