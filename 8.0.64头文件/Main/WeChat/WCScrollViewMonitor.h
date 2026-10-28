@interface WCScrollViewMonitor : NSObject
{
    UIScrollView * _targetScrollView; // +0x8
}
- (id)initWithTargetScrollView:(id)arg1;
- (id)searchVisibleScrollViewsInView:(id)arg1;
- (void)_recursivelySearchVisibleScrollViewsInView:(id)arg1 context:(id)arg2;
- (void)checkScrollingToTop;
- (BOOL)canScrollViewScrollToTop:(id)arg1;
- (BOOL)isScrollViewPossibleScrollingToTop:(id)arg1;
- (id)targetScrollView;
- (void).cxx_destruct;
@end
