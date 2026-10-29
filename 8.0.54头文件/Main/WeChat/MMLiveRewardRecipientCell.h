@interface MMLiveRewardRecipientCell : MMTableViewCell
{
    id <MMLiveRewardRecipientCellDelegate> _cellDelegate; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    MMCPLabel * _displayNameLabel; // +0x18
    UIImageView * _selectionIndicatorView; // +0x20
    WCFinderContact * _rewardRecipientContact; // +0x28
    MMFinderLiveTaskId * _liveTaskId; // +0x30
}
+ (id)identifier;
+ (double)getCellHeight;
+ (double)getSeperatorLineXMargin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)updateWithRewardRecipientContact:(id)arg1 liveTaskId:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTask;
- (void)updateHeadImageConerRadius:(double)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)selectionIndicatorView;
- (void)setSelectionIndicatorView:(id)arg1;
- (id)rewardRecipientContact;
- (void)setRewardRecipientContact:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void).cxx_destruct;
@end

