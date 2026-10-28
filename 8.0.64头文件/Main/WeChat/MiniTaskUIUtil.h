@interface MiniTaskUIUtil : NSObject
+ (id)defaultIconNameForBizName:(id)arg1;
+ (id)bizNameMapToDisplayName:(id)arg1;
+ (id)combineViewSnapshotImage:(id)arg1 withTabBarSnapshot:(id)arg2;
+ (id)combineViewSnapshotImage:(id)arg1 withTabBarSnapshot:(id)arg2 withAutoGenFakeNavBar:(BOOL)arg3;
+ (id)genCircleViewWithWidth:(double)arg1 isFill:(BOOL)arg2;
+ (id)colorForFakeMaskView;
+ (id)colorForFakeMaskViewInPresentAnimation;
+ (id)colorForPageSpacingInPresentAnimiation;
+ (id)genFakeSnapshotShadowViewWithFrame:(CGRect)arg1;
+ (BOOL)isCGRectApproximatelyEqual:(CGRect)arg1 toRect:(CGRect)arg2;
+ (CGRect)calculateExpandedFrame:(CGRect)arg1 left:(double)arg2 right:(double)arg3 top:(double)arg4 bottom:(double)arg5;
@end
