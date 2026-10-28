@interface MagicAdCommonService : MMUserService <MMServiceProtocol>
{
    BOOL _autoGetAdsSwitch; // +0x8
    NSMutableSet * _hasGetAdsTaskSet; // +0x10
    NSRecursiveLock * _hasGetAdsTaskLock; // +0x18
}
- (id)getAdInfoWithPosId:(id)arg1;
- (id)saveAdInfoWithPosId:(id)arg1 jsonString:(id)arg2;
- (void)handleAdOpenWithAid:(id)arg1;
- (void)handleAdOpenWithAid:(id)arg1 schemaExtra:(id)arg2 jumpAppAlertShowHandler:(id /* block */)arg3 jumpAppConfirmHandler:(id /* block */)arg4 jumpAppDoneHandler:(id /* block */)arg5 openAppStoreBeforeHandler:(id /* block */)arg6 openAppStoreAppDoneHandler:(id /* block */)arg7;
- (void)handleAdOpenWithAid:(id)arg1 schemaExtra:(id)arg2 launchAppShowType:(unsigned char)arg3 jumpAppAlertShowHandler:(id /* block */)arg4 jumpAppConfirmHandler:(id /* block */)arg5 jumpAppDoneHandler:(id /* block */)arg6 openAppStoreBeforeHandler:(id /* block */)arg7 openAppStoreAppDoneHandler:(id /* block */)arg8;
- (void)handleAdFeedbackCloseWithAid:(id)arg1;
- (void)reportAdWithAid:(id)arg1 reportType:(unsigned char)arg2;
- (void)cleanAllAdCache;
- (BOOL)passFeedbackCloseCheck:(id)arg1;
- (void)updateAdInfosByCGIInstantlyWithPosIds:(id)arg1 pullType:(unsigned char)arg2 isDelayPull:(BOOL)arg3;
- (void)triggerUpdateAdsWithPosIds:(id)arg1 pullType:(unsigned char)arg2;
- (void)jumpToAppWithAdsInfo:(id)arg1 schemaExtra:(id)arg2 launchAppShowType:(unsigned char)arg3 confirmHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)installAppWithAdsInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)innerReportAdWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3;
- (void)innerReportAdWithAid:(id)arg1 adsInfo:(id)arg2 reportType:(unsigned char)arg3 notDisplayAdReason:(unsigned char)arg4;
- (unsigned char)mapReportTypeToActionType:(unsigned char)arg1;
- (BOOL)checkAdHasExpiredWithPosId:(id)arg1;
- (void)innerUpdateAdInfoAndCleanOldInfo:(id)arg1 expireTime:(unsigned long long)arg2;
- (BOOL)isInstalledWithAdInfo:(id)arg1;
- (void)cleanCacheAdInfoWithPosIds:(id)arg1;
- (void)autoGetAdIfNeeded;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (id)hasGetAdsTaskSet;
- (void)setHasGetAdsTaskSet:(id)arg1;
- (BOOL)autoGetAdsSwitch;
- (void)setAutoGetAdsSwitch:(BOOL)arg1;
- (id)hasGetAdsTaskLock;
- (void)setHasGetAdsTaskLock:(id)arg1;
- (void).cxx_destruct;
@end
