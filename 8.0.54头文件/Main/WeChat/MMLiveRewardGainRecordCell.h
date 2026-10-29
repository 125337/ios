@interface MMLiveRewardGainRecordCell : MMTableViewCell
{
    BOOL _forceDarkMode; // +0x8
    id <MMLiveRewardGainRecordCellDelegate> _cellDelegate; // +0x10
    MMCPLabel * _rankLabel; // +0x18
    MMCPLabel * _displayNameLabel; // +0x20
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x28
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x30
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x38
    MMFinderLiveRewardGainsInfo * _rewardGainsInfo; // +0x40
    UIImageView * _iconView; // +0x48
    MMCPLabel * _rewardGainValueLabel; // +0x50
    long long _rank; // +0x58
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithRewardGainsInfo:(id)arg1 forceDarkMode:(BOOL)arg2 rank:(long long)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTask;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)rewardGainsInfo;
- (void)setRewardGainsInfo:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)rewardGainValueLabel;
- (void)setRewardGainValueLabel:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (long long)rank;
- (void)setRank:(long long)arg1;
- (void).cxx_destruct;
@end

