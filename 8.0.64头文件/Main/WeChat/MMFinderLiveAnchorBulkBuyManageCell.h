@interface MMFinderLiveAnchorBulkBuyManageCell : MMFinderLiveGoodsBaseCell <MMFinderLiveTagsLabelDelegate>
{
    id <MMFinderLiveShopShelfManagedItemDelegate> _cellDelegate; // +0x40
    MMFinderLiveAnchorBulkBuyCellLeftCardView * _leftCard; // +0x48
    MMFinderLiveTagsLabel * _titleLabel; // +0x50
    UILabel * _shopLabel; // +0x58
    MMFinderLiveBulkBuyMembersView * _membersView; // +0x60
    UILabel * _commentLabel; // +0x68
    UILabel * _timeLabel; // +0x70
    MMUIView * _backgroundClickView; // +0x78
    UITapGestureRecognizer * _gestureRecognizer; // +0x80
    MMFinderLiveShopShelfBulkBuyViewModel * _viewModel; // +0x88
}
+ (double)preferHeightWithViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addBackgroundClickView;
- (void)addTitleLabel;
- (void)addTimeLabel;
- (void)addCommentLabel;
- (void)addShopLabel;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)onWebImageGetDifferentSize;
- (void)onTapGesture:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)unSelectedImageForSelectedButton;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)leftCard;
- (void)setLeftCard:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)shopLabel;
- (void)setShopLabel:(id)arg1;
- (id)membersView;
- (void)setMembersView:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)backgroundClickView;
- (void)setBackgroundClickView:(id)arg1;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
