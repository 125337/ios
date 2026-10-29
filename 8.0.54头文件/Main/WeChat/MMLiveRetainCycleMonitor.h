@interface MMLiveRetainCycleMonitor : NSObject
{
    BOOL _isRuning; // +0x8
    NSMutableDictionary * _weakObjectsDict; // +0x10
    NSMutableArray * _rootWeakObjects; // +0x18
    NSMutableSet * _rootWeakObjectsAddressSet; // +0x20
    MMTimer * _scheduleTimer; // +0x28
    NSRecursiveLock * _lock; // +0x30
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x38
    MMGCRootsTracer * _tracer; // +0x40
}
+ (id)shareInstance;
- (id)init;
- (void)stopMonitor;
- (void)startMonitor;
- (void)registerRootObjects;
- (void)registerWeakServiceByName:(id)arg1;
- (id)getRawRootObjects;
- (void)checkLeakObjects;
- (void)asyncCheckLeakObjects;
- (void)addWillDeallocObject:(id)arg1;
- (void)addGCRootObjects:(id)arg1;
- (id)currentCheckList;
- (id)currentInsertList;
- (BOOL)disableFinderBlockRetainCycle;
- (id)weakObjectsDict;
- (void)setWeakObjectsDict:(id)arg1;
- (id)rootWeakObjects;
- (void)setRootWeakObjects:(id)arg1;
- (id)rootWeakObjectsAddressSet;
- (void)setRootWeakObjectsAddressSet:(id)arg1;
- (id)scheduleTimer;
- (void)setScheduleTimer:(id)arg1;
- (BOOL)isRuning;
- (void)setIsRuning:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (id)tracer;
- (void)setTracer:(id)arg1;
- (void).cxx_destruct;
@end

