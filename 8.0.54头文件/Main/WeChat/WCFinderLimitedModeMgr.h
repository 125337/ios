@interface WCFinderLimitedModeMgr : NSObject <IMMLimitedModeMgrExt, MMLimitedModeAuthorizationUtilLogicDelegate>
{
    BOOL _checkAntiVCIsShowing; // +0x8
    BOOL _openShareListFeedsIgnoreLimited; // +0x9
    BOOL _enableShowShareRelatedWhenYoungContentLimit; // +0xa
    id <WCFinderLimitedModeMgrDelegate> _delegate; // +0x10
    long long _finderLimitedModeConfig; // +0x18
    unsigned long long _antiAddictInterval; // +0x20
    unsigned long long _antiAddictPassSeconds; // +0x28
    unsigned long long _lastLiftCurfewTimeStamp; // +0x30
    unsigned long long _lastInFinderTimeStamp; // +0x38
    MMLimitedModeAuthorizationUtilLogic * _authorizationLogic; // +0x40
    WCFinderLimitAccessAuthorizationModel * _authorizationModel; // +0x48
    unsigned long long _antiSceneTotalWatchSeconds; // +0x50
}
+ (BOOL)canCheckAntiAddictLogicBySwitch;
+ (id)getCurfewAuthorizationBizKey;
+ (id)getTimeLockAuthorizationBizKey;
+ (id)getFeedAuthorizationBizKeyWithFeedId:(id)arg1;
+ (id)getLiveAuthorizationBizKeyWithFeedId:(id)arg1;
+ (id /* block */)getOpenTeenageBlockByFeedId:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 shareScene:(unsigned long long)arg4 currentNavController:(id)arg5 customParam:(id)arg6 functionalParams:(id)arg7 reportModel:(id)arg8 cardType:(unsigned long long)arg9;
+ (id /* block */)getOpenTeenageBlockByLiveParams:(id)arg1;
- (void)enterAntiScene;
- (void)leaveAntiScene;
- (void)updateLastInFinderTimeStamp;
- (void)updateAntiTimeDatas;
- (void)_updateAntiAddictPassSeconds;
- (void)limitedModeChanged:(BOOL)arg1;
- (void)limitedAgreeAuthorization:(id)arg1;
- (void)_updateAntiSceneTotalWatchSeconds;
- (BOOL)_shouldCheckAntiAddictByCurfew;
- (BOOL)_checkFromVCCanShowAntiAddict:(id)arg1;
- (BOOL)_isTimeToCheckAntiAddictLogic:(long long)arg1 scene:(unsigned long long)arg2 fromVC:(id)arg3 checkViewWillAppearBlock:(id /* block */)arg4 checkViewDidAppearBlock:(id /* block */)arg5 checkVerifySucBlock:(id /* block */)arg6 checkViewExitBlock:(id /* block */)arg7 checkViewForbidShowBlock:(id /* block */)arg8 controlExitState:(BOOL)arg9;
- (void)resetAntiAddictPassSeconds;
- (BOOL)triggerAntiAddictCheckLogic:(unsigned long long)arg1 fromVC:(id)arg2 checkViewWillAppearBlock:(id /* block */)arg3 checkViewDidAppearBlock:(id /* block */)arg4 checkVerifySucBlock:(id /* block */)arg5 checkViewExitBlock:(id /* block */)arg6 checkViewForbidShowBlock:(id /* block */)arg7 controlExitState:(BOOL)arg8;
- (long long)getAntiAddictStyle;
- (id)initWithPassSeconds:(unsigned long long)arg1 lastLiftCurfewTimeStamp:(unsigned long long)arg2 antiSceneTotalWatchSeconds:(unsigned long long)arg3 dynamicConfigModel:(id)arg4;
- (unsigned long long)antiAddictInterval;
- (void)resetCacheAntiAddictPassSeconds;
- (void)resetCacheAntiSceneTotalWatchSeconds;
- (void)dealloc;
- (void)registerExtension;
- (void)clearRegisterExtension;
- (void)setAntiAddictPassSeconds:(unsigned long long)arg1;
- (unsigned long long)getTotalWatchSecondsCheckInterval:(BOOL)arg1;
- (void)setAntiSceneTotalWatchSeconds:(unsigned long long)arg1;
- (void)setLastLiftCurfewTimeStamp:(unsigned long long)arg1;
- (BOOL)checkWhetherLimitedByFuncFlag:(unsigned long long)arg1 paramsModel:(id)arg2;
- (void)startQuestAccessFeedAuthorizationWithModel:(id)arg1;
- (void)startQuestAccessFeedAuthorizationWithContentVM:(id)arg1 bizKey:(id)arg2 currentNavController:(id)arg3;
- (void)onVerifyPasswordSuccessWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessAndAnimationEndedWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyCancelWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onAgreenAuthorization:(id)arg1 agreenAuthorizationInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)checkAntiVCIsShowing;
- (void)setCheckAntiVCIsShowing:(BOOL)arg1;
- (BOOL)openShareListFeedsIgnoreLimited;
- (void)setOpenShareListFeedsIgnoreLimited:(BOOL)arg1;
- (long long)finderLimitedModeConfig;
- (void)setFinderLimitedModeConfig:(long long)arg1;
- (void)setAntiAddictInterval:(unsigned long long)arg1;
- (unsigned long long)antiAddictPassSeconds;
- (unsigned long long)lastLiftCurfewTimeStamp;
- (unsigned long long)lastInFinderTimeStamp;
- (void)setLastInFinderTimeStamp:(unsigned long long)arg1;
- (BOOL)enableShowShareRelatedWhenYoungContentLimit;
- (void)setEnableShowShareRelatedWhenYoungContentLimit:(BOOL)arg1;
- (id)authorizationLogic;
- (void)setAuthorizationLogic:(id)arg1;
- (id)authorizationModel;
- (void)setAuthorizationModel:(id)arg1;
- (unsigned long long)antiSceneTotalWatchSeconds;
- (void).cxx_destruct;
@end

