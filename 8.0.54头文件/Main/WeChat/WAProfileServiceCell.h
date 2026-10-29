@interface WAProfileServiceCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMWebImageView * _webImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _detailLabel; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

