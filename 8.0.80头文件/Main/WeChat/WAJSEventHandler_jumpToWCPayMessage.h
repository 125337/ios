@interface WAJSEventHandler_jumpToWCPayMessage : WAJSEventHandler_BaseEvent <WCBaseControlMgrExt>
{
    WCPayJumpC2CMessageJsapiLogic * _m_jumpC2CMessageJsapiLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (id)m_jumpC2CMessageJsapiLogic;
- (void)setM_jumpC2CMessageJsapiLogic:(id)arg1;
- (void).cxx_destruct;
@end
