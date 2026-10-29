@interface WARefreshFooter : WARefreshComponent
{
    double _ignoredScrollViewContentInsetBottom; // +0x30
}
+ (id)footerWithRefreshingBlock:(id /* block */)arg1;
- (void)prepare;
- (void)endRefreshingWithNoMoreData;
- (void)noticeNoMoreData;
- (void)resetNoMoreData;
- (double)ignoredScrollViewContentInsetBottom;
- (void)setIgnoredScrollViewContentInsetBottom:(double)arg1;
@end

