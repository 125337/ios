@interface MMLimitedModeGuardianLogic : NSObject <PBMessageObserverDelegate>
{
    id <MMLimitedModeGuardianLogicDelegate> _m_delegate; // +0x8
}
- (void)getTeenagerModePreBindGuardianInfo:(id)arg1 bindScene:(unsigned long long)arg2;
- (void)onGetTeenagerModePreBindGuardianInfo:(id)arg1;
- (void)bindTeenagerModeGuardian:(id)arg1 ticket:(id)arg2 bindScene:(unsigned long long)arg3;
- (void)onBindTeenagerModeGuardian:(id)arg1;
- (void)unbindTeenagerModeGuardian:(id)arg1;
- (void)onUnBindTeenagerModeGuardian:(id)arg1;
- (void)agreeTeenagerModeAuthorization:(id)arg1 businessKey:(id)arg2 businessType:(unsigned int)arg3 requestAuthorizationMsgid:(unsigned long long)arg4;
- (void)onAgreeTeenagerModeAuthorization:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

