@interface MMFinderLiveGiftStarRankCell : UITableViewCell
{
    MMUILabel * _rankLabel; // +0x8
    MMWebImageView * _avatarView; // +0x10
    MMUILabel * _nicknameLabel; // +0x18
    UIImageView * _finderIconView; // +0x20
    NSMutableArray * _badgeSignViews; // +0x28
    UIImageView * _genderIconView; // +0x30
    MMUILabel * _amountLabel; // +0x38
    UIView * _separator; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithItem:(id)arg1 taskId:(id)arg2 theme:(id)arg3;
- (void)updateBadgeSignViewsWithContact:(id)arg1 taskId:(id)arg2 theme:(id)arg3;
- (void)addTextSignWithBadge:(id)arg1 font:(id)arg2 textColor:(id)arg3 defaultBgColor:(id)arg4;
- (void)addBadgeSignView:(id)arg1;
- (void)layoutSubviews;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)finderIconView;
- (void)setFinderIconView:(id)arg1;
- (id)badgeSignViews;
- (void)setBadgeSignViews:(id)arg1;
- (id)genderIconView;
- (void)setGenderIconView:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
