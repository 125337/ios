@interface MJRefreshFooter : MJRefreshComponent
{
    BOOL _automaticallyHidden; // +0x30
    double _ignoredScrollViewContentInsetBottom; // +0x38
}
+ (id)footerWithRefreshingBlock:(id /* block */)arg1;
+ (id)footerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
- (void)prepare;
- (id)linkTo:(id)arg1;
- (void)endRefreshingWithNoMoreData;
- (void)noticeNoMoreData;
- (void)resetNoMoreData;
- (void)setAutomaticallyHidden:(BOOL)arg1;
- (double)ignoredScrollViewContentInsetBottom;
- (void)setIgnoredScrollViewContentInsetBottom:(double)arg1;
- (BOOL)isAutomaticallyHidden;
@end
