@interface MMLimitedModeSetPasswordLogic : NSObject <PBMessageObserverDelegate>
{
    id <MMLimitedModeSetPasswordLogicDelegate> _m_delegate; // +0x8
}
- (void)setPassword:(id)arg1 type:(int)arg2;
- (void)setPassword:(id)arg1 withName:(id)arg2 idNumber:(id)arg3;
- (void)resetPassword:(id)arg1 withTicket:(id)arg2;
- (void)clearPasswordWithTicket:(id)arg1;
- (void)setPasswordType:(unsigned int)arg1 withCode:(id)arg2 name:(id)arg3 idNumber:(id)arg4 ticket:(id)arg5;
- (void)onSetTeenagerModePwdResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

