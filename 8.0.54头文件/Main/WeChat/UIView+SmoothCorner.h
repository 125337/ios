@interface UIView (SmoothCorner)
- (void)setSmoothCornerRadius:(double)arg1;
- (double)smoothCornerRadius;
- (void)applySmoothRadius:(double)arg1 withSmoothRate:(double)arg2;
- (void)applySmoothRadius:(double)arg1 corners:(unsigned long long)arg2;
- (void)applySmoothRadius:(double)arg1 withSmoothRate:(double)arg2 corners:(unsigned long long)arg3;
- (void)setNeedReApplyCorner:(BOOL)arg1;
- (BOOL)needReApplyCorner;
- (void)setSmoothMask:(id)arg1;
- (id)smoothMask;
- (BOOL)realApplySmoothRadius:(double)arg1 withSmoothRate:(double)arg2 corners:(unsigned long long)arg3;
@end

