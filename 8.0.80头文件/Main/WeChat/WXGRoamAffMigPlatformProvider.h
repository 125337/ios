@interface WXGRoamAffMigPlatformProvider : NSObject <AffMigPlatformProviderBase, WXGRoamImportQueueDelegate, BLEDeviceManagerDelegate, IChatLogDataMgrExt, FlutterMigrateUICallback>
{
    BOOL _isEmigration; // +0x8
    BOOL _mIsPcMigration; // +0x9
    BOOL _mIsTransfering; // +0xa
    BOOL _isNormalTask; // +0xb
    BOOL _enteredImporting; // +0xc
    AffMigPlatformProviderCallback * _migPlatformProviderCb; // +0x10
    WXGRoamPackageHandler * _packageHandler; // +0x18
    NSRecursiveLock * _mapLock; // +0x20
    NSOperationQueue * _getPackageOperationQueue; // +0x28
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x30
    NSMutableDictionary * _importQueueMap; // +0x38
    WXGRoamImportScheduler * _importScheduler; // +0x40
    NSData * _bleAuthKey; // +0x48
    NSObject<OS_dispatch_semaphore> * _chatLogSemaphore; // +0x50
    NSMutableDictionary * _wholeDbMigrationContexts; // +0x58
}
+ (id)sharedInstance;
- (id)init;
- (id)getGetPackageOperationQueue;
- (void)setCallback:(id)arg1;
- (id)getBridgeQueue;
- (id)getImportScheduler;
- (void)getChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 conversationId:(id)arg3 fromTime:(unsigned long long)arg4 toTime:(unsigned long long)arg5 offset:(unsigned long long)arg6 limit:(int)arg7 textOnly:(BOOL)arg8 descending:(BOOL)arg9;
- (void)getChatPackageForWholeDbAsync:(unsigned long long)arg1 dbIndex:(int)arg2 conversationId:(id)arg3 fromTime:(unsigned long long)arg4 toTime:(unsigned long long)arg5 offset:(unsigned long long)arg6 limit:(int)arg7 textOnly:(BOOL)arg8;
- (void)insertChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(id)arg3 chatPackage:(id)arg4;
- (void)insertChatPackageAsyncOPT:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(id)arg3 chatPackage:(id)arg4;
- (void)filterRestoreMediaAsync:(unsigned long long)arg1 convId:(id)arg2 svrIdList:(id)arg3 mediaIdList:(id)arg4 mediaTypeList:(id)arg5;
- (void)insertRefMediaAsync:(unsigned long long)arg1 convId:(id)arg2 refItems:(id)arg3;
- (id)getMessageDbPaths;
- (id)listConvMd5FromDb:(id)arg1;
- (id)getMediaRootPaths;
- (void)getConvDbIndexAlgorithmAsync:(unsigned long long)arg1;
- (BOOL)setMigrationPackagePath:(int)arg1 tmpDbPath:(id)arg2 tmpMediaRoot:(id)arg3 srcMd5Username:(id)arg4;
- (BOOL)hasLoginStatus;
- (long long)getDbSize;
- (void)requestSetupEnvWithUsernameAsync:(unsigned long long)arg1 hashUsername:(id)arg2;
- (void)getBatteryLevelAsync:(unsigned long long)arg1;
- (void)verifyUserDBAsync:(unsigned long long)arg1 username:(id)arg2;
- (id)getDeviceInfo;
- (void)notifyTaskStatus:(id)arg1;
- (void)reportNormalImportResultIfNeeded:(int)arg1;
- (void)notifyTaskScene:(id)arg1;
- (void)notifyTaskProgress:(id)arg1;
- (BOOL)isPcMigration;
- (BOOL)isEmigrationMode;
- (BOOL)isTransfering;
- (BOOL)isRemoteClientSupportWXAM:(unsigned int)arg1;
- (BOOL)isRemoteClientSupportOpusVoice:(unsigned int)arg1;
- (BOOL)isRemoteClientSupportHeic:(unsigned int)arg1 pairedDevice:(int)arg2;
- (BOOL)isRemoteClientSupportH265:(unsigned int)arg1;
- (void)getWifiNameAsync:(unsigned long long)arg1;
- (BOOL)isWiFiEnable;
- (BOOL)isWiFiConnected;
- (id)getWiFiIP;
- (BOOL)isEnableCrossNear;
- (void)checkWiFiDirectPermissionAsync:(unsigned long long)arg1;
- (int)checkLocalNetworkPermission;
- (void)onRoamImportOneDirFinished:(unsigned long long)arg1;
- (void)onRoamImportFinished:(unsigned long long)arg1;
- (id)bleManager;
- (void)startBLEAdvertisingAsync:(unsigned long long)arg1;
- (void)stopBLEAdvertisingAsync:(unsigned long long)arg1;
- (void)startBLEScanningAsync:(unsigned long long)arg1 characteristicUUID:(id)arg2;
- (void)stopBLEScanningAsync:(unsigned long long)arg1;
- (void)sendBLEMessageAsync:(unsigned long long)arg1 deviceId:(id)arg2 type:(int)arg3 data:(id)arg4;
- (void)broadcastBLEMessageAsync:(unsigned long long)arg1 type:(int)arg2 data:(id)arg3;
- (void)connectBLEDeviceAsync:(unsigned long long)arg1 deviceId:(id)arg2;
- (void)disconnectBLEDeviceAsync:(unsigned long long)arg1 deviceId:(id)arg2;
- (BOOL)isBLEConnected;
- (void)setBLEAuthKey:(id)arg1;
- (void)cleanupBLE;
- (void)bleDeviceManager:(id)arg1 didDiscoverDevice:(id)arg2 deviceName:(id)arg3 rssi:(long long)arg4;
- (void)bleDeviceManager:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3;
- (void)bleDeviceManager:(id)arg1 didConnectToDevice:(id)arg2;
- (void)bleDeviceManager:(id)arg1 didDisconnectFromDevice:(id)arg2;
- (void)getMigrationConvListAsync:(unsigned long long)arg1;
- (void)getAllConversationAsync:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 excludeMedia:(BOOL)arg4;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)onFlutterMigrateUIDidAppear;
- (void)onFlutterMigrateUIDidDisappear;
- (void)onFlutterMigrateUIDidDealloc;
- (id)_buildConvTypeMap;
- (void)reportGetAllConversation:(unsigned int)arg1 Duration:(unsigned long long)arg2 Size:(unsigned long long)arg3 SessionCount:(unsigned long long)arg4 UsedCache:(BOOL)arg5;
- (id)migPlatformProviderCb;
- (void)setMigPlatformProviderCb:(id)arg1;
- (id)packageHandler;
- (void)setPackageHandler:(id)arg1;
- (id)mapLock;
- (void)setMapLock:(id)arg1;
- (id)getPackageOperationQueue;
- (void)setGetPackageOperationQueue:(id)arg1;
- (id)bridgeQueue;
- (void)setBridgeQueue:(id)arg1;
- (id)importQueueMap;
- (void)setImportQueueMap:(id)arg1;
- (id)importScheduler;
- (void)setImportScheduler:(id)arg1;
- (BOOL)isEmigration;
- (void)setIsEmigration:(BOOL)arg1;
- (BOOL)mIsPcMigration;
- (void)setMIsPcMigration:(BOOL)arg1;
- (BOOL)mIsTransfering;
- (void)setMIsTransfering:(BOOL)arg1;
- (BOOL)isNormalTask;
- (void)setIsNormalTask:(BOOL)arg1;
- (BOOL)enteredImporting;
- (void)setEnteredImporting:(BOOL)arg1;
- (id)bleAuthKey;
- (void)setBleAuthKey:(id)arg1;
- (id)chatLogSemaphore;
- (void)setChatLogSemaphore:(id)arg1;
- (id)wholeDbMigrationContexts;
- (void)setWholeDbMigrationContexts:(id)arg1;
- (void).cxx_destruct;
@end
