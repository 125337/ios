@interface MMLiveBeautyPresetControlPanelCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt, MMLiveBeautyBadgeCollectionExt>
{
    MMLiveBeautyPresetControlPanelItem * _item; // +0x8
    id <MMLiveBeautyPresetControlPanelCellDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    UIView * _borderView; // +0x20
    UIView * _tileView; // +0x28
    UILabel * _titleLabel; // +0x30
    UIButton * _fineTuningButton; // +0x38
    UIImageView * _fineTuningChevronView; // +0x40
    MMBadgeView * _badgeView; // +0x48
    MMBadgeView * _fineTuningBadgeView; // +0x50
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setItem:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)onActiveBeautyBadgesChangedInCollection:(id)arg1;
- (void)layoutSubviews;
- (void)onFineTuningButtonTapped;
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
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)fineTuningButton;
- (void)setFineTuningButton:(id)arg1;
- (id)fineTuningChevronView;
- (void)setFineTuningChevronView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)fineTuningBadgeView;
- (void)setFineTuningBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
