@interface UIView (MMViewLayoutManagerExt)
- (id /* block */)mm_onDependentViewsLayoutChanged;
- (void)setMm_onDependentViewsLayoutChanged:(id /* block */)arg1;
- (BOOL)mm_autoNotifyLayoutChanges;
- (void)setMm_autoNotifyLayoutChanges:(BOOL)arg1;
@end
