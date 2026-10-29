@interface WAPublicResCacheMgr : MMUserService <WAPackageDownloadLogicDelegate, MMServiceProtocol>
{
    WAPackageDownloadLogic * _pkgDownloadLogic; // +0x8
    WAPackageInfoCacheLogic * _pkgInfoCacheLogic; // +0x10
    NSString * _curDownloadUrlStr; // +0x18
    BOOL _bIsDownloading; // +0x20
    WAPublicResInfoStorage * m_resInfoStorage; // +0x28
    WAPublicResInfo * _curServerRetInfo; // +0x30
    long long _startDownloadTime; // +0x38
    id /* block */ _syncUpdatePubLibHandler; // +0x40
    id /* block */ _asyncUpdatePubLibHandler; // +0x48
    id /* block */ _testForceUpdatePubLibHandler; // +0x50
    id /* block */ _bizUpdatePubLibHandler; // +0x58
    WAPublicResModel * _publicResModel; // +0x60
    NSMutableArray * _unpackedCheckSum; // +0x68
    WAAppBrandNotifyInfo * _publicDebugInfo; // +0x70
}
+ (id)getPublicRelativePath:(unsigned long long)arg1;
+ (id)getBundlePublicRelativePath:(unsigned long long)arg1;
+ (id)getBundlePublicRelativePathWithFileName:(id)arg1;
+ (unsigned int)getBundlePubVersion;
+ (id)getBundle;
+ (id)getBundlePubResJsWithType:(unsigned long long)arg1;
+ (id)getBundlePubResDataWithType:(unsigned long long)arg1;
+ (id)extensionIMsgExtRegisterKeyList;
- (id)init;
- (void)dealloc;
- (id)publicResModel;
- (id)getTaskPublicResModel;
- (BOOL)isReachPubLibResUpdateGap;
- (void)checkUpdatePublicResPkg;
- (void)checkUpdatePublicResPkgOnAppVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadResInfoStorage;
- (void)saveResInfoStorage:(id)arg1;
- (void)checkAndClearPubRes;
- (BOOL)isDebugMd5Unpacked:(id)arg1;
- (BOOL)isReleaseMd5Unpacked:(id)arg1;
- (void)markDebugMd5Unpacked:(id)arg1;
- (void)markReleaseMd5Unpacked:(id)arg1;
- (BOOL)isMd5Unpacked:(id)arg1 prefix:(id)arg2;
- (void)markMd5Unpacked:(id)arg1 prefix:(id)arg2;
- (id)genTokenMd5:(id)arg1 prefix:(id)arg2;
- (BOOL)verifyLocalCacheChecksum:(id)arg1 debugModeType:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (BOOL)verifyLocalCacheChecksum:(id)arg1 debugModeType:(unsigned long long)arg2 version:(unsigned long long)arg3 forceIgnoreCheckSum:(BOOL)arg4;
- (BOOL)verifyLocalCacheChecksum:(id)arg1 pkgFilePath:(id)arg2 forceIgnoreCheckSum:(BOOL)arg3;
- (void)subThread_verifyLocalCacheChecksum:(id)arg1 pkgFilePath:(id)arg2 forceIgnoreCheckSum:(BOOL)arg3 completion:(id /* block */)arg4;
- (BOOL)loadPublicPkgInfoLocalCache:(unsigned long long)arg1 version:(unsigned long long)arg2;
- (id)getPubResDataWithPubType:(unsigned long long)arg1 version:(unsigned long long)arg2 resType:(unsigned long long)arg3 forAppid:(id)arg4;
- (id)getPubResDataWithPubType:(unsigned long long)arg1 version:(unsigned long long)arg2 relativePath:(id)arg3 forAppid:(id)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 version:(unsigned long long)arg2;
- (void)unpackPubResFromBundle;
- (BOOL)unpackPubResFromBundleZipPath:(id)arg1;
- (BOOL)createDirIfNotExist:(id)arg1;
- (void)unpackPubResFromBundleIfNeeded;
- (id)getPublicForceLocalCacheData:(unsigned long long)arg1;
- (id)getPublicForceLocalCacheDataWithRelativePath:(id)arg1;
- (id)getCurrentPublicReleaseInfo;
- (BOOL)hasDownloadedPublib;
- (void)tryUpdatePublicResPkgWithCompleteHandler:(id /* block */)arg1;
- (void)syncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)asyncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1 completeHandler:(id /* block */)arg2;
- (BOOL)isNeedDownloadPublicDebugModePkg:(id)arg1;
- (BOOL)isDownloading;
- (BOOL)downloadPublicPkgWithUrl:(id)arg1 patchUrl:(id)arg2;
- (BOOL)downloadDebugPublicPkgWithInfo:(id)arg1;
- (void)syncHandlerActionWithRet:(BOOL)arg1;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3 protocolInfo:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)reportKvInfo:(BOOL)arg1 debugMode:(BOOL)arg2 downloadPercent:(unsigned int)arg3 eventID:(unsigned int)arg4;
- (void)reportPatchUpdateKvInfo:(BOOL)arg1 debugMode:(unsigned long long)arg2 errCode:(unsigned long long)arg3 publicInfo:(id)arg4 isPatch:(BOOL)arg5 pkgSize:(unsigned int)arg6 filePath:(id)arg7 protocolInfo:(id)arg8;
- (void)removeDustPublicPkgBeyondShouldKeepVersionArr:(id)arg1;
- (BOOL)updatePublicResPkgWithScene:(unsigned long long)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgContent:(id)arg3;
- (void)parseNotifyMsg:(id)arg1;
- (void)processPublicPkgUpdateNotifyVersion:(unsigned int)arg1 pkgUrl:(id)arg2 patchUrl:(id)arg3 md5:(id)arg4 isForceUpdate:(BOOL)arg5 scene:(unsigned long long)arg6 updateType:(unsigned int)arg7;
- (void)destroyAllLoadedOldPublibBackgroundTask;
- (void)test_forceUpdatePubLibToVersion:(unsigned int)arg1 completeHandler:(id /* block */)arg2;
- (void)setPublicResModel:(id)arg1;
- (id)unpackedCheckSum;
- (void)setUnpackedCheckSum:(id)arg1;
- (id)publicDebugInfo;
- (void)setPublicDebugInfo:(id)arg1;
- (void).cxx_destruct;
@end

