@interface CBTPOIUtil : NSObject
{
    BOOL _isRequestingLocation; // +0x8
    id /* block */ _pendingAuthCompletion; // +0x10
    MMLocatingCoordinateLogic * _locationLogic; // +0x18
    NSMutableArray * _pendingLocationCompletions; // +0x20
}
+ (id)sharedInstance;
- (BOOL)hasLocationAuthorizationAndFullAccuracy;
- (id)getLocationAuthDetail;
- (void)requestLocationAuthorizationWithCompletion:(id /* block */)arg1;
- (void)showLocationDeniedAlertWithCompletion:(id /* block */)arg1;
- (void)onGoToSettingTapped;
- (void)onAppWillEnterForeground;
- (void)getCurrentLocationWithCompletion:(id /* block */)arg1;
- (id /* block */)pendingAuthCompletion;
- (void)setPendingAuthCompletion:(id /* block */)arg1;
- (id)locationLogic;
- (void)setLocationLogic:(id)arg1;
- (id)pendingLocationCompletions;
- (void)setPendingLocationCompletions:(id)arg1;
- (BOOL)isRequestingLocation;
- (void)setIsRequestingLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end
