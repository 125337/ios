@interface FWFInstanceManager : NSObject
{
    NSObject<OS_dispatch_queue> * _lockQueue; // +0x8
    NSMapTable * _identifiersToInstances; // +0x10
    NSMapTable * _instancesToIdentifiers; // +0x18
}
- (id)init;
- (void)addInstance:(id)arg1 withIdentifier:(long long)arg2;
- (id)removeInstanceWithIdentifier:(long long)arg1;
- (long long)removeInstance:(id)arg1;
- (id)instanceForIdentifier:(long long)arg1;
- (long long)identifierForInstance:(id)arg1;
- (id)lockQueue;
- (void)setLockQueue:(id)arg1;
- (id)identifiersToInstances;
- (void)setIdentifiersToInstances:(id)arg1;
- (id)instancesToIdentifiers;
- (void)setInstancesToIdentifiers:(id)arg1;
- (void).cxx_destruct;
@end

