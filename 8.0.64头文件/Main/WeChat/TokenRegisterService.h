@interface TokenRegisterService : MMUserService <MMKernelExt, PBMessageObserverDelegate, VoIPTokenRegisterObjectDelegate, MMServiceProtocol>
{
    BOOL m_apnsTokenRecovered; // +0x8
    unsigned int m_apnsTokenEntrance; // +0xc
    NSString * m_lastRegApnsToken; // +0x10
    NSData * m_lastRegVoIPToken; // +0x18
    NSString * m_lastApnsToken; // +0x20
    VoIPTokenRegisterObject * m_voipRegister; // +0x28
    VoIPTokenRegisterObject * m_secondTryRegister; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onApnsTokenUpdate:(id)arg1;
- (void)onVoIPTokenUpdate:(id)arg1;
- (void)recoverApnsToken;
- (void)createSendApnsTokenEvent:(id)arg1;
- (void)createSendVoIPTokenEvent:(id)arg1;
- (void)reportVoIPPayLoad:(id)arg1;
- (id)lastRegApnsToken;
- (id)lastRegVoIPToken;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRespForSendToken:(id)arg1;
- (void)handleRespForAPNSReport:(id)arg1;
- (void)onAuthOK;
- (void)onVoIPTokenRegisterObjectError;
- (void)onVoIPTokenRegisterObjectOk;
- (void).cxx_destruct;
@end
