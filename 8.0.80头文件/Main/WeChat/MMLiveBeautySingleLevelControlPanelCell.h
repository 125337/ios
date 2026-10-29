@interface MMLiveBeautySingleLevelControlPanelCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt>
{
    MMLiveBeautySingleLevelControlPanelItem * _item; // +0x8
    UIView * _containerView; // +0x10
    UIView * _borderView; // +0x18
    UIView * _tileView; // +0x20
    UILabel * _titleLabel; // +0x28
    MMBadgeView * _badgeView; // +0x30
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setItem:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;
- (id)item;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)tileView;
- (void)setTileView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
