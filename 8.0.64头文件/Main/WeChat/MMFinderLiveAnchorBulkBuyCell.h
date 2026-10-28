@interface MMFinderLiveAnchorBulkBuyCell : MMMultiMenuTableViewCell <MMFinderLiveTagsLabelDelegate, MMFinderLiveBulkBuyMembersViewDelegate>
{
    MMFinderLiveAnchorBulkBuyCellLeftCardView * _leftCard; // +0x40
    MMFinderLiveTagsLabel * _titleLabel; // +0x48
    UILabel * _shopLabel; // +0x50
    MMUIButton * _promoteButton; // +0x58
    MMFinderLiveGoodsPromotionReplayButton * _replayButton; // +0x60
    MMFinderLiveBulkBuyMembersView * _membersView; // +0x68
    UILabel * _commentLabel; // +0x70
    UILabel * _timeLabel; // +0x78
    MMFinderLiveGoodsAskedForPromotingView * _askedForPromotingView; // +0x80
    MMFinderLiveShopShelfBulkBuyViewModel * _viewModel; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addTitleLabel;
- (void)addPromoteButton;
- (void)addTimeLabel;
- (void)addCommentLabel;
- (void)addShopLabel;
- (void)updateWithViewModel:(id)arg1;
- (void)addReplayButton;
- (void)updatePromoteButton;
- (void)layoutSubviews;
- (void)layoutButtons;
- (void)onPromoteButtonClicked;
- (void)onMemberClicked:(id)arg1;
- (void)onTotalClicked;
- (void)onWebImageGetDifferentSize;
- (void)prepareForReuse;
- (id)leftCard;
- (void)setLeftCard:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)shopLabel;
- (void)setShopLabel:(id)arg1;
- (id)promoteButton;
- (void)setPromoteButton:(id)arg1;
- (id)replayButton;
- (void)setReplayButton:(id)arg1;
- (id)membersView;
- (void)setMembersView:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)askedForPromotingView;
- (void)setAskedForPromotingView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
