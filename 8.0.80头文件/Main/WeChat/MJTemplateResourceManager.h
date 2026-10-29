@interface MJTemplateResourceManager : MMRootService <MMResourceMgrExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _operationQueue; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
}
- (void)reportResourceCachedState;
- (void)reportResourceCachedStateWithResType:(unsigned int)arg1;
- (id)safeJSONStringWithObject:(id)arg1;
- (id)safeStringWithString:(id)arg1;
- (unsigned long long)MMCleanCacheMgr_evaluateCacheSize;
- (unsigned long long)MMCleanCacheMgr_cleanCache;
- (id)init;
- (void)initResourceManager;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)mmkv;
- (unsigned int)albumResType;
- (unsigned int)cameraResType;
- (id)albumResourceDirectory;
- (id)cameraResourceDirectory;
- (BOOL)shouldMergeResourceWithResType:(unsigned int)arg1 resSubtype:(unsigned int)arg2 targetVersion:(unsigned int)arg3;
- (void)updateResourceTargetVersion:(unsigned int)arg1 withResType:(unsigned int)arg2 resSubtype:(unsigned int)arg3;
- (void)mergeResourceFilesIfNeededWithResType:(unsigned int)arg1 resSubtype:(unsigned int)arg2;
- (void)checkUnmergedResourceFilesWithResType:(unsigned int)arg1;
- (void)consumeResourcePackageIfNeededWithResType:(unsigned int)arg1 resSubtype:(unsigned int)arg2;
- (void)consumeResourcePackageIfNeededWithResType:(unsigned int)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)cleanAllResourceFiles;
- (void)cleanMMKVFile;
- (void)cleanResourceFilesForResType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
