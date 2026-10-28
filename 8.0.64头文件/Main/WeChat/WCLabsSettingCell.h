@interface WCLabsSettingCell : UITableViewCell
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    MMWebImageView * _thumbImageView; // +0x18
    UIView * _backgroundView; // +0x20
    MMBadgeView * _badgeView; // +0x28
    UIView * _maskView; // +0x30
}
+ (double)heightForLabsItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)configureWithLabsItem:(id)arg1;
- (void)initBackgroundView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initThumbImageView;
- (void)initBadgeView;
- (void)initMaskView;
- (void).cxx_destruct;
@end
