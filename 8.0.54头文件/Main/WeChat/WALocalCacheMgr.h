@interface WALocalCacheMgr : MMUserService <WAPackageDownloadLogicDelegate, MMServiceProtocol>
{
    WAPackageDownloadLogic * _pkgDownloadLogic; // +0x8
    WAPackageInfoCacheLogic * _pkgInfoCacheLogic; // +0x10
    NSMutableDictionary * _dicDownloadingUrlToDownloadInfo; // +0x18
    NSMutableDictionary * _dicDownloadedTime; // +0x20
    NSMutableSet * _setPackageChecksumVerified; // +0x28
}
+ (id)getDebugInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
+ (id)getDefaultInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
+ (id)getDebugModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (void)setupInitializeInfoData:(id)arg1 withAppId:(id)arg2 userName:(id)arg3;
+ (unsigned int)getPkgEncryptVersion:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)verifyLocalCacheChecksum:(id)arg1;
- (BOOL)hasLoadPkgInfoLocalCache:(id)arg1;
- (void)unloadPkgLocalCacheIfDifferentPackageType:(id)arg1;
- (BOOL)loadPkgInfoLocalCache:(id)arg1;
- (BOOL)tryLoadReleasePkgInfoLocalCacheWithContact:(id)arg1;
- (void)clearAllPkgInfoWhenNoAppRunning;
- (BOOL)isDownloadingWithThisFullPkgDownloadURL:(id)arg1 orFullPkgUrlWithZstd:(id)arg2 orPatchUrl:(id)arg3;
- (BOOL)isDownloadingWithInfoData:(id)arg1;
- (BOOL)downloadAppPkgWithAppInfoData:(id)arg1 fullPkgUrl:(id)arg2 fullPkgUrlWithZstd:(id)arg3 patchUrlStr:(id)arg4 downloadScene:(unsigned long long)arg5;
- (BOOL)downloadAppPkgWithAppInfoData:(id)arg1 fullPkgUrl:(id)arg2 fullPkgUrlWithZstd:(id)arg3 patchUrlStr:(id)arg4 downloadScene:(unsigned long long)arg5 enableDownloadResumption:(BOOL)arg6;
- (void)cancelDownLoadAppPkgWithAppInfoData:(id)arg1;
- (void)downloadAppPkgWithDownloadInfo:(id)arg1 realDownloadUrl:(id)arg2 downloadScene:(unsigned long long)arg3;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(id)arg4;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3 protocolInfo:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)subThread_onDownloadSuccessWithDownloadInfo:(id)arg1 errorType:(long long)arg2 taskUrl:(id)arg3 filePath:(id)arg4 protocolInfo:(id)arg5 totalLength:(unsigned long long)arg6;
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(id)arg2;
- (void)notifyOnCompleteExtension:(BOOL)arg1 errorCode:(unsigned int)arg2 errorMsg:(id)arg3 pkgUrl:(id)arg4 moduleName:(id)arg5 usePatch:(BOOL)arg6 protocolInfo:(id)arg7;
- (void)innerNotifyOnCompleteExtension:(BOOL)arg1 errorCode:(unsigned int)arg2 errorMsg:(id)arg3 pkgUrl:(id)arg4 moduleName:(id)arg5 usePatch:(BOOL)arg6 protocolInfo:(id)arg7;
- (void)reportDownloadResult:(BOOL)arg1 errCode:(unsigned int)arg2 forDownloadInfo:(id)arg3 withDetailInfo:(id)arg4;
- (void)reportDownloadDetailForDownloadInfo:(id)arg1 withDetailInfo:(id)arg2 errCode:(unsigned int)arg3;
- (void)onUpdateDataRecordWhenGetValidPkg:(id)arg1;
- (BOOL)updateWeAppInfoData:(id)arg1;
- (BOOL)isNeedDownloadDebugModePkg:(id)arg1;
- (unsigned long long)getPackageTypeByNotifyInfo:(id)arg1 appServiceType:(unsigned int)arg2;
- (BOOL)isNeedDownloadDebugModePkgWithDebugInfo:(id)arg1 appServiceType:(unsigned int)arg2;
- (BOOL)hasLocalCacheDataWithFullUrl:(id)arg1;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
- (unsigned long long)getCacheFileSizeWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4 prefix:(id)arg5 suffix:(id)arg6;
- (id)getLocalCacheDataWithBaseUrl:(id)arg1 relativeUrl:(id)arg2;
- (double)getDownloadTime:(id)arg1;
- (void)setDownloadInfo:(id)arg1 withUrl:(id)arg2;
- (id)getDownloadInfoWithUrl:(id)arg1;
- (id)allDownloadInfo;
- (void)removeDownloadInfoWithUrl:(id)arg1;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (stat)statWithFullUrl:(id)arg1 error:(id *)arg2;
- (id)getFileInfoWithFullUrl:(id)arg1 digestAlgorithm:(id)arg2 error:(id *)arg3 errNo:(unsigned int *)arg4;
- (void)executeIssueDecryptCmd:(id)arg1;
- (id)decompressZstdPkg:(id)arg1;
- (BOOL)evaluateEncryptFile:(id)arg1 sourceUrl:(id)arg2 context:(id)arg3;
- (id)batchEvaluateEncryptFile:(id)arg1 context:(id)arg2;
- (unsigned int)getDownloadingPrefetchTaskCount;
- (id)getDownloadingPrefetchTaskSpeed;
- (double)getDownloadingPrefetchTaskSpeedWithUrl:(id)arg1;
- (BOOL)overwriteTargetInfoDataPkg:(id)arg1 bySourceInfoData:(id)arg2;
- (BOOL)isPkgFileExistsForInfoData:(id)arg1;
- (unsigned long long)transferDownloadTypeToReportType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

