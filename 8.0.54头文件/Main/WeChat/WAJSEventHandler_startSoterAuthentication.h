@interface WAJSEventHandler_startSoterAuthentication : WAJSEventHandler_BaseEvent <SoterUpdateMPAuthKeyCgiDelegate>
{
    SoterSignHelper * _m_soterSignHelper; // +0x8
    SoterUpdateMPAuthKeyCgi * _m_cgi; // +0x10
    unsigned long long _m_authMode; // +0x18
    NSString * _m_challenge; // +0x20
    NSString * _m_authContent; // +0x28
}
- (void)handleJSEvent:(id)arg1;
- (id)authModeToStr:(unsigned long long)arg1;
- (unsigned long long)authModeStrToNum:(id)arg1;
- (void)endEventWithErrorCode:(int)arg1 errorMsg:(id)arg2 useMode:(unsigned long long)arg3 resultJson:(id)arg4 resultSignature:(id)arg5;
- (id)resultJsonWithChallenge:(id)arg1;
- (void)endEventWithSignedResult;
- (void)endEventWithChallenge:(id)arg1;
- (void)endEventUserCancelWithChallenge:(id)arg1;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (id)m_soterSignHelper;
- (void)setM_soterSignHelper:(id)arg1;
- (id)m_cgi;
- (void)setM_cgi:(id)arg1;
- (unsigned long long)m_authMode;
- (void)setM_authMode:(unsigned long long)arg1;
- (id)m_challenge;
- (void)setM_challenge:(id)arg1;
- (id)m_authContent;
- (void)setM_authContent:(id)arg1;
- (void).cxx_destruct;
@end

