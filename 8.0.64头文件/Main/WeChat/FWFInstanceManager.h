@interface FWFInstanceManager : NSObject
{
    id /* block */ _deallocCallback; // +0x8
    NSObject<OS_dispatch_queue> * _lockQueue; // +0x10
    NSMapTable * _identifiers; // +0x18
    NSMapTable * _weakInstances; // +0x20
    NSMapTable * _strongInstances; // +0x28
    long long _nextIdentifier; // +0x30
}
- (id)init;
- (id)initWithDeallocCallback:(id /* block */)arg1;
- (void)addDartCreatedInstance:(id)arg1 withIdentifier:(long long)arg2;
- (long long)addHostCreatedInstance:(id)arg1;
- (id)removeInstanceWithIdentifier:(long long)arg1;
- (id)instanceForIdentifier:(long long)arg1;
- (void)addInstance:(id)arg1 withIdentifier:(long long)arg2;
- (long long)identifierWithStrongReferenceForInstance:(id)arg1;
- (BOOL)containsInstance:(id)arg1;
- (unsigned long long)strongInstanceCount;
- (unsigned long long)weakInstanceCount;
- (id /* block */)deallocCallback;
- (id)lockQueue;
- (void)setLockQueue:(id)arg1;
- (id)identifiers;
- (void)setIdentifiers:(id)arg1;
- (id)weakInstances;
- (void)setWeakInstances:(id)arg1;
- (id)strongInstances;
- (void)setStrongInstances:(id)arg1;
- (long long)nextIdentifier;
- (void)setNextIdentifier:(long long)arg1;
- (void).cxx_destruct;
@end
