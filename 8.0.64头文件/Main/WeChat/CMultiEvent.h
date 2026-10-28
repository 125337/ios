@interface CMultiEvent : NSObject
{
    BOOL m_bStart; // +0x8
    NSMutableArray * m_arrEvent; // +0x10
    NSMutableDictionary * m_dicThreadEvent; // +0x18
    NSOperationQueue * m_operationQueuEvent; // +0x20
    NSRecursiveLock * m_oEventLock; // +0x28
}
- (id)init;
- (void)dealloc;
- (BOOL)IsStart;
- (void)Start;
- (void)Stop;
- (void)ClearStopEvent;
- (void)AddEvent:(id)arg1;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (id)FindEvent:(unsigned int)arg1;
- (id)GetLock;
- (void).cxx_destruct;
@end
