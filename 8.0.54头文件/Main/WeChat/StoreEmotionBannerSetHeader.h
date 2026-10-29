@interface StoreEmotionBannerSetHeader : UICollectionReusableView
{
    MMWebImageView * _iconView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
}
+ (double)preferredHeightFor:(id)arg1 withWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWith:(id)arg1;
- (void)layoutSubviews;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

