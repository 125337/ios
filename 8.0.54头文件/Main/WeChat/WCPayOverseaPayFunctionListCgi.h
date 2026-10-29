@interface WCPayOverseaPayFunctionListCgi : NSObject <PBMessageObserverDelegate>
{
    BOOL _m_isCgiEnd; // +0x8
    unsigned int _m_tpaCountry; // +0xc
    id <WCPayOverseaPayFunctionListCgiDelegate> _m_delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1 TpaCountry:(unsigned int)arg2;
- (void)dealloc;
- (BOOL)isCgiEnd;
- (void)startRequest;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_tpaCountry;
- (void)setM_tpaCountry:(unsigned int)arg1;
- (BOOL)m_isCgiEnd;
- (void)setM_isCgiEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

