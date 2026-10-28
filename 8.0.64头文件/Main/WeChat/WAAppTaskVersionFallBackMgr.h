@interface WAAppTaskVersionFallBackMgr : MMUserService <WAContactMgrExtension, IWALocalCacheMgrExt, MMServiceProtocol>
{
    NSString * _appid; // +0x8
    NSString * _username; // +0x10
    WAAppTaskVersionFallBackMarkItem * _currentLaunchItem; // +0x18
    NSMutableArray * _markItems; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)reset;
- (void)startTickForUsername:(id)arg1 appid:(id)arg2;
- (void)stopTick;
- (void)doFallBackLogic:(unsigned long long)arg1 username:(id)arg2 appid:(id)arg3;
- (void)markCurrentLaunchItemInFallbackList;
- (unsigned int)getFallBackTickGapForUsername:(id)arg1 appid:(id)arg2;
- (void)markStartLaunchUsername:(id)arg1 appid:(id)arg2 instanceId:(id)arg3 openScene:(unsigned long long)arg4 targetAppVersion:(unsigned int)arg5 debugModeType:(unsigned long long)arg6;
- (void)markContactNeedSyncUpdateForUsername:(id)arg1 appid:(id)arg2;
- (void)markPkgNeedDownloadForUsername:(id)arg1 appid:(id)arg2 needDowndloadInfoDatas:(id)arg3;
- (void)checkFallbackMinVersionIfValidWithUsername:(id)arg1 appid:(id)arg2;
- (unsigned int)getLaunchFallbackMinVersionForContact:(id)arg1;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)currentLaunchItem;
- (void)setCurrentLaunchItem:(id)arg1;
- (id)markItems;
- (void)setMarkItems:(id)arg1;
- (void).cxx_destruct;
@end
