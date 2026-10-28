@interface MMFinderLiveTableStyleTextCommentLikeNotifyCell : MMFinderLiveTableStyleCommentPubbleCell <ILinkEventExt>
{
    unsigned long long _badgeSignCnt; // +0x8
    UIImageView * _barrageSignIconView; // +0x10
    MMFinderLiveProductQuestionSignView * _barrageProductQueSignView; // +0x18
    MMUILabel * _signLabel; // +0x20
    MMUIView * _signBackView; // +0x28
    MMFinderLiveProductQuestionSignView * _productQuestionSignView; // +0x30
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x38
    MMFinderLiveMemberSignView * _memberSignView; // +0x40
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x48
    MMFinderLiveGameRankSignView * _gameRankSignView; // +0x50
    MMFinderLiveGameEsportSignView * _gameEsportSignView; // +0x58
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x60
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x68
    MMFinderLiveNormalTextSignView * _buySignView; // +0x70
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x78
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x80
    NSMutableArray * _signViewArraryForLayout; // +0x88
}
- (id)initWithCellFrame:(id)arg1;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)needSignLabel;
- (void)updateSignLabelOrigins;
- (void)layoutCommentLabel;
- (BOOL)reuseWithCellFrame:(id)arg1;
- (BOOL)isUITypeValid;
- (id)signText;
- (void)layoutSignLabel;
- (void)layoutGlobalRankSignView;
- (void)layoutMysteriousSignView;
- (void)layoutProductQuestionSignView;
- (void)layoutLiveRoleSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)layoutGameRankSignView;
- (void)layoutBuySignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutFollowerSignView;
- (void)layoutMemberSignView;
- (void)updateCommentLabelOrigin;
- (void)updateSignViewOrigins;
- (void)expandIntroductionTextView;
- (id)signViewArraryForLayout;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (unsigned long long)badgeSignCnt;
- (void)setBadgeSignCnt:(unsigned long long)arg1;
- (id)barrageSignIconView;
- (void)setBarrageSignIconView:(id)arg1;
- (id)barrageProductQueSignView;
- (void)setBarrageProductQueSignView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (id)signBackView;
- (void)setSignBackView:(id)arg1;
- (id)productQuestionSignView;
- (void)setProductQuestionSignView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)memberSignView;
- (void)setMemberSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)gameRankSignView;
- (void)setGameRankSignView:(id)arg1;
- (id)gameEsportSignView;
- (void)setGameEsportSignView:(id)arg1;
- (id)roleSignView;
- (void)setRoleSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (void)setSignViewArraryForLayout:(id)arg1;
- (void).cxx_destruct;
@end
