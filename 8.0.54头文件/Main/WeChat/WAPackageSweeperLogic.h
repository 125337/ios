@interface WAPackageSweeperLogic : NSObject
{
    BOOL _enteredForeground; // +0x8
    unsigned int _processStartTime; // +0xc
    unsigned int _processEndTime; // +0x10
    unsigned long long _processStartTimeInMs; // +0x18
    unsigned long long _processEndTimeInMs; // +0x20
    WAThreadSafeMutableDictionary * _sweeperIgnoreVersionMapDic; // +0x28
    WAPackageSweeperRegisterationMark * _registerationMark; // +0x30
}
- (id)init;
- (void)sweepLocalPkgWhenEnterBackground;
- (void)enterForeground;
- (void)sweepLocalPkgWhenEnterBackgroundNewLogic;
- (void)sweepLocalPkg;
- (void)runBlock:(id /* block */)arg1;
- (void)reportCacheDetail;
- (void)reportCheckAction;
- (BOOL)isCurrentTimeReachCheckPoint;
- (void)saveCheckPointTime;
- (void)sweepInvalidPkgAndInfoData;
- (void)sweepOutDatedNormalPkgForContacts:(id)arg1;
- (void)sweepOutDatedModulePkg;
- (void)sweepOutDatedEncryptPkg;
- (void)sweepLowerVersionPkgAndContactIfNeededForContacts:(id)arg1;
- (void)checkToSweepContactAndDatas:(id)arg1;
- (void)checkLocalStorage;
- (void)sweepLocalPluginCodeLru:(unsigned long long)arg1;
- (void)sweepNormalPkgUnderVersion:(unsigned long long)arg1 forAppid:(id)arg2;
- (unsigned int)sweepLocalPkgUnderVersion:(id)arg1 version:(long long)arg2 forAppid:(id)arg3;
- (void)sweepLocalPkgWithContact:(id)arg1 debugType:(unsigned long long)arg2 force:(BOOL)arg3;
- (void)sweepLocalPkgWithContactNewLogic:(id)arg1 debugType:(unsigned long long)arg2 force:(BOOL)arg3;
- (void)sweepLocalPkgWithUsername:(id)arg1 appid:(id)arg2 debugType:(unsigned long long)arg3 isForce:(BOOL)arg4;
- (void)sweepStorageDataForAppID:(id)arg1;
- (id)codecacheDetailForFilePath:(id)arg1;
- (void)sweepCodecacheDataForAppID:(id)arg1;
- (void)sweepBackupContactForUsername:(id)arg1;
- (void)sweepContactAndDatas:(id)arg1;
- (void)scanAndCleanReleaseDir;
- (void)scanAndCleanDebugDir;
- (void)scanAndCleanReleasePkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseNormalPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseEncryptPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseModulePkgForAppId:(id)arg1;
- (void)scanAndCleanDebugPkgForAppId:(id)arg1;
- (void)scanAndCleanInvalidInfoData;
- (void)scanAndCleanInvalidNormalInfoData;
- (void)scanAndCleanInvalidEncryptInfoData;
- (void)scanAndCleanInvalidModuleInfoData;
- (void)checkAndClearPkgDownloadCachesFile;
- (void)scanAndCleanInvalidNotifyInfo;
- (BOOL)isPluginCodePath:(id)arg1;
- (void)checkAndClearPubRes;
- (void)checkAndClearRenderCache;
- (void)checkAndClearByteCodeCache;
- (void)checkAndClearXnetCache;
- (void)checkRenderCacheLocalStorage;
- (void)checkAndClearPluginDevPkg;
- (void)checkAndClearInvalidateResourceCmd;
- (void)checkAndClearInvalidateContactCmd;
- (void)checkAndClearInvalidateCodeCmd;
- (void)checkAndClearUsrStoreSpace;
- (void)checkAndClearVideoCache;
- (unsigned long long)fileSizeForPath:(id)arg1;
- (id)getWASweeperInfo;
- (id)getSweeperInfoForContact:(id)arg1;
- (id)getPublicDataSweeperInfoWithPreDownloadSweeperInfo:(id)arg1;
- (unsigned long long)sweepWeAppCache;
- (unsigned long long)preGetWeAppCacheSize;
- (unsigned long long)preGetWeAppPkgSize;
- (unsigned long long)preGetXnetCacheSize;
- (unsigned long long)preGetWeAppPkgWhiteListSize;
- (unsigned long long)sweepPrefetchData;
- (unsigned long long)sweepXnetCache;
- (void)sweepXnetCacheWithAppid:(id)arg1;
- (unsigned long long)sweepUsrStoreAndStorageData;
- (unsigned long long)sweepTmpData;
- (unsigned long long)sweepWeAppPkg;
- (id)cachePathListInUsrStoreAndStorageToClean;
- (id)cachePathListInTmpToClean;
- (id)weappPkgPathListToClean;
- (void)registerIgnoreAppid:(id)arg1 aboveVersion:(unsigned long long)arg2;
- (void)registerAutoExpirationIgnoreAppid:(id)arg1 aboveVersion:(unsigned long long)arg2 duration:(unsigned int)arg3;
- (void)loadRegisteredMark;
- (void)saveRegisteredMark;
- (BOOL)isPackageShouldIgnored:(id)arg1;
- (BOOL)isPackageShouldIgnoredByAppid:(id)arg1 version:(unsigned long long)arg2;
- (BOOL)isPackageShouldIgnoredInRegisteredMapByAppid:(id)arg1 version:(unsigned long long)arg2;
- (BOOL)isPackageShouldIgnoredInRegisteredMarkByAppid:(id)arg1 version:(unsigned long long)arg2;
- (id)fetchWhiteListUsernameList;
- (BOOL)enteredForeground;
- (void)setEnteredForeground:(BOOL)arg1;
- (unsigned int)processStartTime;
- (void)setProcessStartTime:(unsigned int)arg1;
- (unsigned int)processEndTime;
- (void)setProcessEndTime:(unsigned int)arg1;
- (unsigned long long)processStartTimeInMs;
- (void)setProcessStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)processEndTimeInMs;
- (void)setProcessEndTimeInMs:(unsigned long long)arg1;
- (id)sweeperIgnoreVersionMapDic;
- (void)setSweeperIgnoreVersionMapDic:(id)arg1;
- (id)registerationMark;
- (void)setRegisterationMark:(id)arg1;
- (void).cxx_destruct;
@end

