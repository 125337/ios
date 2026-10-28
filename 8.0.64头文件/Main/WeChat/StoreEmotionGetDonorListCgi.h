@interface StoreEmotionGetDonorListCgi : MMObject <PBMessageObserverDelegate>
{
    NSString * m_pid; // +0x8
    NSMutableArray * m_donorList; // +0x10
    SKBuiltinBuffer_t * m_reqBuf; // +0x18
    BOOL m_hasMore; // +0x20
    unsigned int m_eventID; // +0x24
    id <StoreEmotionGetDonorListCgiDelegate> _delegate; // +0x28
}
- (id)initWithPid:(id)arg1;
- (BOOL)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
