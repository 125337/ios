@interface WCFinderTopPullStatusViewPlaceholder : NSProxy
{
    WCFinderTopPullStatusView * _statusView; // +0x8
    id /* block */ _commit; // +0x10
}
- (id)initWithView:(id)arg1 commit:(id /* block */)arg2;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (Class)superclass;
- (Class)class;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isProxy;
- (id)description;
- (id)debugDescription;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id /* block */)commit;
- (void)setCommit:(id /* block */)arg1;
- (void).cxx_destruct;
@end
