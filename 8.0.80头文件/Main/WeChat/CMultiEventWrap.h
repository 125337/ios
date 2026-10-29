@interface CMultiEventWrap : NSObject
{
    BOOL m_start; // +0x8
    BOOL m_useNewMultiEvent; // +0x9
    BOOL m_useNewMultiEventForHandler; // +0xa
    CMultiEvent * m_eventMgr; // +0x10
    CMultiEventNew * m_eventMgrNew; // +0x18
    NSRecursiveLock * m_eventLock; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)IsStart;
- (void)Start;
- (void)Stop;
- (void)ClearStopEvent;
- (void)AddEvent:(id)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (id)FindEvent:(unsigned int)arg1;
- (void).cxx_destruct;
@end
