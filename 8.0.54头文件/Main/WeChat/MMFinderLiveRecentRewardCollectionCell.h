@interface MMFinderLiveRecentRewardCollectionCell : UICollectionViewCell <MMFinderLiveRecentRewardGiftsViewDelegate>
{
    BOOL _needSeparatorLine; // +0x8
    unsigned int _visibleBadgeCount; // +0xc
    id <MMFinderLiveRecentRewardCollectionCellDelegate> _cellDelegate; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMCPLabel * _displayNameLabel; // +0x20
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x28
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x30
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x38
    MMFinderLiveNormalTextSignView * _buySignView; // +0x40
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x48
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x50
    MMFinderLiveRecentRewardGiftsView * _recentRewardGiftsView; // +0x58
    NSMutableArray * _giftItemsViews; // +0x60
    UIView * _separatorLine; // +0x68
    MMFinderLiveRecentRewardUserItem * _recentRewardUserItem; // +0x70
    MMUIImageView * _roleIconImageView; // +0x78
    MMUIImageView * _genderIconImageView; // +0x80
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initHeadImageView;
- (void)initNameLabel;
- (void)initGlobalRankSignView;
- (void)initMysteriousSignView;
- (void)initFansGroupSignView;
- (void)initBuySignView;
- (void)initFrequentWatchSignView;
- (void)initFollowerSignView;
- (void)initRecentRewardGiftsView;
- (void)initSeperatorLine;
- (void)initRoleIconImageView;
- (void)initGenderIconImageView;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isMysterious;
- (void)updateWithRecentRewardUserItem:(id)arg1;
- (void)onClickLastOneItem;
- (double)calculateGiftsViewLength;
- (double)calculateOriginalTotalLength;
- (double)calculateFoldUserNameTotalLength;
- (id)getMinimumUsername:(id)arg1;
- (void)updateMysteriousSignView;
- (void)updateGlobalRankSignView;
- (void)updateFansGroupSignView;
- (void)updateBuySignView;
- (void)updateFrequentWatchSignView;
- (void)updateFollowerSignView;
- (double)getGlobalRankSignWidth;
- (double)getFansGroupSignWidth;
- (double)getBuySignWidth;
- (double)getFollowerSignWidth;
- (double)getFrequentWatchSignWidth;
- (void)updateGenderImageView;
- (double)genderIconImageViewWidth;
- (double)roleIconImageWidth;
- (id)liveTask;
- (id)getFansGroupName;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (BOOL)needSeparatorLine;
- (void)setNeedSeparatorLine:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (id)recentRewardGiftsView;
- (void)setRecentRewardGiftsView:(id)arg1;
- (unsigned int)visibleBadgeCount;
- (void)setVisibleBadgeCount:(unsigned int)arg1;
- (id)giftItemsViews;
- (void)setGiftItemsViews:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)recentRewardUserItem;
- (void)setRecentRewardUserItem:(id)arg1;
- (id)roleIconImageView;
- (void)setRoleIconImageView:(id)arg1;
- (id)genderIconImageView;
- (void)setGenderIconImageView:(id)arg1;
- (void).cxx_destruct;
@end

