@interface WCPayBizF2FZeroCallBackAutoRetryCgi : NSObject <WCPayBusiF2FZeroCallBackCgiDelegate>
{
    unsigned int _m_retryTimes; // +0x8
    unsigned int _m_currentRetryTimes; // +0xc
    double _m_retryInterval; // +0x10
    id <WCPayBusiF2FZeroCallBackCgiDelegate> _m_cgiDelegate; // +0x18
    WCPayBusiF2FZeroCallBackCgi * _m_zeroPayCgi; // +0x20
    BusiF2FZeroCallBackReq * _m_request; // +0x28
}
- (id)initWithDelegate:(id)arg1 retryTimes:(unsigned int)arg2 retryInterval:(unsigned int)arg3;
- (void)startRequest:(id)arg1;
- (void)startFirstRequest;
- (void)startRetryRequest;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(id)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiError:(id)arg1;
- (unsigned int)m_retryTimes;
- (void)setM_retryTimes:(unsigned int)arg1;
- (double)m_retryInterval;
- (void)setM_retryInterval:(double)arg1;
- (id)m_cgiDelegate;
- (void)setM_cgiDelegate:(id)arg1;
- (id)m_zeroPayCgi;
- (void)setM_zeroPayCgi:(id)arg1;
- (id)m_request;
- (void)setM_request:(id)arg1;
- (unsigned int)m_currentRetryTimes;
- (void)setM_currentRetryTimes:(unsigned int)arg1;
- (void).cxx_destruct;
@end

