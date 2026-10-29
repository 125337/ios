@interface UBSignalObserver : NSObject
{
    BOOL _cancelsAfterNextFire; // +0x8
    NSOperationQueue * _operationQueue; // +0x10
    unsigned long long _priority; // +0x18
    UBBaseSignal * _signal; // +0x20
    id _observer; // +0x28
    id /* block */ _callback; // +0x30
}
- (id)initWithSignal:(id)arg1 observer:(id)arg2 queue:(id)arg3 callback:(id /* block */)arg4 priority:(unsigned long long)arg5;
- (id)debugDescription;
- (void)cancel;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (BOOL)cancelsAfterNextFire;
- (void)setCancelsAfterNextFire:(BOOL)arg1;
- (unsigned long long)priority;
- (id)signal;
- (void)setSignal:(id)arg1;
- (id)observer;
- (id /* block */)callback;
- (void).cxx_destruct;
@end
