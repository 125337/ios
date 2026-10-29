@interface WCPayFaceHBCgi : MMObject <PBMessageObserverDelegate>
{
    id <WCPayFaceHBCgiDelegate> m_delegate; // +0x8
    NSString * m_key; // +0x10
    unsigned int _cgiNumber; // +0x18
    unsigned int _m_uiRetryCount; // +0x1c
}
- (id)initWithDelegate:(id)arg1 Key:(id)arg2;
- (void)dealloc;
- (void)startRequest:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)cgiNumber;
- (void)setCgiNumber:(unsigned int)arg1;
- (unsigned int)m_uiRetryCount;
- (void)setM_uiRetryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

