@interface IntelligentCategoryDisplayCell : UICollectionViewCell
{
    UILabel * _titleLabel; // +0x8
}
+ (CGSize)cellSizeWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 selected:(BOOL)arg2;
- (void)updateSelectedState:(BOOL)arg1;
- (id)titleLabel;
- (void).cxx_destruct;
@end
