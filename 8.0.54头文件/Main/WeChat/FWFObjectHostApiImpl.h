@interface FWFObjectHostApiImpl : NSObject <FWFNSObjectHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)objectForIdentifier:(id)arg1;
- (void)addObserverForObjectWithIdentifier:(id)arg1 observerIdentifier:(id)arg2 keyPath:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)removeObserverForObjectWithIdentifier:(id)arg1 observerIdentifier:(id)arg2 keyPath:(id)arg3 error:(id *)arg4;
- (void)disposeObjectWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

