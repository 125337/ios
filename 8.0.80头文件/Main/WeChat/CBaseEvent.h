@interface CBaseEvent : NSObject <NotifyFromPrtlDelegate>
{
    BOOL m_bStart; // +0x8
    unsigned int m_uiEventType; // +0xc
    Uin64 m_uiWXUin; // +0x10
    unsigned int m_uiEventID; // +0x18
    BOOL m_bStop; // +0x1c
    BOOL m_bEventFinish; // +0x1d
    BOOL m_bNeedNotify; // +0x1e
    long long m_uiPriority; // +0x20
    NSThread * m_oCurThread; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)TryStart;
- (void)Stop;
- (void)TerminateIfNotReceived;
- (void)SetStart:(BOOL)arg1;
- (void)ForceStop;
- (BOOL)IsStart;
- (BOOL)HasEventHandler;
- (void)emptyThreadTimer:(id)arg1;
- (void)AddOperationQueueEvent:(id)arg1;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (long long)qosForPriority:(long long)arg1;
- (void)async:(id /* block */)arg1;
- (void)async:(id /* block */)arg1 priority:(long long)arg2;
- (id)asyncName;
- (unsigned int)GetEventType;
- (void)setM_uiEventType:(unsigned int)arg1;
- (Uin64)m_uiWXUin;
- (void)setM_uiWXUin:(Uin64)arg1;
- (unsigned int)m_uiEventID;
- (void)setM_uiEventID:(unsigned int)arg1;
- (BOOL)m_bNeedNotify;
- (void)setM_bNeedNotify:(BOOL)arg1;
- (id)m_oCurThread;
- (void)setM_oCurThread:(id)arg1;
- (BOOL)m_bStop;
- (void)setM_bStop:(BOOL)arg1;
- (BOOL)m_bEventFinish;
- (void)setM_bEventFinish:(BOOL)arg1;
- (long long)m_uiPriority;
- (void)setM_uiPriority:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
