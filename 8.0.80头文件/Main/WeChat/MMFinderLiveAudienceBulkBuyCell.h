@interface MMFinderLiveAudienceBulkBuyCell : MMMultiMenuTableViewCell <MMFinderLiveTagsLabelDelegate, MMFinderLiveBulkBuyMembersViewDelegate>
{
    MMFinderLiveShopShelfBulkBuyViewModel * _viewModel; // +0x40
    MMWebImageView * _mainImageView; // +0x48
    MMFinderLiveGoodsPromotionReplayFloatView * _replayFloatView; // +0x50
    MMFinderLiveGoodsSerialNumberView * _serialNumberView; // +0x58
    MMFinderLiveProductPromotingMaskView * _promotingView; // +0x60
    MMFinderLiveTagsLabel * _titleLabel; // +0x68
    UILabel * _shopLabel; // +0x70
    MMFinderLiveBulkBuyMembersView * _membersView; // +0x78
    UILabel * _progressLabel; // +0x80
    MMFinderLiveProductButton * _inviteButton; // +0x88
    MMFinderLiveProductButton * _joinButton; // +0x90
    MMFinderLiveProductButton * _viewButton; // +0x98
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addTitleLabel;
- (void)addShopLabel;
- (void)addMainImageView;
- (void)addProgressLabel;
- (void)addReplayFloatView;
- (void)addMembersView;
- (id)addProductButton;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)onMemberClicked:(id)arg1;
- (void)onTotalClicked;
- (void)onInviteButtonClicked;
- (void)onViewButtonClicked;
- (void)onJoinButtonClicked;
- (void)onWebImageGetDifferentSize;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)mainImageView;
- (void)setMainImageView:(id)arg1;
- (id)replayFloatView;
- (void)setReplayFloatView:(id)arg1;
- (id)serialNumberView;
- (void)setSerialNumberView:(id)arg1;
- (id)promotingView;
- (void)setPromotingView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)shopLabel;
- (void)setShopLabel:(id)arg1;
- (id)membersView;
- (void)setMembersView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)inviteButton;
- (void)setInviteButton:(id)arg1;
- (id)joinButton;
- (void)setJoinButton:(id)arg1;
- (id)viewButton;
- (void)setViewButton:(id)arg1;
- (void).cxx_destruct;
@end
