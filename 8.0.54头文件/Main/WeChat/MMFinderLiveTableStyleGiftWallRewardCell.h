@interface MMFinderLiveTableStyleGiftWallRewardCell : MMFinderLiveTableStyleCommentPubbleSignTextCell
{
    unsigned long long _badgeSignCnt; // +0x8
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x10
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x18
    MMFinderLiveGameEsportSignView * _gameEsportSignView; // +0x20
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x28
    MMWebImageView * _giftImageView; // +0x30
    NSMutableArray * _signViewArraryForLayout; // +0x38
}
- (id)signText;
- (BOOL)isUITypeValid;
- (BOOL)reuseWithCellFrame:(id)arg1;
- (void)layoutUI;
- (void)layoutSignLabel;
- (void)updateSignViewOrigins;
- (void)layoutMysteriousSignView;
- (void)layoutGlobalRankSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)updateCommentLabelOrigin;
- (void)layoutGiftImageView;
- (void)updateGiftImageViewOrigin;
- (id)signViewArraryForLayout;
- (id)getSelfAccessibility;
- (unsigned long long)badgeSignCnt;
- (void)setBadgeSignCnt:(unsigned long long)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)gameEsportSignView;
- (void)setGameEsportSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (void)setSignViewArraryForLayout:(id)arg1;
- (void).cxx_destruct;
@end

