@interface SoterUpdateMPAuthKeyCgi : NSObject <PBMessageObserverDelegate>
{
    id <SoterUpdateMPAuthKeyCgiDelegate> _m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequestWithPublicKeyString:(id)arg1;
- (id)elementJsonWithPublicKeyString:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callOkDelegate;
- (void)callErrorDelegate;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
