@interface WCPayBusiF2FSucPageCgiWithRetry : NSObject <WCPayBusiF2FSucPageCgiDelegate>
{
    BOOL _m_delayStart; // +0x8
    unsigned int _m_firstDelay; // +0xc
    unsigned int _m_retryDelay; // +0x10
    unsigned int _m_maxRetryCount; // +0x14
    unsigned int _m_currentRetryCount; // +0x18
    id <WCPayBusiF2FSucPageCgiDelegate> _m_delegate; // +0x20
    WCPayBusiF2FSucPageCgi * _m_cgi; // +0x28
    BusiF2FSucPageReq * _m_request; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest:(id)arg1 delayStart:(BOOL)arg2 firstDelay:(unsigned int)arg3 retryDelay:(unsigned int)arg4 maxRetryCount:(unsigned int)arg5;
- (void)delayStartRequest;
- (void)onWCPayBusiF2FSucPageCgiResp:(id)arg1;
- (void)onWCPayBusiF2FSucPageCgiError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_cgi;
- (void)setM_cgi:(id)arg1;
- (BOOL)m_delayStart;
- (void)setM_delayStart:(BOOL)arg1;
- (unsigned int)m_firstDelay;
- (void)setM_firstDelay:(unsigned int)arg1;
- (unsigned int)m_retryDelay;
- (void)setM_retryDelay:(unsigned int)arg1;
- (unsigned int)m_maxRetryCount;
- (void)setM_maxRetryCount:(unsigned int)arg1;
- (id)m_request;
- (void)setM_request:(id)arg1;
- (unsigned int)m_currentRetryCount;
- (void)setM_currentRetryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

