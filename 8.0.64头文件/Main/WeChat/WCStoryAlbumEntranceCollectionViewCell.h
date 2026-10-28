@interface WCStoryAlbumEntranceCollectionViewCell : UICollectionViewCell
{
    BOOL _showsBadge; // +0x8
    id <WCStoryAlbumEntranceCollectionViewCellDelegate> _delegate; // +0x10
    MMUIButton * _containerButton; // +0x18
    UILabel * _titleLabel; // +0x20
    MMBadgeView * _badgeView; // +0x28
    UIImageView * _arrowImageView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setShowsBadge:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onClickAction;
- (BOOL)showsBadge;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerButton;
- (void)setContainerButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
