@interface MMLimitedModeExternalUtilMgr : MMUserService <MMLimitedModeVerifyPasswordUtilLogicDelegate, MMServiceProtocol>
{
    MMLimitedModeVerifyPasswordUtilLogic * m_verifyPasswordUtilLogic; // +0x8
    unsigned int m_scene; // +0x10
    BOOL _needPresentVc; // +0x14
    BOOL _forceDisplay; // +0x15
    MMUIViewController * _sourceViewController; // +0x18
    id /* block */ _verifyPasswordOrSetSuccessBlock; // +0x20
    id /* block */ _verifyPasswordOrSetFailBlock; // +0x28
    id /* block */ _settingEnterVcBlock; // +0x30
    id /* block */ _completionBlock; // +0x38
}
- (void)startCheckLimitedModeVerifyPasswordOrGoToSet:(id)arg1 scene:(unsigned int)arg2 successBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)startCheckLimitedModeVerifyPasswordOrGoToSet:(id)arg1 scene:(unsigned int)arg2 verifyPasswordSuccessBlock:(id /* block */)arg3 verifyPasswordFailBlock:(id /* block */)arg4 settingLiemitedModeEntryVcBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6 needPresentVc:(BOOL)arg7 forceDisplay:(BOOL)arg8;
- (void)doCheckLimitedModeVerifyPasswordOrGoToSet;
- (void)resetVerifyPasswordUtilLogic;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (void)onGoToSetLimitedModeViewControllerFailed;
- (BOOL)needVcPresent;
- (void)settingLimitedModeEntryViewController:(id)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (id /* block */)verifyPasswordOrSetSuccessBlock;
- (void)setVerifyPasswordOrSetSuccessBlock:(id /* block */)arg1;
- (id /* block */)verifyPasswordOrSetFailBlock;
- (void)setVerifyPasswordOrSetFailBlock:(id /* block */)arg1;
- (id /* block */)settingEnterVcBlock;
- (void)setSettingEnterVcBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)needPresentVc;
- (void)setNeedPresentVc:(BOOL)arg1;
- (BOOL)forceDisplay;
- (void)setForceDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end
