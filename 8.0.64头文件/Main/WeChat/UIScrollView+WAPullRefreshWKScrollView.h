@interface UIScrollView (WAPullRefreshWKScrollView)
+ (void)hookPullRefreshWKScrollView:(id)arg1;
+ (void)preDoSwizzle;
+ (void)doSwizzlePullRefresh:(Class)arg1;
- (void)pullRefresh_setContentOffset:(CGPoint)arg1;
- (void)pullRefresh_setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)pullRefresh_setScrollEnabled:(BOOL)arg1;
- (void)pullRefresh_setBackgroundColor:(id)arg1;
- (void)setIsForbidScrollViewYZero:(BOOL)arg1;
- (BOOL)isForbidScrollViewYZero;
- (BOOL)isPullRefreshScrollView;
- (BOOL)isForbidScrollViewBackgroundColor;
- (void)setIsForbidScrollViewBackgroundColor:(BOOL)arg1;
- (BOOL)isForbidScrollViewScrollEnable;
- (void)setIsForbidScrollViewScrollEnable:(BOOL)arg1;
@end
