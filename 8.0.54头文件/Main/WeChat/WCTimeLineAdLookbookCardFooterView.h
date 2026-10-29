@interface WCTimeLineAdLookbookCardFooterView : UICollectionReusableView
{
    MMUILabel * _slideTitleLabel; // +0x8
    UIImageView * _arrowView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)arrowView;
- (id)slideTitleLabel;
- (void)updateFooterWithTitle:(id)arg1;
- (void)setSlideTitleLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

