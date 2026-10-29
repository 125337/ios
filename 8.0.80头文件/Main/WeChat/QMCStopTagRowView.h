@interface QMCStopTagRowView : UIScrollView <UIScrollViewDelegate>
{
    NSArray * _tagViews; // +0x8
    CAGradientLayer * _fadeMaskLayer; // +0x10
    double _spacing; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)didMoveToWindow;
- (void)_setupGestureDependencies;
- (void)setTagViews:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateFadeMask;
- (CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (void).cxx_destruct;
@end
