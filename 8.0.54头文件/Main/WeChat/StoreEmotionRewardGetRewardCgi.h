@interface StoreEmotionRewardGetRewardCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce; // +0x8
    NSString * m_pid; // +0x10
    unsigned int m_eventID; // +0x18
    id <StoreEmotionRewardGetRewardCgiDelegate> _delegate; // +0x20
}
- (id)initWithPid:(id)arg1;
- (BOOL)startRequestWithNeedAllData:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (void)callFailedDelegateForUnrewardable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

