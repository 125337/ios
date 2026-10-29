@interface MMFinderLiveAnchorRealNameLikeListTableViewCell : MMTableViewCell
{
    MMHeadImageView * _avatarImageView; // +0x8
    UILabel * _nickNameLabel; // +0x10
    UILabel * _countLabel; // +0x18
    UIImageView * _finderIconView; // +0x20
    NSArray * _badgeInfos; // +0x28
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x30
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x38
    MMFinderLiveNormalTextSignView * _buySignView; // +0x40
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x48
    MMFinderLiveMemberSignView * _memberSignView; // +0x50
    MMFinderLiveNormalTextSignView * _shopMemberSignView; // +0x58
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x60
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x68
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x70
    UIView * _separatorLine; // +0x78
    unsigned long long _visibleBadgeCount; // +0x80
    unsigned long long _listStyle; // +0x88
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)liveTask;
- (void)prepareForReuse;
- (void)setupSubViews;
- (void)setupWithLiveContact:(id)arg1 needsSeparatorLine:(BOOL)arg2;
- (void)setupWithLiveContact:(id)arg1 likeCountText:(id)arg2 style:(unsigned long long)arg3 needsSeparatorLine:(BOOL)arg4;
- (unsigned long long)maxBadgeCount;
- (void)updateBadgeSignViewsWithBadgeInfos:(id)arg1;
- (void)updateMysteriousSignViewWithBadgeInfos:(id)arg1;
- (void)updateRoleSignViewWithBadgeInfos:(id)arg1;
- (void)updateBuySignViewWithBadgeInfos:(id)arg1;
- (void)updateGlobalRankSignViewWithBadgeInfos:(id)arg1;
- (void)updateMemberSignViewWithBadgeInfos:(id)arg1;
- (void)updateShopMemberSignViewWithBadgeInfos:(id)arg1;
- (void)updateFansGroupSignViewWithBadgeInfos:(id)arg1;
- (void)updateFollowerSignViewWithBadgeInfos:(id)arg1;
- (void)updateFrequentWatchSignViewWithBadgeInfos:(id)arg1;
- (void)layoutSubviews;
- (void)layoutAllSubviews;
- (double)layoutSignView:(id)arg1 fromLeft:(double)arg2 maxRight:(double)arg3;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)finderIconView;
- (void)setFinderIconView:(id)arg1;
- (id)badgeInfos;
- (void)setBadgeInfos:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)roleSignView;
- (void)setRoleSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)memberSignView;
- (void)setMemberSignView:(id)arg1;
- (id)shopMemberSignView;
- (void)setShopMemberSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (unsigned long long)visibleBadgeCount;
- (void)setVisibleBadgeCount:(unsigned long long)arg1;
- (unsigned long long)listStyle;
- (void)setListStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
