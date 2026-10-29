@interface WCAdSliderCardSlideJumpFooterView : UICollectionReusableView
{
    UIImageView * _arrowView; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)arrowView;
- (id)titleLabel;
- (void)updateFooterWithTitle:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
