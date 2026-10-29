@interface WCTabBarItemView : UIControl
{
    WCTabBarItem * _item; // +0x8
    UIView * _customContentView; // +0x10
    UIView * _badgeView; // +0x18
    UIImageView * _imageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _badgeLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 contentView:(id)arg2;
- (void)setupDefaultContent;
- (void)updateWithItem:(id)arg1;
- (void)copyTransitionVisualStateFromView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateAccessibilityTraits;
- (void)updateDefaultContent;
- (void)layoutSubviews;
- (id)item;
- (void)setItem:(id)arg1;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)badgeLabel;
- (void)setBadgeLabel:(id)arg1;
- (void).cxx_destruct;
@end
