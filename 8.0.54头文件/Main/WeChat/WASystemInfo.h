@interface WASystemInfo : MMRootService <CLLocationManagerDelegate, CBCentralManagerDelegate, CNetworkStatusExt, IMMFontMgrExt, IMMLanguageMgrExt, MMServiceProtocol>
{
    BOOL _started; // +0x8
    BOOL _checkBlueTooth; // +0x9
    BOOL _isApplicationStateActive; // +0xa
    BOOL _clientNetworkIsWeakNet; // +0xb
    BOOL _isAllInfoUpdated; // +0xc
    unsigned int _wechatConnectType; // +0x10
    NSDictionary * _systemInfoDic; // +0x18
    CBCentralManager * _bluetoothManager; // +0x20
    NSMutableArray * _syncUpdateSelArr; // +0x28
    unsigned long long _currentSyncUpdateIdx; // +0x30
    CLLocationManager * _locationManager; // +0x38
    MMTimer * _updateTimer; // +0x40
    MMFullScreenShadeViewController * _fullScreenShadeVC; // +0x48
    double _allInfoUpdateTime; // +0x50
}
- (id)init;
- (void)initSyncUpdateSelArr;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)getSystemInfo;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidFinishLaunching:(id)arg1;
- (void)didOrientationChanged;
- (void)didStatusBarFrameChanged;
- (void)tryStartUpdateSystemInfo;
- (void)onTimeUpdateSystemInfo;
- (void)initSystemInfo;
- (void)updateSystemInfo;
- (id)startCheckBlueTooth:(BOOL)arg1;
- (void)createBluetoothManager;
- (void)makeBlueToothInfo:(id)arg1;
- (void)updateByDictionary:(id)arg1;
- (void)updateByKey:(id)arg1 value:(id)arg2;
- (void)updateRegularSystemInfo;
- (id)stateByAuthorized:(BOOL)arg1 notDetermined:(BOOL)arg2;
- (void)updateSystemPermissionInfo;
- (void)stepSyncUpdate;
- (void)syncUpdateHardWare;
- (void)syncUpdateWifi;
- (void)syncUpdatePhoto;
- (void)syncUpdateCamera;
- (void)syncUpdateMicrophone;
- (void)syncUpdateBlueTooth;
- (void)syncUpdateBattery;
- (void)syncUpdateCalendar;
- (void)asyncUpdateLocationServicesEnabled;
- (void)asyncUpdateNotification;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)onPowerStateChange;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onClientNetworkWeakChange:(BOOL)arg1;
- (BOOL)isClientNetworkInWeakNet;
- (BOOL)isWechatDisconnected;
- (BOOL)isWechatConnected;
- (unsigned int)currentWeakNetReportType;
- (void)onWeAppNetworkWeakChange:(BOOL)arg1;
- (void)cancelClientNetworkRecoverTimer;
- (void)startClientNetworkRecoverTimer;
- (void)onTimerClientNetworkRecover;
- (void)tryRequestWhenInUseAuthorization:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)showFullScreenNoticeVCWithConfig:(id)arg1;
- (void)tryHideFullScreenNoticeVC;
- (void)onFontSizeChange;
- (void)syncUpdateFontSize;
- (void)onLanguageChange;
- (void)onTranslateLanguageChange;
- (void)syncUpdateLanguage;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (id)systemInfoDic;
- (void)setSystemInfoDic:(id)arg1;
- (BOOL)checkBlueTooth;
- (void)setCheckBlueTooth:(BOOL)arg1;
- (id)bluetoothManager;
- (void)setBluetoothManager:(id)arg1;
- (id)syncUpdateSelArr;
- (void)setSyncUpdateSelArr:(id)arg1;
- (unsigned long long)currentSyncUpdateIdx;
- (void)setCurrentSyncUpdateIdx:(unsigned long long)arg1;
- (id)locationManager;
- (void)setLocationManager:(id)arg1;
- (id)updateTimer;
- (void)setUpdateTimer:(id)arg1;
- (BOOL)isApplicationStateActive;
- (void)setIsApplicationStateActive:(BOOL)arg1;
- (BOOL)clientNetworkIsWeakNet;
- (void)setClientNetworkIsWeakNet:(BOOL)arg1;
- (unsigned int)wechatConnectType;
- (void)setWechatConnectType:(unsigned int)arg1;
- (id)fullScreenShadeVC;
- (void)setFullScreenShadeVC:(id)arg1;
- (BOOL)isAllInfoUpdated;
- (void)setIsAllInfoUpdated:(BOOL)arg1;
- (double)allInfoUpdateTime;
- (void)setAllInfoUpdateTime:(double)arg1;
- (void).cxx_destruct;
@end

