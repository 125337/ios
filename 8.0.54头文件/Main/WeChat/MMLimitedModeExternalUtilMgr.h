@interface MMLimitedModeExternalUtilMgr : MMUserService <MMLimitedModeVerifyPasswordUtilLogicDelegate, MMServiceProtocol>
{
    MMLimitedModeVerifyPasswordUtilLogic * m_verifyPasswordUtilLogic; // +0x8
    unsigned int m_scene; // +0x10
    MMUIViewController * _sourceViewController; // +0x18
    id /* block */ _verifyPasswordOrSetSuccessBlock; // +0x20
    id /* block */ _verifyPasswordOrSetFailBlock; // +0x28
}
- (void)startCheckLimitedModeVerifyPasswordOrGoToSet:(id)arg1 scene:(unsigned int)arg2 successBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)doCheckLimitedModeVerifyPasswordOrGoToSet;
- (void)resetVerifyPasswordUtilLogic;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (id /* block */)verifyPasswordOrSetSuccessBlock;
- (void)setVerifyPasswordOrSetSuccessBlock:(id /* block */)arg1;
- (id /* block */)verifyPasswordOrSetFailBlock;
- (void)setVerifyPasswordOrSetFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

