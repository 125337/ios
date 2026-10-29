@interface WAPrefetchGetCodeLogic : MMObject <WAPackageDownloadUrlFetcherExtension, IWALocalCacheMgrExt, CNetworkStatusExt>
{
    NSMutableArray * _arrRequestingCmd; // +0x8
    NSMutableArray * _arrWaitingCmd; // +0x10
    NSMutableDictionary * _dicDownloadConfig; // +0x18
}
- (id)init;
- (void)enableDownloadResumptionForKey:(id)arg1;
- (BOOL)isEnableDownloadResumptionForKey:(id)arg1;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)resumeLocalData;
- (BOOL)executeGetCodeCmd:(id)arg1;
- (void)startGetCodeWithCmd:(id)arg1;
- (BOOL)enqueueCheck:(id)arg1;
- (void)elimilateCmdFromWaitingQueueWhichPkgVersionLowerThanTargetCmd:(id)arg1;
- (unsigned long long)checkLocalVersion:(id)arg1;
- (void)addCmdIntoRequestingQueue:(id)arg1;
- (void)addCmdIntoWaitingQueue:(id)arg1;
- (id)getRequestingCmdForAppInfoData:(id)arg1;
- (unsigned int)getNetworkType;
- (BOOL)checkCurrentNetworkValidForCmd:(id)arg1;
- (BOOL)isNetworkTypeBetter4G:(unsigned int)arg1;
- (BOOL)isNetworkTypeBetter3G:(unsigned int)arg1;
- (BOOL)isNetworkTypeBetter2G:(unsigned int)arg1;
- (BOOL)isAppInfoDataInDownloadingCode:(id)arg1;
- (void)cancelDownloadForScene:(unsigned int)arg1;
- (void)cancelPreDownLoadAppPkgForRequestKey:(id)arg1 scene:(unsigned int)arg2;
- (id)getDownloadSpeedArrayForScene:(unsigned int)arg1;
- (id)getDownloadSpeedForRequestKey:(id)arg1 scene:(unsigned int)arg2;
- (void)removeDownloadingCmdForInfoData:(id)arg1;
- (void)removeDownloadingCmd:(id)arg1;
- (void)removeWaitingCmd:(id)arg1;
- (void)removeCmd:(id)arg1;
- (void)saveLocalData;
- (void)checkWaitingQueue;
- (id)getPrefetchId;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)arg1 zstdUrl:(id)arg2 patchUrl:(id)arg3 forInfoData:(id)arg4;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)arg1 forInfoData:(id)arg2;
- (BOOL)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (BOOL)isCmdReachMaxRetryCount:(id)arg1;
- (void)markRequestDidFailedCmd:(id)arg1 infoData:(id)arg2;
- (id)arrRequestingCmd;
- (void)setArrRequestingCmd:(id)arg1;
- (id)arrWaitingCmd;
- (void)setArrWaitingCmd:(id)arg1;
- (id)dicDownloadConfig;
- (void)setDicDownloadConfig:(id)arg1;
- (void).cxx_destruct;
@end

