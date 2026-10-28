@interface MMTabBarItemView : UIView
{
    BOOL _isSelected; // +0x8
    MMTabbarItem * _item; // +0x10
    long long _unreadCount; // +0x18
    NSString * _badgeString; // +0x20
    MMWebImageView * _imageView; // +0x28
    MMTabBarItemIconView * _customIconView; // +0x30
    UILabel * _textLabel; // +0x38
    MMBadgeView * _badgeView; // +0x40
}
- (id)initWithItem:(id)arg1 frame:(CGRect)arg2;
- (void)setTitle:(id)arg1;
- (void)setBadgeViewHidden:(BOOL)arg1;
- (void)setTabBarBadgeValue:(long long)arg1;
- (void)setTabBarBadgeString:(id)arg1;
- (void)showSmallRedDot;
- (void)removeSmallRedDot;
- (void)setCustomIconView:(id)arg1;
- (void)setupUI;
- (void)relayoutIconAndBadge;
- (void)layoutIcon;
- (void)layoutBadgeView;
- (double)getBadgeViewRightMarginPortrait;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelectedState;
- (void)reloadIconImage;
- (void)preloadURLImages;
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (long long)unreadCount;
- (void)setUnreadCount:(long long)arg1;
- (id)badgeString;
- (void)setBadgeString:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)customIconView;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
