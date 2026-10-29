@interface UIScrollView (WAContainerWKScrollView)
+ (Class)wkChildScrollViewClass;
+ (void)hookWKChildScrollView;
+ (BOOL)isWKChildScrollViewHooked:(id)arg1;
+ (void)doSwizzle:(Class)arg1;
- (void)setLockScrollEnable:(BOOL)arg1;
- (BOOL)lockScrollEnable;
- (id)bindContainerScrollViewLogic;
- (void)setContainerScrollViewLogic:(id)arg1;
- (id)containerScrollViewLogic;
- (void)container_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)container_setDelegate:(id)arg1;
- (void)container_setScrollEnabled:(BOOL)arg1;
- (void)container_didMoveToWindow;
- (void)container_didMoveToSuperview;
- (void)sendTongCengChangedWKScrollView;
@end

