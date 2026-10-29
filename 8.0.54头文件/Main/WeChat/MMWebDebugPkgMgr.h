@interface MMWebDebugPkgMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
}
+ (id)dicCmmonAppId2Desc;
+ (id)arrCommonDebugPkgDescItem;
+ (id)arrSessionCommonDebugPkgDescItem;
+ (BOOL)isDebugPkgABtestOpen;
- (BOOL)isDebugPkgManualSwitchOpen;
- (void)setDebugPkgManualSwitchOpen:(BOOL)arg1;
- (BOOL)setDebugPkgWithPath:(id)arg1 appId:(id)arg2 errMsg:(id *)arg3;
- (BOOL)setDebugPkgWithData:(id)arg1 appId:(id)arg2;
- (id)getCanvasDebugPath:(id)arg1;
- (id)getDebugPkgWithAppId:(id)arg1 errMsg:(id *)arg2;
- (id)getCanvasBaseDebugPkgWithAppId:(id)arg1 errMsg:(id *)arg2;
- (id)getCanvasBizDebugPkgWithAppId:(id)arg1 errMsg:(id *)arg2;
- (void)clearDebugPkgInfo:(id)arg1;
- (void)clearAllDebugPkgInfo;
- (id)__pkgDirPath;
- (id)__pkgFilePathForAppId:(id)arg1;
- (id)mappedKV;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end

