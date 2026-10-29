@interface StoreEmotionRewardAskForRewardCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce; // +0x8
    NSString * m_pid; // +0x10
    unsigned int m_eventID; // +0x18
    id <StoreEmotionRewardAskForRewardCgiDelegate> _delegate; // +0x20
}
- (id)initWithPid:(id)arg1;
- (BOOL)startRequestWithPrice:(id)arg1 scene:(unsigned int)arg2 enterScene:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (void)callFailedDelegateWithTips:(id)arg1;
- (void)showErrorTipsWithWording:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

