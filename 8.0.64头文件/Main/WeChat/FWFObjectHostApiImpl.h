@interface FWFObjectHostApiImpl : NSObject <FWFNSObjectHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (void)addObserverForObjectWithIdentifier:(long long)arg1 observerIdentifier:(long long)arg2 keyPath:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)removeObserverForObjectWithIdentifier:(long long)arg1 observerIdentifier:(long long)arg2 keyPath:(id)arg3 error:(id *)arg4;
- (void)disposeObjectWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
