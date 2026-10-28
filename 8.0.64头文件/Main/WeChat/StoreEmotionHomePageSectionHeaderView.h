@interface StoreEmotionHomePageSectionHeaderView : UICollectionReusableView
{
    NSString * _title; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
