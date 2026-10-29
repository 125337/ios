@interface WCGetLatestAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt>
{
    JSEvent * m_jsEvent; // +0x30
    WCAddressAuthenticationSturct * m_oWCAddressAuthenticationSturct; // +0x38
    WCAddressBaseAddress * m_oWCAddressBaseAddress; // +0x40
    NSString * m_nsAppUserName; // +0x48
}
- (id)initWithJSEvent:(id)arg1 AuthenticationInfo:(id)arg2;
- (void)handleGetLatestAddress;
- (void)startLogic;
- (void)stopLogic;
- (void)OnGetLatestAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnAcceptGetLatestAddress;
- (void)OnNotAcceptGetLatestAddress;
- (void).cxx_destruct;
@end
