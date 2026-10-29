@interface WACacheVersionPreCheckerMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    WAPackageUpdateLogic * _pluginPkgUpdateLogic; // +0x8
    NSMutableArray * _arrReportUseWeappPlugins; // +0x10
    NSMutableDictionary * _dicAutoUpdatePluginKey2VersionInfo; // +0x18
    NSMutableDictionary * _dicWeAppPluginVersion; // +0x20
    NSMutableDictionary * _checkers; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startPreCheckCacheVersionWithCheckerContext:(id)arg1;
- (void)startParallelDownloadCheckWithCheckerContext:(id)arg1;
- (void)clearPreCheckCacheVersionResultForAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (BOOL)checkIsNeedDownloadPkgWithPackageConfig:(id)arg1 pagePath:(id)arg2;
- (id)getPreCheckCacheVersionResultForAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (void)onAppTaskTerminateWithContact:(id)arg1;
- (id)pluginPkgUpdateLogic;
- (id)arrReportUseWeappPlugins;
- (id)dicAutoUpdatePluginKey2VersionInfo;
- (id)dicWeAppPluginVersion;
- (id)checkers;
- (void)setCheckers:(id)arg1;
- (void).cxx_destruct;
@end

