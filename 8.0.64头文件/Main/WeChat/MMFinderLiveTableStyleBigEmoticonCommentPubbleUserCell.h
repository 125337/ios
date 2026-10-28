@interface MMFinderLiveTableStyleBigEmoticonCommentPubbleUserCell : MMFinderLiveTableStyleCommentPubbleCell <IStoreEmotionSingleDownloadMgrExt>
{
    unsigned long long _resourceState; // +0x8
    unsigned long long _badgeSignCnt; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMEmoticonView * _emoticonView; // +0x20
    UIView * _loadingView; // +0x28
    UIView * _failView; // +0x30
    MMUILabel * _signLabel; // +0x38
    MMUIView * _signBackView; // +0x40
    MMFinderLiveProductQuestionSignView * _productQuestionSignView; // +0x48
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x50
    MMFinderLiveMemberSignView * _memberSignView; // +0x58
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x60
    MMFinderLiveGameRankSignView * _gameRankSignView; // +0x68
    MMFinderLiveGameEsportSignView * _gameEsportSignView; // +0x70
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x78
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x80
    MMFinderLiveNormalTextSignView * _buySignView; // +0x88
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x90
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x98
    NSMutableArray * _signViewArraryForLayout; // +0xa0
}
- (id)initWithCellFrame:(id)arg1;
- (BOOL)isUITypeValid;
- (double)maxCornerRadius;
- (void)layoutUI;
- (void)updateBackGroundColor;
- (id)signText;
- (void)layoutHeadImageView;
- (void)layoutSignLabel;
- (void)layoutGlobalRankSignView;
- (void)layoutMemberSignView;
- (void)layoutMysteriousSignView;
- (void)layoutProductQuestionSignView;
- (void)layoutLiveRoleSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)layoutGameRankSignView;
- (void)layoutBuySignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutFollowerSignView;
- (void)updateSignViewOrigins;
- (void)updateHeaderImageOrigin;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutContentView;
- (void)hideContentView;
- (void)updateContentViewOrigin;
- (void)createEmoticonViewIfNeeded;
- (void)createFailViewIfNeeded;
- (void)createLoadingViewIfNeeded;
- (BOOL)reuseWithCellFrame:(id)arg1;
- (BOOL)needSignLabel;
- (BOOL)isLoading;
- (BOOL)isFailed;
- (void)retryLoadingEmoticon;
- (BOOL)checkInlineCommentStyle:(double)arg1;
- (double)getContentViewWidth;
- (id)signViewArraryForLayout;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)getSelfAccessibility;
- (unsigned long long)resourceState;
- (void)setResourceState:(unsigned long long)arg1;
- (unsigned long long)badgeSignCnt;
- (void)setBadgeSignCnt:(unsigned long long)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)failView;
- (void)setFailView:(id)arg1;
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
