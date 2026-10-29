@interface PreEnterShowPrivacyPolicyStep : PreEnterBaseStep <WCPrivacyPolicyControlLogicDelegate, PBMessageObserverDelegate>
{
    NSString * m_content; // +0x18
    WCPrivacyPolicyControlLogic * m_privacyPolicyLogic; // +0x20
    BOOL m_bSendChoice; // +0x28
}
- (id)initWithXml:(id)arg1;
- (void)dealloc;
- (void)startStep;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)sendPrivacyPolicyChoice:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

