@interface UIView (Swizzle)
+ (void)load;
+ (void)mmSetAnimationsEnabled:(BOOL)arg1;
+ (void)mmSetOrientationFlag:(long long)arg1;
+ (long long)mmOrientationFlag;
- (BOOL)mm_enableSnapshotForSelf;
- (id)mm_snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (BOOL)mm_drawViewHierarchyInRect:(CGRect)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)checkAndReportAfterScreenUpdate;
@end
