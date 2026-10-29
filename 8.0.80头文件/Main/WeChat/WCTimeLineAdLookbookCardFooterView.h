@interface WCTimeLineAdLookbookCardFooterView : UICollectionReusableView
{
    MMUILabel * _slideTitleLabel; // +0x8
    UIImageView * _arrowView; // +0x10
    double _iconMarginBottom; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)arrowView;
- (void)updateIconSizeWithViewController:(id)arg1 scene:(unsigned long long)arg2;
- (id)slideTitleLabel;
- (void)updateFooterWithTitle:(id)arg1;
- (void)setSlideTitleLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (double)iconMarginBottom;
- (void)setIconMarginBottom:(double)arg1;
- (void).cxx_destruct;
@end
