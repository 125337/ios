@interface MMScrollViewProxy : NSProxy <MMScrollMetricsDelegate, UIScrollViewDelegate>
{
    MMScrollViewMetrics * _metrics; // +0x8
    BOOL _scrolling; // +0x10
    id <UIScrollViewDelegate> _delegate; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)setScrolling:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
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
- (void)onMMScrollMetricsWillCollect:(id)arg1;
- (void)onMMScrollMetricsDidCollected:(id)arg1;
- (BOOL)scrolling;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
