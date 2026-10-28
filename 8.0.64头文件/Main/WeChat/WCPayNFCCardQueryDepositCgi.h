@interface WCPayNFCCardQueryDepositCgi : WCPayBaseCgi
{
    id <WCPayNFCCardQueryDepositCgiDelegate> _m_delegate; // +0x8
    unsigned long long _m_retryDelay; // +0x10
    unsigned long long _m_maxRetryCount; // +0x18
    unsigned long long _m_currentRetryCount; // +0x20
    DepositQueryDepositRequest * _m_queryDepositReuqest; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1 retryDelay:(unsigned long long)arg2 maxRetryCount:(unsigned long long)arg3;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)m_retryDelay;
- (void)setM_retryDelay:(unsigned long long)arg1;
- (unsigned long long)m_maxRetryCount;
- (void)setM_maxRetryCount:(unsigned long long)arg1;
- (unsigned long long)m_currentRetryCount;
- (void)setM_currentRetryCount:(unsigned long long)arg1;
- (id)m_queryDepositReuqest;
- (void)setM_queryDepositReuqest:(id)arg1;
- (void).cxx_destruct;
@end
