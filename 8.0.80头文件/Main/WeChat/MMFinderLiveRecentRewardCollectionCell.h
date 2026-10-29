@interface MMFinderLiveRecentRewardCollectionCell : UICollectionViewCell <MMFinderLiveRecentRewardGiftsViewDelegate>
{
    BOOL _needSeparatorLine; // +0x8
    BOOL _shouldShowHeadImage; // +0x9
    unsigned int _visibleBadgeCount; // +0xc
    id <MMFinderLiveRecentRewardCollectionCellDelegate> _cellDelegate; // +0x10
    MMLiveHeadImageView * _avatarView; // +0x18
    MMCPLabel * _displayNameLabel; // +0x20
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x28
    MMFinderLiveMemberSignView * _memberSignView; // +0x30
    MMFinderLiveNormalTextSignView * _shopMemberSignView; // +0x38
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x40
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x48
    MMFinderLiveNormalTextSignView * _buySignView; // +0x50
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x58
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x60
    MMFinderLiveRecentRewardGiftsView * _recentRewardGiftsView; // +0x68
    NSMutableArray * _giftItemsViews; // +0x70
    UIView * _separatorLine; // +0x78
    MMFinderLiveRecentRewardUserItem * _recentRewardUserItem; // +0x80
    MMUIImageView * _roleIconImageView; // +0x88
    MMUIImageView * _genderIconImageView; // +0x90
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initHeadImageView;
- (void)initNameLabel;
- (void)initGlobalRankSignView;
- (void)initMysteriousSignView;
- (void)initMemberSignView;
- (void)initShopMemberSignView;
- (void)initFansGroupSignView;
- (void)initBuySignView;
- (void)initFrequentWatchSignView;
- (void)initFollowerSignView;
- (void)initRecentRewardGiftsView;
- (void)initSeperatorLine;
- (void)initRoleIconImageView;
- (void)initGenderIconImageView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isMysterious;
- (void)updateHeadImageView;
- (void)updateWithRecentRewardUserItem:(id)arg1;
- (void)onClickLastOneItem;
- (double)calculateGiftsViewLength;
- (double)calculateOriginalTotalLength;
- (double)calculateFoldUserNameTotalLength;
- (id)getMinimumUsername:(id)arg1;
- (void)updateMysteriousSignView;
- (void)updateGlobalRankSignView;
- (void)updateMemberSignView;
- (void)updateShopMemberSignView;
- (void)updateFansGroupSignView;
- (void)updateBuySignView;
- (void)updateFrequentWatchSignView;
- (void)updateFollowerSignView;
- (double)getGlobalRankSignWidth;
- (double)getMemberSignWidth;
- (double)getShopMemberSignWidth;
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
- (BOOL)shouldShowHeadImage;
- (void)setShouldShowHeadImage:(BOOL)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)memberSignView;
- (void)setMemberSignView:(id)arg1;
- (id)shopMemberSignView;
- (void)setShopMemberSignView:(id)arg1;
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
