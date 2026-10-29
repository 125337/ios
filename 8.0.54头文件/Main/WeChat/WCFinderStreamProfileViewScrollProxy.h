@interface WCFinderStreamProfileViewScrollProxy : NSProxy <UIScrollViewDelegate>
{
    _DelegateFlag _delegateFlag; // +0x8
    _DelegateFlag _forwardDelegateFlag; // +0x9
    id <UIScrollViewDelegate> _forwardDelegate; // +0x10
    id <UIScrollViewDelegate> _delegate; // +0x18
}
- (void)setDelegate:(id)arg1;
- (void)setForwardDelegate:(id)arg1;
- (void)checkDelegate:(_DelegateFlag *)arg1 delegate:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
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
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardDelegate;
- (id)delegate;
- (void).cxx_destruct;
@end

