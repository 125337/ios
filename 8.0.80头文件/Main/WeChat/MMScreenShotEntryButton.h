@interface MMScreenShotEntryButton : MMUIButton
{
    UIView * _contentView; // +0x8
    CAShapeLayer * _backgroundLayer; // +0x10
    CAShapeLayer * _contentMaskLayer; // +0x18
    CAShapeLayer * _outerBorderLayer; // +0x20
    UIImageView * _iconImageView; // +0x28
    UILabel * _centerLabel; // +0x30
    UIView * _highlightMaskView; // +0x38
    SightIconView * _loadingView; // +0x40
    CGSize _iconSize; // +0x48
}
- (id)initWithEntry:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)textSizeForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setLoading:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (id)contentMaskLayer;
- (void)setContentMaskLayer:(id)arg1;
- (id)outerBorderLayer;
- (void)setOuterBorderLayer:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
