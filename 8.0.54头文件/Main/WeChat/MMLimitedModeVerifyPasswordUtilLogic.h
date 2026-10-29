@interface MMLimitedModeVerifyPasswordUtilLogic : NSObject <MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate>
{
    MMLimitedModeVerifyPasswordLogic * m_limitedModeVerifyPasswordLogic; // +0x8
    unsigned int m_scene; // +0x10
    BOOL m_isLoading; // +0x14
    id <MMLimitedModeVerifyPasswordUtilLogicDelegate> _m_delegate; // +0x18
    MMUIViewController * _vc; // +0x20
}
- (void)startCheckLimitedModeVerifyPasswordInViewController:(id)arg1 scene:(unsigned int)arg2;
- (void)goToSetLimitedModeViewController:(id)arg1 scene:(unsigned int)arg2;
- (void)doCheckLimitedModeVerifyPasswordInViewController:(id)arg1;
- (void)onCheckPasswordExist:(BOOL)arg1 isNeverUse:(BOOL)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (void).cxx_destruct;
@end

