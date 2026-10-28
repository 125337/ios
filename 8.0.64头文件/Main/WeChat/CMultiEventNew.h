@interface CMultiEventNew : NSObject
{
    BOOL m_bStart; // +0x8
    NSMutableArray * m_arrEvent; // +0x10
    NSMutableArray * m_arrPendingEvent; // +0x18
    NSRecursiveLock * m_oEventLock; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)IsStart;
- (void)Start;
- (void)TryStartEvent:(id)arg1;
- (void)Stop;
- (void)ClearStopEvent;
- (void)AddEvent:(id)arg1;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (id)FindEvent:(unsigned int)arg1;
- (void).cxx_destruct;
@end
