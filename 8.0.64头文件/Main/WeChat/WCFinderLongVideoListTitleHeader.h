@interface WCFinderLongVideoListTitleHeader : UICollectionReusableView
{
    UILabel * _titleLabel; // +0x8
    UIView * _sepLine; // +0x10
    MMUIButton * _rightArrowBtn; // +0x18
    WCFinderLongVideoListTitleHeaderConfig * _config; // +0x20
    CGSize _layoutSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithConfig:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)rightArrowBtn;
- (void)setRightArrowBtn:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
