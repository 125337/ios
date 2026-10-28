@interface UIStackView (MJExt)
- (id)backgroundView;
- (void)setActiveLayoutMargins:(UIEdgeInsets)arg1;
- (void)setSizeWithFixedWidth:(double)arg1;
- (double)calHeightWithFixedWidth:(double)arg1;
- (void)appendSpace:(double)arg1;
- (void)appendSpaceView:(double)arg1;
- (id)appendHeadLineLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendEmTitleLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendTextLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendHalfPageTextLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendLabel:(id)arg1 textStyle:(unsigned long long)arg2 withNextSpace:(double)arg3;
- (void)appendView:(id)arg1 withNextSpace:(double)arg2;
- (void)appendSeparator;
- (void)appendSeparatorWithStartPadding:(double)arg1;
- (void)appendSeparatorWithEndPadding:(double)arg1;
- (id)appendSeparatorWithStartPadding:(double)arg1 endPadding:(double)arg2;
- (id)appendSeparatorWithStartPadding:(double)arg1 endPadding:(double)arg2 atIndex:(unsigned long long)arg3;
- (void)mj_removeAllArrangedSubviews;
@end
