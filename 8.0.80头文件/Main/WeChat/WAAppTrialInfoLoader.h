@interface WAAppTrialInfoLoader : MMObject
{
    id /* block */ m_completeBlock; // +0x8
    BOOL m_isRequesting; // +0x10
    WAAppBrandNotifyInfo * m_requestingNotifyInfo; // +0x18
    BOOL _skipInsertDebugModeAppInfo; // +0x20
    unsigned int _appServiceType; // +0x24
    unsigned int _reqType; // +0x28
}
+ (id)pendingTrialInfoKeyForAppId:(id)arg1;
+ (void)savePendingTrialInfo:(id)arg1 forAppId:(id)arg2;
+ (id)loadPendingTrialInfoForAppId:(id)arg1;
+ (void)removePendingTrialInfoForAppId:(id)arg1;
+ (id)trialStateCacheKeyForAppID:(id)arg1;
+ (BOOL)hasCachedTrialInfoStateForAppID:(id)arg1;
+ (unsigned int)cachedTrialInfoStateForAppID:(id)arg1;
+ (void)setCachedTrialInfoState:(unsigned int)arg1 forAppID:(id)arg2;
- (void)loadTrialInfoWithPack:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isRequesting;
- (id)requestingNotifyInfo;
- (void)requestTrialInfoWithPack:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleCheckTrialInfoResponse:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)finishWithRespAndInvokeCompleteBlock:(unsigned int)arg1 userInfo:(id)arg2;
- (void)updateNotifyInfoWithDownloadUrl:(id)arg1 md5Str:(id)arg2 extInfo:(id)arg3 oldNotify:(id)arg4 checkDemoNickName:(id)arg5 checkDemoBasicInfoVersion:(unsigned int)arg6 mtVersionId:(unsigned long long)arg7;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (BOOL)skipInsertDebugModeAppInfo;
- (void)setSkipInsertDebugModeAppInfo:(BOOL)arg1;
- (unsigned int)reqType;
- (void)setReqType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
