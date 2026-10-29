@interface WAPreDownloadMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    NSMutableDictionary * _dicAppID2PreDownloadHandler; // +0x10
    NSMutableDictionary * _dicAppID2PreResUrls; // +0x18
    NSMutableDictionary * _dicUrl2PreResResult; // +0x20
    NSMutableDictionary * _dicAppID2CoverImageURL; // +0x28
    NSString * _appId; // +0x30
    NSNumber * __hasDownloadedFileNum; // +0x38
    NSNumber * __hasDownloadedSubPackageNum; // +0x40
    NSNumber * __bothDownloadedFileNum; // +0x48
    NSMutableDictionary * _moduleCacheVersionCheckers; // +0x50
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initStatis;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (void)downloadPreResources:(id)arg1 pkgconfig:(id)arg2 reses:(id)arg3 subpkgs:(id)arg4 instanceId:(id)arg5;
- (void)downloadSubPackage:(id)arg1 pkgconfig:(id)arg2 module:(id)arg3 instanceId:(id)arg4;
- (void)downloadFile:(id)arg1 url:(id)arg2 context:(id)arg3 contact:(id)arg4;
- (void)preDownloadFilesNoCheck:(id)arg1 appId:(id)arg2 appVersion:(unsigned int)arg3;
- (void)downloadFileNoCheck:(id)arg1 appId:(id)arg2 appVersion:(unsigned int)arg3;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(BOOL)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 context:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)removeUrl:(id)arg1 url:(id)arg2;
- (BOOL)isDownloadingOrPreDownloaded:(id)arg1 url:(id)arg2;
- (id)getDownloadHandler:(id)arg1;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (void)clearPreResourcesWithAppID:(id)arg1;
- (void)clearWithAppID:(id)arg1;
- (void)clear;
- (void)clearAllDownloadHandler;
- (void)clearAllPreResources;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)setCoverImageURL:(id)arg1 appID:(id)arg2;
- (id)getCoverImageURL:(id)arg1;
- (void)clearCoverImage:(id)arg1;
- (void)joinMainScene;
- (void)beforeInjectUserScript:(unsigned long long)arg1;
- (void)startUpTime;
- (void)downloadPkgForAppid:(id)arg1 username:(id)arg2 debugModeType:(unsigned int)arg3 completeHandler:(id /* block */)arg4;
- (id)_hasDownloadedFileNum;
- (void)set_hasDownloadedFileNum:(id)arg1;
- (id)_hasDownloadedSubPackageNum;
- (void)set_hasDownloadedSubPackageNum:(id)arg1;
- (id)_bothDownloadedFileNum;
- (void)set_bothDownloadedFileNum:(id)arg1;
- (id)moduleCacheVersionCheckers;
- (void)setModuleCacheVersionCheckers:(id)arg1;
- (void).cxx_destruct;
@end

