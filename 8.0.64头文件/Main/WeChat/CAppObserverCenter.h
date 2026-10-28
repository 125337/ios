@interface CAppObserverCenter : NSObject <NotifyFromMainCtrlDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    NSMutableDictionary * m_eventObserverDict; // +0x10
    NSMutableDictionary * m_messageObserverDict; // +0x18
    NSMutableDictionary * m_pbEventObserverDict; // +0x20
    NSMutableDictionary * m_observer2EventDict; // +0x28
    NSMutableDictionary * m_observer2MessageDict; // +0x30
    NSMutableDictionary * m_observer2PbEventDict; // +0x38
}
+ (id)defaultCenter;
- (id)init;
- (id)observerKey:(id)arg1;
- (void)addObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (void)removeObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (void)removeObserverObject:(id)arg1 event2Observer:(id)arg2 observer2Event:(id)arg3;
- (void)addEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeEventObserverListItemByObject:(id)arg1;
- (void)addMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeMessageObserverListItemByObject:(id)arg1;
- (void)removeMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addPBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removePBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removePBEventObserverListItemByObject:(id)arg1;
- (id)observerListByEvent:(id)arg1;
- (id)observerListByMessage:(id)arg1;
- (id)observerListByPBEvent:(id)arg1;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)NotifyFromMainCtrl:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
