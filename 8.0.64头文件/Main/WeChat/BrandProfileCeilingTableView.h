@interface BrandProfileCeilingTableView : MMTableView
{
    UIGestureRecognizer * _otherGestureRecognizer; // +0x40
    CAGradientLayer * _backgroundLayer; // +0x48
}
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)initGackgroundLayer;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)otherGestureRecognizer;
- (void)setOtherGestureRecognizer:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (void).cxx_destruct;
@end
