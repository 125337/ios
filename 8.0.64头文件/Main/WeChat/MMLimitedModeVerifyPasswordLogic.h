@interface MMLimitedModeVerifyPasswordLogic : NSObject <PBMessageObserverDelegate>
{
    id <MMLimitedModeVerifyPasswordLogicDelegate> _m_delegate; // +0x8
}
- (void)checkPasswordExist;
- (void)verifyPassword:(id)arg1;
- (void)onCheckPasswordExistResp:(id)arg1;
- (void)onVerifyPasswordResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
