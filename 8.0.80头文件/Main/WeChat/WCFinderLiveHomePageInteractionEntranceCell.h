@interface WCFinderLiveHomePageInteractionEntranceCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveGenericFeedVMDelegate, WCFinderLiveFeedGenericCardCellProtocol>
{
    UIView * _containerView; // +0x8
    UIImageView * _imageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    WCFinderLiveGenericFeedVM * _feedVM; // +0x28
    MMBadgeView * _numericBadgeView; // +0x30
    UIImageView * _avatarBadgeImageView; // +0x38
    MMBadgeView * _avatarBadgeView; // +0x40
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initializeIfNeeded:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithFeedVM:(id)arg1;
- (void)reloadData;
- (id)accessibilityLabel;
- (void)onFeedLiveInteractionCardContentUpdate;
- (void)updateSingEntranceBadge;
- (void)clearBadges;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)numericBadgeView;
- (void)setNumericBadgeView:(id)arg1;
- (id)avatarBadgeImageView;
- (void)setAvatarBadgeImageView:(id)arg1;
- (id)avatarBadgeView;
- (void)setAvatarBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
