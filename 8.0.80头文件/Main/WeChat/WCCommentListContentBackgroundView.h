@interface WCCommentListContentBackgroundView : UIView
{
    CAGradientLayer * _backgroundLayer; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)loadBackgroundLayer;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateGradientColors;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (void).cxx_destruct;
@end
