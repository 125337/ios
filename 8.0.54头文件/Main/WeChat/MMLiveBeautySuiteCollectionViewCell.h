@interface MMLiveBeautySuiteCollectionViewCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt, MMLiveBeautyBadgeCollectionExt>
{
    MMLiveBeautySuite * _suite; // +0x8
    id <MMLiveBeautySuiteCollectionViewCellDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    UIView * _borderView; // +0x20
    UIView * _tileView; // +0x28
    UILabel * _displayNameLabel; // +0x30
    UIButton * _detailsButton; // +0x38
    UIImageView * _detailsChevronView; // +0x40
    MMBadgeView * _badgeView; // +0x48
    MMBadgeView * _detailsBadgeView; // +0x50
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setSuite:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)onDetailsButtonTapped;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)onActiveBeautyBadgesChangedInCollection:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithSuite:(id)arg1;
- (id)suite;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)tileView;
- (void)setTileView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)detailsButton;
- (void)setDetailsButton:(id)arg1;
- (id)detailsChevronView;
- (void)setDetailsChevronView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)detailsBadgeView;
- (void)setDetailsBadgeView:(id)arg1;
- (void).cxx_destruct;
@end

