@interface FWFUIViewHostApiImpl : NSObject <FWFUIViewHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (void)setBackgroundColorForViewWithIdentifier:(id)arg1 toValue:(id)arg2 error:(id *)arg3;
- (void)setOpaqueForViewWithIdentifier:(id)arg1 isOpaque:(id)arg2 error:(id *)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

