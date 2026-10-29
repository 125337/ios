@interface WAPermissionMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _reportInfos; // +0x8
    NSMutableSet * _setParallelPrefetching; // +0x10
    NSMutableSet * _setWaitingParallelPrefetching; // +0x18
    NSMutableDictionary * _dicParallelPrefetchResult; // +0x20
    NSArray * _abTestPermissionInfoList; // +0x28
    NSArray * _pluginPermissionInfoList; // +0x30
    BOOL _isFirstTimeCheckPluginPermission; // +0x38
    BOOL _isFirstTimeCheckABTestPermission; // +0x39
    unsigned int _debugModeType; // +0x3c
    NSString * _appID; // +0x40
}
+ (unsigned int)getPermissionMode:(id)arg1;
+ (BOOL)checkJsAPI:(id)arg1 haveRunMode:(unsigned int)arg2;
+ (id)getPermissionByte:(id)arg1;
+ (unsigned int)getEventThreadMode:(id)arg1;
+ (id)dictionayOfJSAPI2PermissionIndex;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearParallelPrefetchInfo;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (id)getPermissionInfoWithUsername:(id)arg1;
- (id)getPermissionBanInfoWithAppID:(id)arg1;
- (id)getPluginPermissionInfoWithAppID:(id)arg1;
- (void)requestPureJSApiPermissionWithAppID:(id)arg1 userName:(id)arg2 scene:(unsigned long long)arg3 isSilentOpen:(BOOL)arg4 silentOpenType:(unsigned int)arg5 syncType:(unsigned int)arg6 completion:(id /* block */)arg7;
- (BOOL)requestPluginPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 isFirstTime:(BOOL)arg3 isolatePluginCount:(int)arg4 debugModeType:(unsigned int)arg5 pluginIDArray:(id)arg6 scene:(unsigned int)arg7 isSilentOpen:(BOOL)arg8 silentOpenType:(unsigned int)arg9 syncType:(int)arg10;
- (BOOL)requestABTestPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 isFirstTime:(BOOL)arg3 debugModeType:(unsigned int)arg4 appIDArray:(id)arg5 isSilentOpen:(BOOL)arg6 silentOpenType:(unsigned int)arg7 syncType:(int)arg8;
- (BOOL)requestLaunchPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 appServiceType:(unsigned int)arg6 sessionId:(id)arg7 pagePath:(id)arg8 isFromBackground:(BOOL)arg9 requestType:(unsigned int)arg10 dicLaunchParameter:(id)arg11 isFromParallelLaunch:(BOOL)arg12;
- (BOOL)hasValidIssueLaunchForAppid:(id)arg1 username:(id)arg2 scene:(unsigned int)arg3;
- (BOOL)isIssueLaunchInfoValid:(id)arg1 inScene:(unsigned int)arg2;
- (id)tryGetLocalResponseWithUsername:(id)arg1 appid:(id)arg2 inScene:(unsigned int)arg3;
- (id)generateLaunchCGIUserInfo:(id)arg1 debugMode:(unsigned int)arg2 enterScene:(unsigned int)arg3 sessionId:(id)arg4 isFromBackground:(BOOL)arg5 isSilentOpen:(BOOL)arg6 isSheetMode:(BOOL)arg7 isCustomLoading:(BOOL)arg8 migrateFromUsername:(id)arg9;
- (BOOL)updateLaunchWithResponse:(id)arg1 appId:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)getPluginPermissionList;
- (id)getABTestPermissionList;
- (void)setABTestPermissionList:(id)arg1;
- (void)setPluginPermissionList:(id)arg1;
- (unsigned int)getReportTypeFromRequestType:(unsigned int)arg1;
- (void)processPluginPermissionInfo:(id)arg1;
- (void)processABTestPermissionInfo:(id)arg1;
- (void)processPluginPermissionInfoAsync;
- (void)onResponseLaunchPermissionInfo:(id)arg1;
- (void)reportResponse:(id)arg1;
- (void)reportPluginResponse:(id)arg1;
- (void)reportGameABTestResponse:(id)arg1;
- (void)processResponseLaunchPermissionInfoWithRequest:(id)arg1 andResponse:(id)arg2 cgiUserInfo:(id)arg3;
- (void)executeIssueLaunchCmd:(id)arg1;
- (id)launchActionFromResponse:(id)arg1;
- (id)runtimeInfoFromResponse:(id)arg1;
- (id)actionSheetInfoFromResponse:(id)arg1;
- (id)getPermissionBytesWithAppID:(id)arg1;
- (void)updateAppItem:(id)arg1;
- (void)updateUsageItem:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (BOOL)isFirstTimeCheckPluginPermission;
- (void)setIsFirstTimeCheckPluginPermission:(BOOL)arg1;
- (BOOL)isFirstTimeCheckABTestPermission;
- (void)setIsFirstTimeCheckABTestPermission:(BOOL)arg1;
- (void).cxx_destruct;
@end

