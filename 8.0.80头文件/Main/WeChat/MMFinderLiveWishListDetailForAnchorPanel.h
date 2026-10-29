@interface MMFinderLiveWishListDetailForAnchorPanel : MMLandscapeDragBarPageSheet <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveInteractionWishProgressViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _shouldScrollToActivityRank; // +0x8
    BOOL _allowShowInteractionWishGuide; // +0x9
    BOOL _shouldHighlightInteractionWishOnModify; // +0xa
    BOOL _isAchieved; // +0xb
    BOOL _isActive; // +0xc
    BOOL _hasFetchedInteractionWishConfig; // +0xd
    unsigned int _totalPrice; // +0x10
    id /* block */ _clickModifyButtonCallBlock; // +0x18
    id /* block */ _giftWallBoardClickButtonCallBlock; // +0x20
    id /* block */ _activityRankEntryClickCallBlock; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    UIView * _contentView; // +0x38
    UIScrollView * _scrollContentView; // +0x40
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x48
    MMUIButton * _settingButton; // +0x50
    MMUILabel * _interactionWishTitleLabel; // +0x58
    MMFinderLiveInteractionWishProgressView * _interactionWishProgressView; // +0x60
    MMUILabel * _priceTitleLabel; // +0x68
    UIImageView * _wishAchievedIconView; // +0x70
    UIImageView * _coinIconView; // +0x78
    MMUILabel * _priceLabel; // +0x80
    NSMutableArray * _targetGiftViews; // +0x88
    NSArray * _lastRewardWishList; // +0x90
    NSArray * _liveRewardWishes; // +0x98
    unsigned long long _totalTargetCount; // +0xa0
    unsigned long long _totalCurCount; // +0xa8
    UICollectionView * _giftWallCollectionView; // +0xb0
    UICollectionViewFlowLayout * _giftWallCollectionLayout; // +0xb8
    double _lastCollectionViewWidth; // +0xc0
    MMUILabel * _giftWallTitleLabel; // +0xc8
    MMUIButton * _helpButton; // +0xd0
    FinderLiveGiftWallInfo * _giftWallInfo; // +0xd8
    MMUILabel * _activityRankTitleLabel; // +0xe0
    UIView * _activityRankEntryView; // +0xe8
    MMWebImageView * _activityRankIconView; // +0xf0
    MMUILabel * _activityRankMainLabel; // +0xf8
    MMUILabel * _activityRankSubLabel; // +0x100
    UIImageView * _activityRankArrowView; // +0x108
    NSArray * _boardEventEntryList; // +0x110
    FinderLiveGetBoardEventEntryResp_BoardEventEntry * _currentDisplayEntry; // +0x118
    InteractionWishConfig * _currentInteractionWishConfig; // +0x120
    MMFinderLiveGuidePubbleTipView * _interactionWishGuideTipView; // +0x128
}
- (id)initWithTaskId:(id)arg1;
- (void)innerInit;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)updateWithWishes:(id)arg1 totalTargetCount:(unsigned long long)arg2 totalCurCount:(unsigned long long)arg3 isAchieved:(BOOL)arg4 isActive:(BOOL)arg5;
- (void)showWithAnimated:(BOOL)arg1;
- (void)realShowWithAnimated:(BOOL)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)performScrollToActivityRank;
- (void)layoutTitleBarView;
- (void)layoutPriceViewWithTopOffset:(double)arg1;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateCollectionLayout;
- (void)reloadData;
- (void)updateGiftWallHeaderInfo;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onSettingButton;
- (void)tryShowInteractionWishGuideTipIfNeeded;
- (void)layoutInteractionWishGuideTipView;
- (void)dismissInteractionWishGuideTipView;
- (void)onHelpButtonClick;
- (void)handleCreateNewWishButtonClick;
- (void)onRemoveCurrentRewardWish;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id)liveTask;
- (BOOL)isGiftWallEnable;
- (BOOL)isInteractionWishEnable;
- (void)onInteractionWishProgressViewNicknameClicked:(id)arg1;
- (BOOL)isActivityRankSectionEnable;
- (void)updateActivityRankSectionData;
- (void)fetchBoardEventEntry;
- (void)onActivityRankEntryClicked;
- (id /* block */)clickModifyButtonCallBlock;
- (void)setClickModifyButtonCallBlock:(id /* block */)arg1;
- (id /* block */)giftWallBoardClickButtonCallBlock;
- (void)setGiftWallBoardClickButtonCallBlock:(id /* block */)arg1;
- (id /* block */)activityRankEntryClickCallBlock;
- (void)setActivityRankEntryClickCallBlock:(id /* block */)arg1;
- (BOOL)shouldScrollToActivityRank;
- (void)setShouldScrollToActivityRank:(BOOL)arg1;
- (BOOL)allowShowInteractionWishGuide;
- (void)setAllowShowInteractionWishGuide:(BOOL)arg1;
- (BOOL)shouldHighlightInteractionWishOnModify;
- (void)setShouldHighlightInteractionWishOnModify:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)scrollContentView;
- (void)setScrollContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (id)interactionWishTitleLabel;
- (void)setInteractionWishTitleLabel:(id)arg1;
- (id)interactionWishProgressView;
- (void)setInteractionWishProgressView:(id)arg1;
- (id)priceTitleLabel;
- (void)setPriceTitleLabel:(id)arg1;
- (id)wishAchievedIconView;
- (void)setWishAchievedIconView:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)targetGiftViews;
- (void)setTargetGiftViews:(id)arg1;
- (id)lastRewardWishList;
- (void)setLastRewardWishList:(id)arg1;
- (id)liveRewardWishes;
- (void)setLiveRewardWishes:(id)arg1;
- (unsigned long long)totalTargetCount;
- (void)setTotalTargetCount:(unsigned long long)arg1;
- (unsigned long long)totalCurCount;
- (void)setTotalCurCount:(unsigned long long)arg1;
- (BOOL)isAchieved;
- (void)setIsAchieved:(BOOL)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (unsigned int)totalPrice;
- (void)setTotalPrice:(unsigned int)arg1;
- (id)giftWallCollectionView;
- (void)setGiftWallCollectionView:(id)arg1;
- (id)giftWallCollectionLayout;
- (void)setGiftWallCollectionLayout:(id)arg1;
- (double)lastCollectionViewWidth;
- (void)setLastCollectionViewWidth:(double)arg1;
- (id)giftWallTitleLabel;
- (void)setGiftWallTitleLabel:(id)arg1;
- (id)helpButton;
- (void)setHelpButton:(id)arg1;
- (id)giftWallInfo;
- (void)setGiftWallInfo:(id)arg1;
- (id)activityRankTitleLabel;
- (void)setActivityRankTitleLabel:(id)arg1;
- (id)activityRankEntryView;
- (void)setActivityRankEntryView:(id)arg1;
- (id)activityRankIconView;
- (void)setActivityRankIconView:(id)arg1;
- (id)activityRankMainLabel;
- (void)setActivityRankMainLabel:(id)arg1;
- (id)activityRankSubLabel;
- (void)setActivityRankSubLabel:(id)arg1;
- (id)activityRankArrowView;
- (void)setActivityRankArrowView:(id)arg1;
- (id)boardEventEntryList;
- (void)setBoardEventEntryList:(id)arg1;
- (id)currentDisplayEntry;
- (void)setCurrentDisplayEntry:(id)arg1;
- (id)currentInteractionWishConfig;
- (void)setCurrentInteractionWishConfig:(id)arg1;
- (id)interactionWishGuideTipView;
- (void)setInteractionWishGuideTipView:(id)arg1;
- (BOOL)hasFetchedInteractionWishConfig;
- (void)setHasFetchedInteractionWishConfig:(BOOL)arg1;
- (void).cxx_destruct;
@end
