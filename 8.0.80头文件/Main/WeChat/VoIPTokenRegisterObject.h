@interface VoIPTokenRegisterObject : NSObject <PBMessageObserverDelegate>
{
    NSData * m_token; // +0x8
    id <VoIPTokenRegisterObjectDelegate> _m_delegate; // +0x10
}
- (id)initWithToken:(id)arg1;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callErrorDelegate;
- (void)callOkDelegate;
- (id)m_token;
- (void)setM_token:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
