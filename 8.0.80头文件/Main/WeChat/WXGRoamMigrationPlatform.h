@interface WXGRoamMigrationPlatform : NSObject <MigrationPlatformBase, IChatLogDataMgrExt, CNetworkStatusExt, PBMessageObserverDelegate, BLEDeviceManagerDelegate, IFTSContactMgrExt>
{
    BOOL _isFlutterDisplay; // +0x8
    MigrationPlatformCallback * _migrationPlatformCb; // +0x10
    NSObject<OS_dispatch_semaphore> * _chatLogSemaphore; // +0x18
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x20
    unsigned long long _offlineQrcodeTaskId; // +0x28
    NSString * _lastQrCode; // +0x30
    BonjourDeviceDiscoveryManager * _bonjourManager; // +0x38
    NSData * _bleAuthKey; // +0x40
    unsigned long long _currentSearchTaskId; // +0x48
    NSString * _currentSearchTaskKey; // +0x50
}
+ (id)sharedInstance;
- (id)bleManager;
- (id)init;
- (void)dealloc;
- (void)setCallback:(id)arg1;
- (void)doOfflineCgiAsync:(unsigned long long)arg1 funcId:(int)arg2 uri:(id)arg3 reqBuf:(id)arg4 extra:(id)arg5;
- (void)getAllConversationForUserNameAsync:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 excludeMedia:(BOOL)arg4 userName:(id)arg5;
- (void)searchTalkerByKeywordsAsync:(unsigned long long)arg1 keywords:(id)arg2;
- (void)cancelSearchTalkerByKeywords:(unsigned long long)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)getPcMinVersionAsync:(unsigned long long)arg1;
- (void)getDeviceIdAsync:(unsigned long long)arg1;
- (BOOL)isExDevice;
- (void)isPomEnableAsync:(unsigned long long)arg1;
- (BOOL)isLogout;
- (void)notifyToPc:(int)arg1 args:(id)arg2;
- (id)getLastQrCode;
- (id)commonCallPlatform:(id)arg1 rpcReq:(id)arg2;
- (void)commonCallPlatform2Async:(unsigned long long)arg1 rpcName:(id)arg2 rpcReq:(id)arg3;
- (void)toggleFlutterPage:(BOOL)arg1;
- (void)checkPermissionAsync:(unsigned long long)arg1;
- (void)isWifiExpensiveAsync:(unsigned long long)arg1;
- (void)getWifiNameAsync:(unsigned long long)arg1;
- (void)startDeviceDiscoveryAsync:(unsigned long long)arg1;
- (void)stopDeviceDiscovery;
- (void)createGroupAsync:(unsigned long long)arg1;
- (void)connectToGroupAsync:(unsigned long long)arg1 networkName:(id)arg2 passphrase:(id)arg3;
- (void)startBLEAdvertisingAsync:(unsigned long long)arg1;
- (void)stopBLEAdvertisingAsync:(unsigned long long)arg1;
- (void)startBLEScanningAsync:(unsigned long long)arg1 characteristicUUID:(id)arg2;
- (void)stopBLEScanningAsync:(unsigned long long)arg1;
- (void)sendBLEMessageAsync:(unsigned long long)arg1 deviceId:(id)arg2 type:(int)arg3 data:(id)arg4;
- (void)broadcastBLEMessageAsync:(unsigned long long)arg1 deviceId:(id)arg2 type:(int)arg3 data:(id)arg4;
- (void)connectBLEDeviceAsync:(unsigned long long)arg1 deviceId:(id)arg2;
- (void)disconnectBLEDeviceAsync:(unsigned long long)arg1 deviceId:(id)arg2;
- (void)setBLEAuthKey:(id)arg1;
- (void)setBLEAuthKeyAsync:(unsigned long long)arg1 authKey:(id)arg2;
- (void)cleanupBLE;
- (id)getWiFiIP;
- (id)getDeviceName;
- (BOOL)isEnableCrossNear;
- (void)isEnableCrossNearAsync:(unsigned long long)arg1;
- (void)triggerLocalNetworkAlertSyncTimeout;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (id)getBridgeQueue;
- (id)_buildSearchResultItem:(id)arg1 matchTip:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleResp:(id)arg1;
- (void)bleDeviceManager:(id)arg1 didDiscoverDevice:(id)arg2 deviceName:(id)arg3 rssi:(long long)arg4;
- (void)bleDeviceManager:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3;
- (void)bleDeviceManager:(id)arg1 didConnectToDevice:(id)arg2;
- (void)bleDeviceManager:(id)arg1 didDisconnectFromDevice:(id)arg2;
- (id)migrationPlatformCb;
- (void)setMigrationPlatformCb:(id)arg1;
- (id)chatLogSemaphore;
- (void)setChatLogSemaphore:(id)arg1;
- (id)bridgeQueue;
- (void)setBridgeQueue:(id)arg1;
- (unsigned long long)offlineQrcodeTaskId;
- (void)setOfflineQrcodeTaskId:(unsigned long long)arg1;
- (id)lastQrCode;
- (void)setLastQrCode:(id)arg1;
- (BOOL)isFlutterDisplay;
- (void)setIsFlutterDisplay:(BOOL)arg1;
- (id)bonjourManager;
- (void)setBonjourManager:(id)arg1;
- (id)bleAuthKey;
- (void)setBleAuthKey:(id)arg1;
- (unsigned long long)currentSearchTaskId;
- (void)setCurrentSearchTaskId:(unsigned long long)arg1;
- (id)currentSearchTaskKey;
- (void)setCurrentSearchTaskKey:(id)arg1;
- (void).cxx_destruct;
@end
