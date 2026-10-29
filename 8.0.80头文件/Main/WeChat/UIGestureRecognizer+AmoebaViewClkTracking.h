@interface UIGestureRecognizer (AmoebaViewClkTracking)
- (id)amoebaTargetActionMap;
- (void)setAmoebaTargetActionMap:(id)arg1;
- (id)hookGes_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)hookGes_addTarget:(id)arg1 action:(SEL)arg2;
- (void)amoeba_cacheTarget:(id)arg1 action:(SEL)arg2;
- (void)amoeba_addTrackingIfNeeded;
- (void)hookGes_removeTarget:(id)arg1 action:(SEL)arg2;
- (void)amoeba_trackGestureAction:(id)arg1;
@end
