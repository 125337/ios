@interface WAJSEventHandler_openBusinessView : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate>
{
    WAAppIdToUsernameTransfer * _appID2UserNameTransfer; // +0x8
    NSString * _bizTypeStr; // +0x10
    BOOL _isSyncRequest; // +0x18
    BOOL _disableVisibilityEvent; // +0x19
    NSDictionary * _dicParam; // +0x20
    MemoryMappedKV * _mmkv; // +0x28
}
- (id)failParamsWithErrCode:(id)arg1 errNo:(id)arg2 errMsg:(id)arg3;
- (id)finalErrMsg:(id)arg1 fallbackErrMsg:(id)arg2;
- (id)networkCgiFailErrMsg;
- (id)networkCgiFailParams;
- (id)backendErrnoParamsFromResponse:(id)arg1 fallbackErrCode:(id)arg2 fallbackErrMsg:(id)arg3;
- (void)handleJSEvent:(id)arg1;
- (id)mmkv;
- (id)mmkvKeyForBusinessType:(id)arg1 source:(int)arg2;
- (id)getValidCacheResponseForBusinessType:(id)arg1 source:(int)arg2;
- (void)cacheResponseIfNeeded:(id)arg1 forBusinessType:(id)arg2 source:(int)arg3;
- (void)requestAuthorizationForLaunch:(id)arg1 queryStr:(id)arg2 referrerAppId:(id)arg3;
- (void)handleAuthorizationForLaunchResponse:(id)arg1 request:(id)arg2 isCache:(BOOL)arg3;
- (void)openLiteApp:(id)arg1 appId:(id)arg2 path:(id)arg3 query:(id)arg4;
- (void)openLiteAppViaLegacy:(id)arg1 isHalfScreen:(BOOL)arg2 isTransparent:(BOOL)arg3;
- (void)navigateToMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3 pagePath:(id)arg4 transparentBackgroundEnabled:(BOOL)arg5;
- (void)navigateToMiniProgramWitAppID:(id)arg1 userName:(id)arg2 debugMode:(unsigned long long)arg3 pagePath:(id)arg4 extraData:(id)arg5 privateExtraData:(id)arg6 agentId:(id)arg7 sourceType:(unsigned int)arg8 preScene:(unsigned int)arg9 preSceneNote:(id)arg10 scene:(unsigned int)arg11 sceneNote:(id)arg12 originScene:(unsigned int)arg13 transparentBackgroundEnabled:(BOOL)arg14;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)endWithOKParams:(id)arg1;
- (void)endWithFailErrMsg:(id)arg1 params:(id)arg2;
- (BOOL)handleLaunchLiteAppAction:(id)arg1 data:(id)arg2;
- (void)didGetLiteAppVC:(id)arg1 isHalfScreen:(BOOL)arg2 isTransparent:(BOOL)arg3;
- (id)dicParam;
- (void)setDicParam:(id)arg1;
- (BOOL)isSyncRequest;
- (void)setIsSyncRequest:(BOOL)arg1;
- (void)setMmkv:(id)arg1;
- (BOOL)disableVisibilityEvent;
- (void)setDisableVisibilityEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end
