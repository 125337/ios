@interface SystemAuthorizationCheck : MMUserService <ILocationMgrExt, CLLocationManagerDelegate, MMServiceProtocol>
{
    CLLocationManager * _locationManager; // +0x8
    LocationAuthorizationInfo * _locationAuthorizationInfo; // +0x10
}
+ (void)initMonitor;
+ (BOOL)isAPPFirstTimeRuning;
+ (unsigned int)getAuthStatusByItem:(unsigned int)arg1;
+ (unsigned int)getPhotoLibraryAuthorizationStatus;
+ (unsigned int)getPhotoLibraryAuthorizationStatusForAccessLevel:(unsigned long long)arg1;
+ (unsigned int)getCameraAuthorizationStatus;
+ (unsigned int)getContactsAuthorizationStatus;
+ (unsigned int)getMicrophoneAuthorizationStatus;
+ (unsigned int)getLocationAuthorizationStatus;
+ (unsigned int)getBluetoothAuthorizationStatusForIOS13_1;
+ (unsigned int)getBluetoothPeripheralAuthorizationStatus;
+ (id)getSettingNotifyState;
+ (unsigned int)getSportsAuthorizationStatus;
+ (id)currentVisibleAuthorizationItems;
- (id)init;
- (void)dealloc;
- (id)currentVc;
- (int)locationAuthStatus;
- (void)updateCachedLocationStatus:(int)arg1;
- (void)logAndReportAuthorizationItem:(id)arg1 item:(unsigned int)arg2 action:(unsigned int)arg3;
- (void)onCNCopySupportedInterfaces;
- (void)onRequestLocationAuthorization;
- (void)onRequestLocationUpdating:(unsigned long long)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)onGetWifiInfo;
- (void)reportVoiceOverIfOn;
- (void)listenVoiceOver;
- (void)reportElderMode;
- (void)startCheck;
- (void)reportWCFontLevel;
- (void)reportAuthorizationStatus:(id)arg1;
- (void)reportSettingNotify;
- (void)reportReaderSetting;
- (BOOL)shouldReport;
- (void)updateReportTime;
- (unsigned long long)getNotificationAuthorizationStatus:(id)arg1;
- (id)locationManager;
- (void)setLocationManager:(id)arg1;
- (id)locationAuthorizationInfo;
- (void)setLocationAuthorizationInfo:(id)arg1;
- (void).cxx_destruct;
@end
