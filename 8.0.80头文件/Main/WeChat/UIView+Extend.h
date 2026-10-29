@interface UIView (Extend)
+ (id)rootDesc;
+ (BOOL)isView:(id)arg1 superViewOfView:(id)arg2;
- (id)rootDesc;
- (void)autoresizingWithHorizontalCenter;
- (void)autoresizingWithVerticalCenter;
- (void)autoresizingWithStrechFullSize;
- (void)removeAllSubViews;
- (void)removeSubViewWithTag:(unsigned int)arg1;
- (void)removeSubViewWithClass:(Class)arg1;
- (id)viewWithClass:(Class)arg1;
- (void)subviewsWithClass:(Class)arg1 insertIntoArray:(id)arg2;
- (id)subviewsWithClass:(Class)arg1;
- (void)recursiveEnumerateSubviewsUsingBlock:(id /* block */)arg1;
- (void)removeAllGestureRecognizer;
- (id)descendantOrSelfWithClass:(Class)arg1;
- (id)ancestorOrSelfWithClass:(Class)arg1;
- (id)colorOfPoint:(CGPoint)arg1;
- (id)getSubViewAccessibilityRecursive;
- (id)findViewWithTag:(long long)arg1;
- (BOOL)isSubViewOf:(id)arg1;
- (id)subviewWithClassNotCycle:(Class)arg1;
@end
