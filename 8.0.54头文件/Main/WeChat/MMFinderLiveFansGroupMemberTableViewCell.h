@interface MMFinderLiveFansGroupMemberTableViewCell : UITableViewCell
{
    BOOL _bNeedSeparatorLine; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    MMUILabel * _rankLabel; // +0x18
    MMCPLabel * _displayNameLabel; // +0x20
    MMUIImageView * _roleIconImageView; // +0x28
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x30
    MMUILabel * _rewardAmountLabel; // +0x38
    UIView * _separatorLine; // +0x40
    FinderLiveContact * _memberContact; // +0x48
}
+ (double)preferHeight;
+ (double)innerLeftPadding;
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)shouldAdaptToDarkLight;
- (void)initUI;
- (void)initNameLabel;
- (void)initRoleIconImageView;
- (void)initRewardAmountLabel;
- (void)initFansGroupSignView;
- (void)initSeperatorLine;
- (void)initRankLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithFinderLiveContact:(id)arg1 rank:(unsigned long long)arg2;
- (id)liveTask;
- (id)accessibilityLabel;
- (BOOL)bNeedSeparatorLine;
- (void)setBNeedSeparatorLine:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)roleIconImageView;
- (void)setRoleIconImageView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)rewardAmountLabel;
- (void)setRewardAmountLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)memberContact;
- (void)setMemberContact:(id)arg1;
- (void).cxx_destruct;
@end

