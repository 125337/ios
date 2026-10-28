@interface WXGRoamAffMigPlatformProvider : NSObject <AffMigPlatformProviderBase, WXGRoamImportQueueDelegate>
{
    BOOL _isEmigration; // +0x8
    BOOL _mIsPcMigration; // +0x9
    BOOL _mIsTransfering; // +0xa
    AffMigPlatformProviderCallback * _migPlatformProviderCb; // +0x10
    WXGRoamPackageHandler * _packageHandler; // +0x18
    NSRecursiveLock * _mapLock; // +0x20
    NSOperationQueue * _getPackageOperationQueue; // +0x28
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x30
    NSMutableDictionary * _importQueueMap; // +0x38
}
+ (id)sharedInstance;
- (id)getGetPackageOperationQueue;
- (void)setCallback:(id)arg1;
- (id)getBridgeQueue;
- (void)getChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 conversationId:(id)arg3 fromTime:(unsigned long long)arg4 toTime:(unsigned long long)arg5 offset:(unsigned long long)arg6 limit:(int)arg7 textOnly:(BOOL)arg8;
- (void)insertChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(id)arg3 chatPackage:(id)arg4;
- (void)filterRestoreMediaAsync:(unsigned long long)arg1 convId:(id)arg2 svrIdList:(id)arg3 mediaIdList:(id)arg4 mediaTypeList:(id)arg5;
- (void)requestSetupEnvWithUsernameAsync:(unsigned long long)arg1 hashUsername:(id)arg2;
- (id)getDeviceInfo;
- (void)notifyTaskStatus:(id)arg1;
- (void)notifyTaskScene:(id)arg1;
- (void)notifyTaskProgress:(id)arg1;
- (BOOL)isPcMigration;
- (BOOL)isEmigrationMode;
- (BOOL)isTransfering;
- (BOOL)isRemoteClientSupportWXAM:(unsigned int)arg1;
- (void)onRoamImportOneDirFinished:(unsigned long long)arg1;
- (void)onRoamImportFinished:(unsigned long long)arg1;
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
- (BOOL)isEmigration;
- (void)setIsEmigration:(BOOL)arg1;
- (BOOL)mIsPcMigration;
- (void)setMIsPcMigration:(BOOL)arg1;
- (BOOL)mIsTransfering;
- (void)setMIsTransfering:(BOOL)arg1;
- (void).cxx_destruct;
@end
