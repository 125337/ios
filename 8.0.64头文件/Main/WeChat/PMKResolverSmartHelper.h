@interface PMKResolverSmartHelper : NSObject
{
    BOOL _resolved; // +0x8
    id /* block */ _resolver; // +0x10
}
- (void)resolver:(id)arg1;
- (void)dealloc;
- (id /* block */)resolver;
- (void)setResolver:(id /* block */)arg1;
- (BOOL)resolved;
- (void)setResolved:(BOOL)arg1;
- (void).cxx_destruct;
@end
