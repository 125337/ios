@interface WCFinderRedDotThreadSafeSet : NSObject
{
    NSMutableSet * _setContainer; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (id)initWithQueueName:(id)arg1;
- (void)containerAddObject:(id)arg1;
- (void)containerRemoveObject:(id)arg1;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (void)containerEnumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)setContainer;
- (void)setSetContainer:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
