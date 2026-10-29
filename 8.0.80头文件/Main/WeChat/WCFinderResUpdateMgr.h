@interface WCFinderResUpdateMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
{
    NSDictionary * _currentResourceItems; // +0x8
    NSDictionary * _cleanupResourceItems; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initializeResourceItems;
- (void)checkResourcesOnInitialization;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)extractResWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)checkResourceIntegrityWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)checkFilesIntegrityWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3 completeBlock:(id /* block */)arg4;
- (void)checkFilesIntegrityWithResBasePath:(id)arg1 manifestPath:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)cleanupResourceForResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)clearUnusedResourceForResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (unsigned int)latestReadyResVersion:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)updateLatestReadyResVersion:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)clearResVersionForResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (id)getUpZipDirWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (id)getDestDirWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (id)currentResourceItems;
- (void)setCurrentResourceItems:(id)arg1;
- (id)cleanupResourceItems;
- (void)setCleanupResourceItems:(id)arg1;
- (void).cxx_destruct;
@end
