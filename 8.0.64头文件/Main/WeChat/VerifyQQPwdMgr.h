@interface VerifyQQPwdMgr : MMUserService <MMServiceProtocol, PasswordLogicDelegate, ICheckQQExt>
{
    unsigned long long m_lastCanOldWTBufTime; // +0x8
    PasswordLogic * m_pswLogic; // +0x10
}
- (void)regExt;
- (void)unregExt;
- (id)init;
- (void)dealloc;
- (void)OnCheckQQ;
- (void)unknownFail:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)passwordLogicCancel:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void).cxx_destruct;
@end
