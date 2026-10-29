@interface WebviewJSEventHandler_reqSoterAuthentication : WebviewJSEventHandlerBase <SoterUpdateMPAuthKeyCgiDelegate>
{
    JSEvent * _m_event; // +0x8
    SoterSignHelper * _m_soterSignHelper; // +0x10
    SoterUpdateMPAuthKeyCgi * _m_cgi; // +0x18
    unsigned long long _m_authMode; // +0x20
    NSString * _m_challenge; // +0x28
    NSString * _m_authContent; // +0x30
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)endEventWithErrorCode:(int)arg1 errorMsg:(id)arg2 useMode:(unsigned long long)arg3 resultJson:(id)arg4 resultSignature:(id)arg5 Event:(id)arg6;
- (void)endEventWithErrorCode:(int)arg1 errorMsg:(id)arg2 useMode:(unsigned long long)arg3 resultJson:(id)arg4 resultSignature:(id)arg5 bioData:(id)arg6 Event:(id)arg7;
- (id)resultJsonWithChallenge:(id)arg1;
- (void)endEventWithSignedResult:(id)arg1;
- (void)endEventWithChallenge:(id)arg1;
- (void)endEventUserCancelWithChallenge:(id)arg1;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (id)m_event;
- (void)setM_event:(id)arg1;
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
