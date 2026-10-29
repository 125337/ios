@interface MMLiveControlButtonCell : UICollectionViewCell
{
    UIView * _iconBgView; // +0x8
    UIImageView * _iconImageView; // +0x10
    UILabel * _titleLabel; // +0x18
}
+ (id)identifier;
- (void)prepareForReuse;
- (void)updateWithButtonItem:(id)arg1 canShowRedDot:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)iconBgView;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconBgView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
