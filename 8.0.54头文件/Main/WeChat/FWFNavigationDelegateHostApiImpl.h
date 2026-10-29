@interface FWFNavigationDelegateHostApiImpl : NSObject <FWFWKNavigationDelegateHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)navigationDelegateForIdentifier:(id)arg1;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)setDidFinishNavigationForDelegateWithIdentifier:(id)arg1 functionIdentifier:(id)arg2 error:(id *)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

