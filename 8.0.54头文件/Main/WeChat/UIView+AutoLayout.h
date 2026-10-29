@interface UIView (AutoLayout)
+ (id)NSDictionaryOfMetricsFromRULE:(id)arg1;
- (void)makeAutoLayout;
- (id)commonSuperviewWithView:(id)arg1;
- (void)removeAllConstraints;
- (void)makeFlexiableSmaller;
- (void)makeFlexiableLarger;
- (void)makeNoSmaller;
- (void)makeNoLarger;
- (void)topAlignWithView:(id)arg1 inset:(double)arg2;
- (void)leftAlignWithView:(id)arg1 inset:(double)arg2;
- (void)centerYAlignWithView:(id)arg1 inset:(double)arg2;
- (void)topAlignWithSuperViewForinset:(double)arg1;
- (void)leftAlignWithSuperViewForinset:(double)arg1;
- (void)rightAlignWithSuperViewForinset:(double)arg1;
- (void)bottomAlignWithSuperViewForinset:(double)arg1;
- (void)centerInVertical;
- (void)coverView:(id)arg1 withEdgeInset:(UIEdgeInsets)arg2;
- (void)constrainToWidth:(double)arg1;
- (void)constrainToHeight:(double)arg1;
- (void)constrainToMaxWidth:(double)arg1;
- (void)constrainToMaxHeight:(double)arg1;
- (void)constrainToMinWidth:(double)arg1;
- (void)constrainToMinHeight:(double)arg1;
- (void)rightBesidesView:(id)arg1 inset:(double)arg2;
- (void)leftBesidesView:(id)arg1 inset:(double)arg2;
- (void)topBesidesView:(id)arg1 inset:(double)arg2;
- (void)bottomBesidesView:(id)arg1 inset:(double)arg2;
- (void)rightBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)leftBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)topBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)bottomBesidesView:(id)arg1 lessThanInset:(double)arg2;
@end

