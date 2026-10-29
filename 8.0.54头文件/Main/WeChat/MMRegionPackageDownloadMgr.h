@interface MMRegionPackageDownloadMgr : MMRootService <MMResourceMgrExt, MMServiceProtocol>
{
    Package * _cachedPackage; // +0x8
    unsigned int uiInterval; // +0x10
}
- (id)init;
- (void)checkUpdate;
- (BOOL)shoulCheckUpadte;
- (void)checkResouce;
- (id)getRegionRootPath;
- (id)getRegionFilePath;
- (id)getTmpRegionFilePathForLang:(id)arg1;
- (id)getRegionFilePathForLang:(id)arg1;
- (id)getVersionFilePath;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)updateVersion:(id)arg1;
- (void).cxx_destruct;
@end

