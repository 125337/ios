@interface WAPermissionHandler : NSObject <WAPermissionMgrExtension, WAPermissionUserAuthImplDelegate>
{
    NSArray * _pluginPermissionInfo; // +0x8
    NSArray * _abTestPermissionInfo; // +0x10
    NSString * _appID; // +0x18
    NSString * _userName; // +0x20
    unsigned int _debugModeType; // +0x28
    unsigned int _appVersion; // +0x2c
    NSString * _sessionId; // +0x30
    int _isolatePluginCount; // +0x38
    id /* block */ _permissionInfoCompletionHandler; // +0x40
    id /* block */ _permissionPluginInfoCompletionHandler; // +0x48
    id /* block */ _permissionABTestInfoCompletionHandler; // +0x50
    WAPermissionUserAuthImpl * _userAuthImpl; // +0x58
    BOOL _coldLaunchOriginIsNeedSyncGetPluginPermission; // +0x60
    BOOL _isFromBackground; // +0x61
    BOOL _isRestrictedBySecFlag; // +0x62
    unsigned int _appServiceType; // +0x64
    unsigned int _enterScene; // +0x68
    unsigned long long _coldLaunchOriginSyncType; // +0x70
    id <WAPermissionHandlerDelegate> _delegate; // +0x78
    NSDictionary * _permissionDict; // +0x80
    NSMutableArray * _permissionInfos; // +0x88
    NSString * _pagePath; // +0x90
    NSDictionary * _dicLaunchParameter; // +0x98
}
- (id)initWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 sessionId:(id)arg6 pagePath:(id)arg7 externalInfo:(id)arg8 dicLaunchParameter:(id)arg9;
- (void)dealloc;
- (BOOL)isSyncGetPluginPermissionInfo:(id)arg1;
- (BOOL)isSyncGetABTestPermissionInfo:(id)arg1;
- (void)requestPluginPermssionInfoWithCompletionHandler:(id /* block */)arg1 pluginIDArray:(id)arg2;
- (void)requestABTestPermssionInfoWithCompletionHandler:(id /* block */)arg1 appIDArray:(id)arg2;
- (unsigned long long)syncGetLaunchPermissionInfoType;
- (void)requestLaunchPermssionInfoWithCompletionHandler:(id /* block */)arg1;
- (void)asyncUpdateLaunchPermissionInfo;
- (void)asyncUpdatePluginPermissionInfo:(id)arg1;
- (void)asyncUpdateABTestPermissionInfo:(id)arg1;
- (void)asyncUpdateWeAppExtraConfigInfo;
- (void)updateScene:(unsigned int)arg1 dicLaunchParameter:(id)arg2;
- (void)updatePagePath:(id)arg1;
- (void)updateSessionId:(id)arg1;
- (void)updateLaunchPermissionInfoOnEnterForeground;
- (void)updateRestrictedFlag:(BOOL)arg1;
- (id)getLaunchAction;
- (id)getOpConfig;
- (id)getPublicResInfoFromLaunchCGI;
- (id)getActionSheetPermissionInfoFromLaunchCGI;
- (id)getRuntimeInfo;
- (BOOL)shouldShowThirdBusiTips;
- (long long)updateCostTime;
- (unsigned long long)permissionTypeForMenuControlByte:(unsigned long long)arg1;
- (unsigned char)rawControlByteForMenuControlByte:(unsigned long long)arg1;
- (BOOL)isLastRequestFromBackgroundScene;
- (BOOL)checkRunMode:(id)arg1 onWebview:(BOOL)arg2 isGameApp:(BOOL)arg3;
- (BOOL)checkRunInMainThread:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 inRunningState:(unsigned int)arg2 withPermissionAppId:(id)arg3 byTempPermission:(id)arg4;
- (id)getPermissionDataInTaskRunningState:(unsigned long long)arg1;
- (void)checkUserAuthWithAppID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(id /* block */)arg5 failHandler:(id /* block */)arg6 transferHandler:(id /* block */)arg7 scene:(unsigned long long)arg8;
- (void)resetAuthInfo;
- (void)updateUserAuthInfo:(id)arg1 source:(unsigned long long)arg2;
- (BOOL)isGameApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)getWeAppBindJumpToUserNameFromAppID:(id)arg1;
- (void)setPermissionInfo:(id)arg1;
- (id)permissionInfo;
- (void)loadPermissionInfo;
- (void)setPluginPermissionInfo:(id)arg1;
- (id)pluginPermissionInfo;
- (void)loadPluginPermissionInfo;
- (id)getALLRunningStatusPermissionMap;
- (id)getAllPermissionBytesWithRunningState:(unsigned long long)arg1;
- (id)getPluginPermissionInfoDict;
- (id)getNavAlertTitle;
- (BOOL)isSilentOpen;
- (unsigned int)silentOpenType;
- (void)setAbTestPermissionInfo:(id)arg1;
- (id)abTestPermissionInfo;
- (void)loadABTestPermissionInfo;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(BOOL)arg2 errorCode:(int)arg3;
- (void)onGetPluginPermissionInfo:(id)arg1 isSuccess:(BOOL)arg2 errorCode:(int)arg3;
- (void)onGetABTestPermissionInfo:(id)arg1 isSuccess:(BOOL)arg2 errorCode:(int)arg3;
- (void)userAuthOKWithJSAPI:(id)arg1 handler:(id /* block */)arg2 scene:(unsigned long long)arg3;
- (void)userAuthFailWithJSAPI:(id)arg1 failHandler:(id /* block */)arg2 errMsg:(id)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)onUserTransferAuthDidCompeleteWithJSAPIName:(id)arg1 transferHandler:(id /* block */)arg2 result:(id)arg3 scene:(unsigned long long)arg4;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned long long)coldLaunchOriginSyncType;
- (void)setColdLaunchOriginSyncType:(unsigned long long)arg1;
- (BOOL)coldLaunchOriginIsNeedSyncGetPluginPermission;
- (void)setColdLaunchOriginIsNeedSyncGetPluginPermission:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)permissionDict;
- (id)permissionInfos;
- (void)setPermissionInfos:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)dicLaunchParameter;
- (void)setDicLaunchParameter:(id)arg1;
- (BOOL)isFromBackground;
- (void)setIsFromBackground:(BOOL)arg1;
- (BOOL)isRestrictedBySecFlag;
- (void)setIsRestrictedBySecFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
