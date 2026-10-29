@interface MMScrollViewProxy : NSProxy <UIScrollViewDelegate>
{
    BOOL _scrolling; // +0x8
    id <UIScrollViewDelegate> _delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
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
- (BOOL)scrolling;
- (void)setScrolling:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

