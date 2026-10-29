@interface WANativeFrozenContainerScrollView : UIScrollView <WATextViewDelegate>
- (id)initWithFrame:(CGRect)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)onWATextView:(id)arg1 frameDidChange:(CGRect)arg2;
@end

