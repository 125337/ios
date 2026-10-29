@interface WCPayOverseaPayFunctionListCgi_v2 : NSObject <WCPayWalletGetAllFunctionCgiDelegate>
{
    BOOL _m_isCgiEnd; // +0x8
    unsigned int _m_tpaCountry; // +0xc
    id <WCPayOverseaPayFunctionListCgiDelegate> _m_delegate; // +0x10
    WCPayWalletGetAllFunctionCgi * _m_getAllFunctionCgi; // +0x18
}
+ (id)oldRespFrom:(id)arg1;
+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 TpaCountry:(unsigned int)arg2;
- (BOOL)isCgiEnd;
- (void)startRequest;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (void)onGetWalletAllFunctionCgiResp:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_tpaCountry;
- (void)setM_tpaCountry:(unsigned int)arg1;
- (BOOL)m_isCgiEnd;
- (void)setM_isCgiEnd:(BOOL)arg1;
- (id)m_getAllFunctionCgi;
- (void)setM_getAllFunctionCgi:(id)arg1;
- (void).cxx_destruct;
@end

