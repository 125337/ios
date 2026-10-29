@interface JumpEmoticonDetailCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_eventId; // +0x8
    id <IJumpEmoticonDetailCgiDelegate> m_delegate; // +0x10
    id /* block */ m_okBlock; // +0x18
    id /* block */ m_failedBlock; // +0x20
    NSString * m_urlString; // +0x28
}
+ (id)instanceWithDelegate:(id)arg1;
+ (id)instanceWithOkBlock:(id /* block */)arg1 failedBlock:(id /* block */)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)startRequestWithUrlString:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCgiFailed:(id)arg1;
- (void)onCgiOkWithPid:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_eventId;
- (void)setM_eventId:(unsigned int)arg1;
- (id /* block */)m_okBlock;
- (void)setM_okBlock:(id /* block */)arg1;
- (id /* block */)m_failedBlock;
- (void)setM_failedBlock:(id /* block */)arg1;
- (id)m_urlString;
- (void)setM_urlString:(id)arg1;
- (void).cxx_destruct;
@end
