@interface WCPayJSApiSecureTunnelControlLogic : WCPayControlLogic <PBMessageObserverDelegate>
{
    NSDictionary * m_param; // +0x38
    JSEvent * m_jsEvent; // +0x40
    id <SecureTunnelLogicDelegate> m_delegate; // +0x48
}
- (id)initWithJSEvent:(id)arg1 delegate:(id)arg2 param:(id)arg3;
- (void)startLogic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_jsEvent;
- (void)setM_jsEvent:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
