@interface MMFinderLiveFansGroupMemberSelfIntimacyView : UIView
{
    MMUILabel * _rankLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    MMCPLabel * _displayNameLabel; // +0x18
    MMUIImageView * _roleIconImageView; // +0x20
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x28
    MMUILabel * _rewardAmountLabel; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)initUI;
- (void)initNameLabel;
- (void)initDescLabel;
- (void)initRoleIconImageView;
- (void)initRewardAmountLabel;
- (void)initFansGroupSignView;
- (void)initRankLabel;
- (void)layoutSubviews;
- (void)updateWithFinderLiveContact:(id)arg1 rank:(unsigned long long)arg2 intimacyToPrevRank:(unsigned int)arg3;
- (id)liveTask;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)roleIconImageView;
- (void)setRoleIconImageView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)rewardAmountLabel;
- (void)setRewardAmountLabel:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
