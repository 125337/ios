@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <PBMessageObserverDelegate>
{
    unsigned int m_idc_redirect_count; // +0x30
    unsigned int m_mmtls_set_count; // +0x34
    unsigned long long m_ui64BeginTime; // +0x38
    unsigned int m_uiABtest; // +0x40
    unsigned int m_uiCCType; // +0x44
}
- (id)initWithData:(id)arg1;
- (void)setABTest:(unsigned int)arg1 CCType:(unsigned int)arg2;
- (void)reportABTestStatus:(unsigned int)arg1;
- (void)dealloc;
- (void)startLogic;
- (id)genNewRegRequest;
- (BOOL)regAccount;
- (void)handleNewRegResponse:(id)arg1;
- (void)handleNewRegResponseOK:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)pause;
- (void)resume;
@end
