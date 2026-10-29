@interface WCFinderMsgSessionBadgeGroupView : MMUIView
{
    MMFinderLiveGlobalRankSignView * _rankSignView; // +0x8
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x10
    MMFinderLiveNormalTextSignView * _buySignView; // +0x18
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x20
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x28
    WCFinderMsgSessionBadgeLabel * _badgeLabel; // +0x30
    WCFinderMsgSessionUserTagLabel * _userTagLabel; // +0x38
}
- (id)init;
- (void)setupObserver;
- (void)updateRankSignViewModel:(id)arg1;
- (void)updateSignUIStateInfo:(id)arg1 hasFollowMe:(BOOL)arg2 followMyMembership:(BOOL)arg3;
- (void)updateBadgeLabelViewModel:(id)arg1;
- (void)updateBuyBadgeInfo:(id)arg1;
- (void)updateFrequentWatchBadgeInfo:(id)arg1;
- (void)updateFollowerBadgeInfo:(id)arg1;
- (void)flexLayoutSubviews;
- (id)rankSignView;
- (id)fansGroupSignView;
- (id)buySignView;
- (id)frequentWatchSignView;
- (id)followerSignView;
- (id)badgeLabel;
- (id)userTagLabel;
- (void)setRankSignView:(id)arg1;
- (void)setFansGroupSignView:(id)arg1;
- (void)setBuySignView:(id)arg1;
- (void)setFrequentWatchSignView:(id)arg1;
- (void)setFollowerSignView:(id)arg1;
- (void)setBadgeLabel:(id)arg1;
- (void)setUserTagLabel:(id)arg1;
- (void).cxx_destruct;
@end

