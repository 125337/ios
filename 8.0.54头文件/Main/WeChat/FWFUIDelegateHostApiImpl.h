@interface FWFUIDelegateHostApiImpl : NSObject <FWFWKUIDelegateHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)delegateForIdentifier:(id)arg1;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

