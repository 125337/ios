@interface WCFinderProfilePageEvent : NSObject
{
    BOOL _waitContact; // +0x8
    id /* block */ _waitContactAdapter; // +0x10
    Class _depPage; // +0x18
    id /* block */ _depPageAdapter; // +0x20
    id /* block */ _asyncAdapter; // +0x28
}
+ (id)asyncFetchPage:(id /* block */)arg1;
+ (id)ensureContact:(id /* block */)arg1;
+ (id)depPage:(Class)arg1 adapter:(id /* block */)arg2;
- (BOOL)waitContact;
- (id)onFilledContact:(id)arg1;
- (void)setWaitContact:(BOOL)arg1;
- (id /* block */)waitContactAdapter;
- (void)setWaitContactAdapter:(id /* block */)arg1;
- (Class)depPage;
- (void)setDepPage:(Class)arg1;
- (id /* block */)depPageAdapter;
- (void)setDepPageAdapter:(id /* block */)arg1;
- (id /* block */)asyncAdapter;
- (void)setAsyncAdapter:(id /* block */)arg1;
- (void).cxx_destruct;
@end
