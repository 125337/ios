@interface WXGRoamBackupPackageBridge : NSObject <AffRoamProviderBase, WXGRoamBackendHandlerDelegate, WXGRoamBackupPackageBridgeDelegate, WXGRoamCloudHandlerDelegate, WXGRoamImportQueueDelegate>
{
    BOOL _getChatPackageUseSingleThread; // +0x8
    id <WXGRoamBackupPackageBridgeDelegate> _delegate; // +0x10
    AffRoamProviderCallback * _affRoamCallback; // +0x18
    NSMutableDictionary * _backupperMap; // +0x20
    NSMutableDictionary * _taskMap; // +0x28
    NSMutableDictionary * _deviceMap; // +0x30
    NSMutableDictionary * _modelMap; // +0x38
    NSMutableDictionary * _importQueueMap; // +0x40
    NSMutableDictionary * _packageHandlerMap; // +0x48
    WXGRoamBackendHandler * _backendHandler; // +0x50
    WXGRoamCloudHandler * _cloudHandler; // +0x58
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x60
    NSObject<OS_dispatch_queue> * _blockQueue; // +0x68
    NSObject<OS_dispatch_queue> * _getPakageQueue; // +0x70
    NSObject<OS_dispatch_queue> * _filterQueue; // +0x78
    NSObject<OS_dispatch_queue> * _loadMediaQueue; // +0x80
    NSOperationQueue * _getPackageOperationQueue; // +0x88
    unsigned long long _getChatLogSizeTaskId; // +0x90
    NSRecursiveLock * _mapLock; // +0x98
    NSRecursiveLock * _getChatLogLock; // +0xa0
    NSRecursiveLock * _taskMapLock; // +0xa8
}
+ (id)sharedInstance;
- (void)setup;
- (void)uinit;
- (void)resetBackupPackageManager;
- (void)setAutoTestMode:(BOOL)arg1;
- (id)getAutoTestPackage;
- (id)getReportData:(unsigned long long)arg1;
- (void)connectAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)connect:(id)arg1;
- (void)disconnect:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)cloudRoamTest;
- (void)flutterCloudRoamTest:(id)arg1;
- (void)setupManager;
- (void)createFullDiffFile;
- (void)setAppBackupUIStateChanged:(BOOL)arg1;
- (id)getStandAlonePackageInfo:(id)arg1;
- (void)setPauseAutoBackupForTimes:(id)arg1 pauseTime:(unsigned long long)arg2;
- (void)setAutoBackupLastSuccessTime:(id)arg1 lastSuccessTime:(unsigned long long)arg2;
- (id)checkIncompleteTasks;
- (void)setScheduleLevel:(int)arg1;
- (id)getDebugInfo;
- (void)notifyNetworkStateChanged:(BOOL)arg1 ssid:(id)arg2;
- (void)notifyAppForegroundStateChanged:(BOOL)arg1;
- (void)triggerAutoBackupCheck;
- (void)cloudloadMediaForMessage:(id)arg1 localPath:(id)arg2 username:(id)arg3 dataID:(id)arg4 listModels:(id)arg5;
- (void)setupAutoBackupEventWithModel:(id)arg1 delayFirst:(BOOL)arg2;
- (void)getBackedUpConversationListWithModel:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)deleteBackupWithModel:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 deleteConvs:(id)arg4 deleteAll:(BOOL)arg5;
- (void)prepareWithModel:(id)arg1 callback:(id /* block */)arg2;
- (void)startBackupWithModel:(id)arg1 isAuto:(BOOL)arg2 callback:(id /* block */)arg3;
- (void)startRestoreWithModel:(id)arg1 callback:(id /* block */)arg2;
- (void)resumeWithModel:(id)arg1 callback:(id /* block */)arg2;
- (void)pauseWithModel:(id)arg1 callback:(id /* block */)arg2;
- (void)stopWithModel:(id)arg1 callback:(id /* block */)arg2;
- (int)getTaskTypeWithModel:(id)arg1;
- (id)getTaskErrorLogWithModel:(id)arg1;
- (id)getTransferStatWithModel:(id)arg1;
- (void)getAllPackageModels:(BOOL)arg1 isFirstTime:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)getAllPackageModelsCrossPlatform;
- (void)fillModelByImcompleteTask:(id)arg1 task:(id)arg2;
- (id)createTaskFromTaskInfo:(id)arg1;
- (id)getPackageById:(unsigned long long)arg1;
- (void)createPackageWithModels:(id)arg1;
- (void)updatePackageWithModels:(id)arg1;
- (void)deletePackageWithModels:(id)arg1;
- (void)refreshConversations:(unsigned long long)arg1;
- (void)setCallback:(id)arg1;
- (void)getAdamTunnelCryptoInfoAsync:(unsigned long long)arg1 cryptoMaterial:(id)arg2;
- (void)getIlinkDeviceBindingSessionAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)getChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 conversationId:(id)arg3 fromTime:(unsigned long long)arg4 toTime:(unsigned long long)arg5 offset:(unsigned long long)arg6 limit:(int)arg7;
- (void)removeMediaAsync:(unsigned long long)arg1 req:(id)arg2;
- (id)getAccountSalt;
- (void)downloadFromCdnSync:(id)arg1 fileId:(id)arg2 fileType:(int)arg3 savePath:(id)arg4 aesKey:(id)arg5;
- (void)downloadFromCdnAsync:(unsigned long long)arg1 session:(id)arg2 fileId:(id)arg3 fileType:(int)arg4 savePath:(id)arg5 aesKey:(id)arg6 isAppend:(BOOL)arg7;
- (void)getChatPackageCloudAsync:(unsigned long long)arg1 conversationId:(id)arg2 fromTime:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(int)arg5;
- (void)getChatLogSizeAsync:(unsigned long long)arg1 usernameList:(id)arg2 backupTime:(int)arg3;
- (void)onChatLogCalculateBackupChatLogFilter:(id)arg1 totalSize:(unsigned long long)arg2 fullDiffDic:(id)arg3;
- (void)insertChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(id)arg3 chatPackage:(id)arg4;
- (void)insertChatPackageCloudAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(id)arg3 chatPackage:(id)arg4;
- (void)getRoamBackupPackagesAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)setRoamBackupPackagesAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)getDeviceNetworkInfosAsync:(unsigned long long)arg1;
- (void)getDeviceAvailableStorageSpaceAsync:(unsigned long long)arg1;
- (void)getNetworkInfosAsync:(unsigned long long)arg1;
- (void)filterRestoreMediaAsync:(unsigned long long)arg1 convId:(id)arg2 svrIdList:(id)arg3 mediaIdList:(id)arg4 mediaTypeList:(id)arg5;
- (void)getAllConversationListInfoForBackupPrepareAsync:(unsigned long long)arg1 packageInfo:(id)arg2;
- (void)onRoamBackendBuildRelationSession:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetDeviceNetworkInfo:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetSeruceTunnelResponse:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetRoamBackupPackagesGetResponse:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetRoamBackupPackagesSetResponse:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamImportOneDirFinished:(unsigned long long)arg1;
- (id)bridgeQueue;
- (id)blockQueue;
- (id)getPakageQueue;
- (id)filterQueue;
- (id)loadMediaQueue;
- (id)getPackageOperationQueue;
- (id)backendHandler;
- (id)cloudHandler;
- (void)roamTaskSubscribeEvent:(id)arg1;
- (id)convertPackageToModel:(id)arg1;
- (id)convertModelToPackage:(id)arg1;
- (void)initCloudRoamManager;
- (id)getFileIdFromCloudRoam:(id)arg1;
- (unsigned long long)getFileSizeFromCloudRoam:(id)arg1;
- (void)keepScreenLight:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)affRoamCallback;
- (void)setAffRoamCallback:(id)arg1;
- (id)backupperMap;
- (void)setBackupperMap:(id)arg1;
- (id)taskMap;
- (void)setTaskMap:(id)arg1;
- (id)deviceMap;
- (void)setDeviceMap:(id)arg1;
- (id)modelMap;
- (void)setModelMap:(id)arg1;
- (id)importQueueMap;
- (void)setImportQueueMap:(id)arg1;
- (id)packageHandlerMap;
- (void)setPackageHandlerMap:(id)arg1;
- (void)setBackendHandler:(id)arg1;
- (void)setCloudHandler:(id)arg1;
- (void)setBridgeQueue:(id)arg1;
- (void)setBlockQueue:(id)arg1;
- (void)setGetPakageQueue:(id)arg1;
- (void)setFilterQueue:(id)arg1;
- (void)setLoadMediaQueue:(id)arg1;
- (void)setGetPackageOperationQueue:(id)arg1;
- (unsigned long long)getChatLogSizeTaskId;
- (void)setGetChatLogSizeTaskId:(unsigned long long)arg1;
- (id)mapLock;
- (void)setMapLock:(id)arg1;
- (id)getChatLogLock;
- (void)setGetChatLogLock:(id)arg1;
- (id)taskMapLock;
- (void)setTaskMapLock:(id)arg1;
- (BOOL)getChatPackageUseSingleThread;
- (void)setGetChatPackageUseSingleThread:(BOOL)arg1;
- (void).cxx_destruct;
@end
