@interface WCFinderRedDotThreadSafeSet : NSObject
{
    NSMutableSet * _setContainer; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
- (id)initWithQueueName:(id)arg1;
- (id)initWithQueueName:(id)arg1 setCapacity:(long long)arg2;
- (void)containerAddObject:(id)arg1;
- (void)containerRemoveObject:(id)arg1;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (BOOL)containerContainsObject:(id)arg1;
- (void)containerEnumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)setContainer;
- (void)setSetContainer:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
