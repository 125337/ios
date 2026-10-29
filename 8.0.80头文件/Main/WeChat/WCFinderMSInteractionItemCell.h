@interface WCFinderMSInteractionItemCell : UICollectionViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _contentLabel; // +0x10
    CGSize _layoutSize; // +0x18
}
+ (double)titleWidthWithInteractionItem:(id)arg1;
+ (double)heightWithInteractionItem:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithInteractionItem:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
