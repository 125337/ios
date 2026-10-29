@interface WAPrefetchMgr : MMUserService <WAContactMgrExtension, MMServiceProtocol>
{
    NSMutableDictionary * _queue; // +0x8
    WAPrefetchGetCodeLogic * _getCodeLogic; // +0x10
    WAPreGetLaunchLogic * _preGetLaunchLogic; // +0x18
    WAPrefetchInvalidateResourceLogic * _invalidateResourceLogic; // +0x20
    NSMutableArray * _arrFetching; // +0x28
    NSMutableArray * _arrWaiting; // +0x30
    NSMutableArray * _arrWalletFetching; // +0x38
    NSMutableDictionary * _prefetchFirstOpenMarks; // +0x40
    NSMutableDictionary * _prefetchOpenMarks; // +0x48
    WAPrefetchRegisterationMark * _registerationMark; // +0x50
    NSMutableDictionary * _packageLoadInfoMap; // +0x58
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)heartBeatCheckWeappVersion;
- (void)realHeartBeatCheckWeappVersion;
- (void)cancelHeartBeatCheck;
- (void)cancelPreDownLoadAppPkgForScene:(unsigned int)arg1;
- (void)cancelPreDownLoadAppPkgForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 inScene:(unsigned int)arg5;
- (id)getAppPackagePreDownloadingSpeedForScene:(unsigned int)arg1;
- (id)getAppPackagePreDownloadingSpeedForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 inScene:(unsigned int)arg5;
- (void)tryDoPrefetchForUserName:(id)arg1;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 enableDownloadResumption:(BOOL)arg3;
- (void)tryDoPrefetchForUserName:(id)arg1 path:(id)arg2 inScene:(unsigned int)arg3;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 inScene:(unsigned int)arg4;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 inScene:(unsigned int)arg5;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 enableDownloadResumption:(BOOL)arg5 inScene:(unsigned int)arg6;
- (void)wallet_tryUpdateContactAndDoPrefetchForUsernameList:(id)arg1 pathDic:(id)arg2 inScene:(unsigned int)arg3;
- (void)wallet_cancelPrefetchContactUpdate;
- (BOOL)isContactInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (BOOL)isCodePkgInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (unsigned int)reportIdForInvalidateContact:(id)arg1;
- (unsigned int)reportIdForInvalidateCode:(id)arg1;
- (id)allInvalidateCodeAppid;
- (id)allInvalidateContactAppid;
- (void)clearInvalidateContactWithAppid:(id)arg1;
- (void)clearInvalidateCodeWithAppid:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (BOOL)isUsernameInPreDownloadBlackList:(id)arg1;
- (void)syncVersion;
- (void)checkWaitingQueue;
- (BOOL)requestVersionSyncForUsernameList:(id)arg1;
- (id)fetchNeedSyncUsageInfoAndClearOutdatedUsageInfo;
- (id)fetchNeedSyncPredonwloadInfo;
- (id)fetchNeedForceSyncUsernameList;
- (id)getAppIDFromForceSyncUsername:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleBatchSyncVersion:(id)arg1;
- (void)handlePreDownloadCGI:(id)arg1;
- (void)handlePushWxACmdMsg:(id)arg1;
- (void)handleBatchSyncVersionRespList:(id)arg1 preDownloadRequestkey:(id)arg2;
- (void)handleBatchSyncVersionRespList:(id)arg1 preDownloadRequestkey:(id)arg2 scene:(unsigned int)arg3;
- (void)tryCallbackPrefetchNoNeedGetCodeWithRequestKey:(id)arg1;
- (id)genUniqueKeyWithUsername:(id)arg1 packageKey:(id)arg2;
- (void)preCheckAndEliminateGetCodeCmd:(id)arg1;
- (BOOL)checkRespInfoIsValid:(id)arg1;
- (void)preProcessGetContactCmd:(id)arg1;
- (void)preProcessUpdateVersionCmd:(id)arg1;
- (void)preProcessGetCodeCmd:(id)arg1 preDownloadRequestkey:(id)arg2 scene:(unsigned int)arg3;
- (void)preProcessIssueContactCmd:(id)arg1;
- (void)preProcessIssueLaunchCmd:(id)arg1;
- (void)preProcessIssueDecryptCmd:(id)arg1;
- (void)preProcessBlockCgiRequestCmd:(id)arg1;
- (void)preProcessPreLaunchCmd:(id)arg1;
- (void)preProcessInvalidateCodeCmd:(id)arg1;
- (void)preProcessInvalidateContactCmd:(id)arg1;
- (void)preProcessPullGlobalConfigCmd:(id)arg1;
- (void)preProcessGetExptInfoCmd:(id)arg1;
- (void)preProcessGetJsApiControlBytesCmd:(id)arg1;
- (unsigned long long)preCheckSequenceForCmd:(id)arg1;
- (void)pushCmd:(id)arg1;
- (void)executeCmdsWithPreDownloadRequestkey:(id)arg1;
- (id)popCmd;
- (void)executeGetContactCmd:(id)arg1;
- (void)executeUpdateVersionCmd:(id)arg1;
- (id)getCodeLogic;
- (BOOL)executeGetCodeCmd:(id)arg1;
- (void)executeIssueContactCmd:(id)arg1;
- (void)executeIssueLaunchCmd:(id)arg1;
- (void)executeIssueDecryptCmd:(id)arg1;
- (void)executeBlockCgiRequestCmd:(id)arg1;
- (void)executePreGetLaunchCmd:(id)arg1;
- (void)executeInvalidateCodeCmd:(id)arg1;
- (void)executeInvalidateContactCmd:(id)arg1;
- (void)executePullGlobalConfigCmd:(id)arg1;
- (void)executeGetExptInfoCmd:(id)arg1;
- (void)executeGetJsApiControlBytesCmd:(id)arg1;
- (void)markPkgDownloadFromPrefetchWithInfoData:(id)arg1 reportKey:(unsigned int)arg2;
- (void)markPreDownloadReallyNeeded:(BOOL)arg1 forInfoData:(id)arg2;
- (void)markParallelDownloadReallyNeeded:(BOOL)arg1 forInfoData:(id)arg2;
- (void)markPrefetchPkgDidOpenWithInfoData:(id)arg1 instanceId:(id)arg2;
- (BOOL)isPrefetchMarkedWithInfoData:(id)arg1 inMarkDic:(id)arg2;
- (void)deletePrefetchMarkForInfoData:(id)arg1 inMarkQueue:(id)arg2;
- (void)deletePrefetchMarkForInfoData:(id)arg1;
- (void)deletePrefetchMarkForUsername:(id)arg1 inMarkQueue:(id)arg2;
- (void)deletePrefetchMarkForUsername:(id)arg1;
- (void)saveLocalMarkData;
- (id)resumeLocalFirstOpenMarkData;
- (id)resumeLocalOpenMarkData;
- (BOOL)isPrefetchSceneRegisteredGetCodeSequenceCheck:(unsigned long long)arg1;
- (void)registerPrefetchGetCodeSequenceCheckForScene:(unsigned long long)arg1;
- (void)saveLocalPrefetchRegisterationMarkData;
- (id)resumeLocalPrefetchRegisterationMarkData;
- (id)getOrCreatePackageLoadInfoForAppId:(id)arg1;
- (id)getPackageLoadInfoForAppId:(id)arg1;
- (void)clearPackageLoadInfoForAppId:(id)arg1;
- (void)updateOptimizationPackageLoadInfoWithInfoData:(id)arg1 needDownload:(BOOL)arg2 optimization:(unsigned long long)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setGetCodeLogic:(id)arg1;
- (id)preGetLaunchLogic;
- (void)setPreGetLaunchLogic:(id)arg1;
- (id)invalidateResourceLogic;
- (void)setInvalidateResourceLogic:(id)arg1;
- (id)arrFetching;
- (void)setArrFetching:(id)arg1;
- (id)arrWaiting;
- (void)setArrWaiting:(id)arg1;
- (id)arrWalletFetching;
- (void)setArrWalletFetching:(id)arg1;
- (id)prefetchFirstOpenMarks;
- (void)setPrefetchFirstOpenMarks:(id)arg1;
- (id)prefetchOpenMarks;
- (void)setPrefetchOpenMarks:(id)arg1;
- (id)registerationMark;
- (void)setRegisterationMark:(id)arg1;
- (id)packageLoadInfoMap;
- (void)setPackageLoadInfoMap:(id)arg1;
- (void).cxx_destruct;
@end
