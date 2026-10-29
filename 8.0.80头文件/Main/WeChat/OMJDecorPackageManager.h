@interface OMJDecorPackageManager : NSObject
{
    SharedPtr<XMJDecorPackageManager> _backingDecorPackageManager; // +0x8
}
- (void)mj_loadDecorPackageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithBackingDecorPackageManager:(const void *)arg1;
- (void)dealloc;
- (id)loadCachedDecorPackageWithIdentifier:(id)arg1;
- (void)loadDecorPackageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)applyDecorPackage:(id)arg1 params:(id)arg2;
- (id)clearDecorPackage;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
