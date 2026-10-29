@interface TingMinimizeManagerObjc : NSObject <TingMinimizeManager, TingMinimizeExtension>
{
    NSMutableArray * _listenerArray; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
+ (id)create;
- (id)init;
- (BOOL)hasActiveMinimizeTask;
- (void)deactiveMinimizeTask:(id /* block */)arg1;
- (void)activeMinimizeTask:(id /* block */)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)minimizeMar:(id)arg1 onMonimizeActiveStateChanged:(BOOL)arg2;
- (id)listenerArray;
- (void)setListenerArray:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

