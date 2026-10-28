@interface TPDownloadProxyNative : NSObject
{
    BOOL _enableCheckLocalServer; // +0x8
    BOOL _enableCheckLocalServerOnCreate; // +0x9
    BOOL _isNativeInit; // +0xa
    BOOL _isReinitFinish; // +0xb
    int _timeoutMs; // +0xc
    int _localServerCheckTimeInterval; // +0x10
    NSObject<OS_dispatch_queue> * _checkActiveQueue; // +0x18
    NSString * _currentStoragePath; // +0x20
    NSMutableDictionary * _serviceTypeParams; // +0x28
    unsigned long long _bgTask; // +0x30
    NSRecursiveLock * _serviceLock; // +0x38
    unsigned long long _lastCheckTimeMs; // +0x40
}
+ (id)sharedInstance;
- (id)init;
- (int)initService:(int)arg1 param:(id)arg2;
- (int)deinitService:(int)arg1;
- (unsigned long long)genCurrentTimeInMs;
- (void)reinitServiceWithReason:(long long)arg1;
- (void)checkLocalServerActive:(long long)arg1;
- (void)checkLocalServerActive:(long long)arg1 completion:(id /* block */)arg2;
- (int)updateStoragePathWithServiceType:(int)arg1 path:(id)arg2;
- (int)setMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (id)getVersion;
- (id)getErrorCodeStr:(int)arg1;
- (id)getNativeInfo:(int)arg1;
- (int)checkResourceStatus:(id)arg1 resourceID:(id)arg2 fileFormat:(int)arg3;
- (long long)getResourceSize:(id)arg1 resourceID:(id)arg2;
- (id)getHLSOfflineExttagWithVid:(id)arg1 linkVid:(id)arg2 formatId:(int)arg3 randomNum:(long long)arg4;
- (void)setUserData:(id)arg1 value:(id)arg2;
- (void)setServiceConfig:(int)arg1 value:(id)arg2;
- (void)pushEvent:(long long)arg1;
- (int)createDownloadTask:(int)arg1 fileId:(id)arg2 dlType:(int)arg3 clipCount:(int)arg4;
- (int)setClipInfo:(int)arg1 clipNo:(int)arg2 clipKeyId:(id)arg3 dlType:(int)arg4 urls:(id)arg5 savePath:(id)arg6 extraInfo:(id)arg7;
- (id)getClipPlayUrl:(int)arg1 clipNo:(int)arg2 urlType:(int)arg3;
- (int)startDownload:(int)arg1;
- (int)stopDownload:(int)arg1;
- (int)pauseDownload:(int)arg1;
- (int)resumeDownload:(int)arg1;
- (int)deleteCacheWithResourceId:(id)arg1;
- (int)clearCache:(id)arg1 resourceId:(id)arg2 mode:(unsigned long long)arg3;
- (long long)verifyOfflineCacheSync:(id)arg1 fileFormat:(int)arg2 resourceId:(id)arg3 keyId:(id)arg4;
- (void)setPlayerState:(int)arg1 state:(int)arg2;
- (void)updateTaskInfo:(int)arg1 key:(id)arg2 value:(id)arg3;
- (void)updatePlayerPlayMsgWithTaskId:(int)arg1 playPositionSecond:(int)arg2 playerRemainTimeSecond:(int)arg3 advRemainTimeSecond:(int)arg4;
- (void)setTask:(int)arg1 ResourceloaderProxyCallback:(void *)arg2;
- (BOOL)initNative;
- (void)activeService;
- (void)enterBackground:(id)arg1;
- (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)arg1;
- (void)enterForeground:(id)arg1;
- (void)appwillTerminate:(id)arg1;
- (void)receiveMemoryWarning:(id)arg1;
- (void)backgroundTaskHandler;
- (int)timeoutMs;
- (void)setTimeoutMs:(int)arg1;
- (int)localServerCheckTimeInterval;
- (void)setLocalServerCheckTimeInterval:(int)arg1;
- (BOOL)enableCheckLocalServer;
- (void)setEnableCheckLocalServer:(BOOL)arg1;
- (BOOL)enableCheckLocalServerOnCreate;
- (void)setEnableCheckLocalServerOnCreate:(BOOL)arg1;
- (id)checkActiveQueue;
- (void)setCheckActiveQueue:(id)arg1;
- (id)currentStoragePath;
- (void)setCurrentStoragePath:(id)arg1;
- (BOOL)isNativeInit;
- (void)setIsNativeInit:(BOOL)arg1;
- (id)serviceTypeParams;
- (void)setServiceTypeParams:(id)arg1;
- (unsigned long long)bgTask;
- (void)setBgTask:(unsigned long long)arg1;
- (BOOL)isReinitFinish;
- (void)setIsReinitFinish:(BOOL)arg1;
- (id)serviceLock;
- (void)setServiceLock:(id)arg1;
- (unsigned long long)lastCheckTimeMs;
- (void)setLastCheckTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
