@interface WCFinderIntentService : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * m_lock; // +0x8
    MMLRUCache * intentCache; // +0x10
}
+ (id)hashIntent:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (void)clearLinkedList;
- (void)clearIntentItem:(id)arg1;
- (void)removeCache:(id)arg1;
- (void)putKey:(id)arg1 andVal:(id)arg2;
- (id)getValByKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)putKey:(id)arg1 andVal:(id)arg2 atObjHash:(id)arg3;
- (id)getValByKey:(id)arg1 atObjHash:(id)arg2;
- (id)traceValByKey:(id)arg1 atObjHash:(id)arg2;
- (BOOL)bindIntent:(id)arg1 andPreIntent:(id)arg2;
- (BOOL)clear:(id)arg1;
- (void).cxx_destruct;
@end
