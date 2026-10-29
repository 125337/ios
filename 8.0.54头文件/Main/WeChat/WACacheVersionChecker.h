@interface WACacheVersionChecker : NSObject <IWALocalCacheMgrExt>
{
    unsigned long long _checkScene; // +0x8
    BOOL _isCancelled; // +0x10
    id /* block */ _completeHandler; // +0x18
    id /* block */ _progressHandler; // +0x20
    NSMutableArray * _arrNeedDownloadInfoDatas; // +0x28
    NSMutableArray * _arrDownloadInfoData; // +0x30
    WAPackageConfig * _packageConfig; // +0x38
    NSString * _relativePath; // +0x40
    WACacheVersionPreChecker * _preChecker; // +0x48
    unsigned long long _startDownloadTime; // +0x50
    BOOL _isDownloadStart; // +0x58
    BOOL _hasReported; // +0x59
    unsigned int _debugType; // +0x5c
    NSString * _instanceId; // +0x60
    unsigned long long _updatePackageStartTime; // +0x68
    WAInfoData * _appInfoData; // +0x70
    NSString * _appID; // +0x78
    WACacheVersionCheckerContext * _checkerContext; // +0x80
}
+ (id)getErrMsgFromErrorCode:(long long)arg1 debugType:(unsigned long long)arg2;
+ (void)checkCacheReadyWithAppid:(id)arg1 debugModeType:(unsigned int)arg2 checkerContext:(id)arg3 completeHandler:(id /* block */)arg4 progressHandler:(id /* block */)arg5;
- (id)initWithAppID:(id)arg1 debugType:(unsigned int)arg2;
- (void)checkCacheReadyWithCheckerContext:(id)arg1 completeHandler:(id /* block */)arg2 progressHandler:(id /* block */)arg3;
- (void)triggerParallelDownloadWithCheckerContext:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)cancel;
- (BOOL)copyInsteadDownloadForInfoDataThatAlreadyDownloadedSameCheckSum:(id)arg1;
- (void)downloadInfoDatas:(id)arg1;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)arg1;
- (BOOL)tryTriggerDownloadFromParallelCacheForInfoData:(id)arg1;
- (BOOL)isMatchInfoData:(id)arg1 andResponseItem:(id)arg2;
- (void)reportResponse:(id)arg1;
- (void)handleGetPkgDownloadUrl:(id)arg1;
- (void)updateDebugModeNotifyInfoIfNeeded:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (BOOL)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)addDownloadInfoData:(id)arg1;
- (unsigned long long)downloadInfoDataCount;
- (BOOL)hasDownloadInfoData:(id)arg1;
- (void)removeDownloadInfoData:(id)arg1;
- (void)callCompletionHandlerWithSuccess:(BOOL)arg1 errorCode:(long long)arg2;
- (void)reportCheckResult:(BOOL)arg1 errorCode:(long long)arg2;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(id)arg4;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)reportParallelFailFallBack:(id)arg1;
- (void)reportIntallOrUpdateInfo:(BOOL)arg1 errorCode:(unsigned int)arg2;
- (void)reportPluginCodesDownloadIDKey:(BOOL)arg1 packageType:(unsigned long long)arg2;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)updatePackageStartTime;
- (void)setUpdatePackageStartTime:(unsigned long long)arg1;
- (id)appInfoData;
- (void)setAppInfoData:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)debugType;
- (void)setDebugType:(unsigned int)arg1;
- (id)checkerContext;
- (void)setCheckerContext:(id)arg1;
- (void).cxx_destruct;
@end

