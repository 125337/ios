@interface MMWebJsWAPkgMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
}
+ (id)tryGetDebugPkgWithAppId:(id)arg1;
+ (id)getValidMetaPkgWithAppId:(id)arg1 builtInPkgPath:(id)arg2;
+ (id)getPkgInfoWithAppId:(id)arg1;
+ (id)getPkgInfoWithInfoData:(id)arg1;
+ (id)getBuiltInBasePkgInfo:(id)arg1;
+ (unsigned int)codePkgDownloadInterval;
+ (BOOL)isAppIdInWhiteList:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getCanvasCardBasicLibPkg;
- (id)getValidAppConfigPkgWithAppId:(id)arg1 localResName:(id)arg2;
- (id)getValidMetaPkgWithAppId:(id)arg1 localResName:(id)arg2;
- (void)trigerCanvasCardBasicLibPkg:(unsigned long long)arg1;
- (void)trigerPreDownloadPkgWithUsername:(id)arg1 appId:(id)arg2 scene:(unsigned long long)arg3;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(BOOL)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (void)handlePrefetchGetPkg:(id)arg1 filePath:(id)arg2;
- (void)clearConfigKV;
- (id)lastUsablePkgWithAppId:(id)arg1;
- (void)markDownloadPkgUsableWithInfoData:(id)arg1;
- (BOOL)isCurrentPubLib:(id)arg1 matchesWith:(id)arg2;
- (BOOL)isPubLibUsable:(id)arg1;
- (BOOL)isAppSupportFrameSet:(id)arg1 appId:(id)arg2 path:(id)arg3;
- (BOOL)isAppSupportFrameSetWithRegexp:(id)arg1 appId:(id)arg2 path:(id)arg3;
- (id)mappedKV;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end
