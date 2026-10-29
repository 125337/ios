@interface MMLiveGiftAttackContactCell : MMTableViewCell
{
    MMHeadImageView * _headImageView; // +0x8
    MMCPLabel * _displayNameLabel; // +0x10
    UIImageView * _selectionIndicatorView; // +0x18
    WCFinderContact * _giftAttackContact; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
    id <MMLiveGiftAttackContactCellDelegate> _cellDelegate; // +0x30
}
+ (id)identifier;
+ (double)getCellHeight;
+ (double)getSeperatorLineXMargin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)updateWithGiftAttackContact:(id)arg1 liveTaskId:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTask;
- (void)updateHeadImageConerRadius:(double)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)selectionIndicatorView;
- (void)setSelectionIndicatorView:(id)arg1;
- (id)giftAttackContact;
- (void)setGiftAttackContact:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (void).cxx_destruct;
@end

