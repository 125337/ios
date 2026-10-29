@interface MMLiveBeautyFineTuningControlPanelCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt, MMLiveBeautyBadgeCollectionExt>
{
    MMLiveBeautyFineTuningControlPanelItem * _item; // +0x8
    id <MMLiveBeautyFineTuningControlPanelCellDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    UIView * _borderView; // +0x20
    UIView * _tileView; // +0x28
    UIImageView * _iconView; // +0x30
    UILabel * _titleLabel; // +0x38
    UIImageView * _settingsChevronView; // +0x40
    MMBadgeView * _settingsBadgeView; // +0x48
    UIView * _modificationIndicator; // +0x50
    MMBadgeView * _badgeView; // +0x58
    UITapGestureRecognizer * _settingsGestureRecognizer; // +0x60
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setItem:(id)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onSettingsTapped;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)onActiveBeautyBadgesChangedInCollection:(id)arg1;
- (void)updateWithItem:(id)arg1;
- (id)item;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)tileView;
- (void)setTileView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)settingsChevronView;
- (void)setSettingsChevronView:(id)arg1;
- (id)settingsBadgeView;
- (void)setSettingsBadgeView:(id)arg1;
- (id)modificationIndicator;
- (void)setModificationIndicator:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)settingsGestureRecognizer;
- (void)setSettingsGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
