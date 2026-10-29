@interface NotMainQueueTimer : NSObject
{
    NSObject<OS_dispatch_source> * m_timerSource; // +0x8
    id <NotMainQueueTimerDelegate> _m_delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1 interval:(float)arg2 delay:(float)arg3;
- (void)stop;
- (id)m_timerSource;
- (void)setM_timerSource:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

