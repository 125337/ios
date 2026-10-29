@interface MagicAdCommonService : MMUserService <MMServiceProtocol>
{
    BOOL _pullDedupEnabled; // +0x8
    BOOL _delayPullEnabled; // +0x9
    NSMutableDictionary * _pullingAdTasks; // +0x10
    long long _cgiExpireTimeSecs; // +0x18
    NSMutableDictionary * _adExposureTimers; // +0x20
    NSMutableDictionary * _pendingAdCallbacks; // +0x28
}
- (id)getAdInfoWithPosId:(id)arg1;
- (id)saveAdInfoWithPosId:(id)arg1 jsonString:(id)arg2;
- (void)handleAdOpenWithAid:(id)arg1;
- (void)handleAdOpenWithAid:(id)arg1 schemaExtra:(id)arg2 jumpAppAlertShowHandler:(id /* block */)arg3 jumpAppConfirmHandler:(id /* block */)arg4 jumpAppDoneHandler:(id /* block */)arg5 openAppStoreBeforeHandler:(id /* block */)arg6 openAppStoreAppDoneHandler:(id /* block */)arg7;
- (void)handleAdOpenWithAid:(id)arg1 schemaExtra:(id)arg2 launchAppShowType:(unsigned char)arg3 jumpAppAlertShowHandler:(id /* block */)arg4 jumpAppConfirmHandler:(id /* block */)arg5 jumpAppDoneHandler:(id /* block */)arg6 openAppStoreBeforeHandler:(id /* block */)arg7 openAppStoreAppDoneHandler:(id /* block */)arg8;
- (void)handleAdFeedbackCloseWithAid:(id)arg1;
- (void)reportAdWithAid:(id)arg1 reportType:(unsigned char)arg2;
- (void)reportNotShowWithPosId:(id)arg1 extra:(id)arg2;
- (void)cleanAllAdCache;
- (unsigned char)checkAppInstallStatusWithAid:(id)arg1;
- (id)getCachedAdInfoForPosId:(id)arg1;
- (BOOL)passFeedbackCloseCheck:(id)arg1;
- (BOOL)shouldClientInterceptPosId:(id)arg1 reasonOut:(unsigned char *)arg2;
- (void)updateAdInfoByCGIInstantlyWithPosId:(id)arg1 pullType:(unsigned char)arg2 isDelayPull:(BOOL)arg3;
- (void)finishCGIWithPosId:(id)arg1 pullType:(unsigned char)arg2 result:(unsigned char)arg3 extraStr:(id)arg4 retCodeStr:(id)arg5 adResult:(id)arg6;
- (void)triggerUpdateAdWithPosId:(id)arg1 pullType:(unsigned char)arg2;
- (BOOL)markPullingAdWithPosId:(id)arg1 durationSecs:(unsigned int)arg2;
- (void)reportPreloadSkippedInFlightWithPosId:(id)arg1 pullType:(unsigned char)arg2;
- (void)jumpToAppWithAdsInfo:(id)arg1 schemaExtra:(id)arg2 launchAppShowType:(unsigned char)arg3 confirmHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)installAppWithAdsInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)innerReportAdWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3;
- (void)innerReportAdForPCADWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3;
- (void)innerReportAdForWXADOfNormalWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3;
- (void)innerReportAdForWXADOfPayWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3;
- (void)innerKVReportWhenCGIReportWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3;
- (unsigned char)mapReportTypeToActionType:(unsigned char)arg1;
- (BOOL)checkAdHasExpiredWithPosId:(id)arg1;
- (void)innerUpdateAdInfoWithExpireTime:(unsigned long long)arg1 adsInfo:(id)arg2;
- (BOOL)isInstalledWithAdInfo:(id)arg1;
- (void)cleanCacheAdInfoWithPosId:(id)arg1;
- (void)startRecordAdExposureTimeWithAid:(id)arg1;
- (id)safeGetExposureTimerWithAid:(id)arg1;
- (id)safeGetAllExposureTimers;
- (void)getAdInfoAsyncWithPosId:(id)arg1 completion:(id /* block */)arg2;
- (void)getAdInfoAsyncWithPosId:(id)arg1 timeoutMs:(long long)arg2 completion:(id /* block */)arg3;
- (void)notifyPendingCallbacksForPosId:(id)arg1;
- (id)resolveNoRealAdOutcomeForPosId:(id)arg1;
- (void)preloadAdWithPosId:(id)arg1;
- (id)buildFallbackAdInfoForPosId:(id)arg1;
- (BOOL)canJumpToAppWithAdsInfo:(id)arg1;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)pullingAdTasks;
- (void)setPullingAdTasks:(id)arg1;
- (BOOL)pullDedupEnabled;
- (void)setPullDedupEnabled:(BOOL)arg1;
- (BOOL)delayPullEnabled;
- (void)setDelayPullEnabled:(BOOL)arg1;
- (long long)cgiExpireTimeSecs;
- (void)setCgiExpireTimeSecs:(long long)arg1;
- (id)adExposureTimers;
- (void)setAdExposureTimers:(id)arg1;
- (id)pendingAdCallbacks;
- (void)setPendingAdCallbacks:(id)arg1;
- (void).cxx_destruct;
@end
