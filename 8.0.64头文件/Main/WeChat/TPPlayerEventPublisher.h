@interface TPPlayerEventPublisher : NSObject
{
    NSPointerArray * _receivers; // +0x8
    TPRecursiveLock * _lock; // +0x10
}
- (id)init;
- (void)addEventReceiver:(id)arg1;
- (void)removeEventReceiver:(id)arg1;
- (unsigned long long)getReceiverCount;
- (void)publishEvent:(id)arg1;
- (void)clear;
- (long long)idxOfReceiver:(id)arg1;
- (id)receivers;
- (void)setReceivers:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
