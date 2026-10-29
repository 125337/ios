@interface MMFinderLiveWishListDetailForAudiencePanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardWishSendingViewDelegate, MMFinderLiveInteractionWishOperationViewDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _wecoinBalanceUpdated; // +0x8
    BOOL _shouldScrollToActivityRank; // +0x9
    id <MMFinderLiveWishListDetailForAudiencePanelDelegate> _operationDelegate; // +0x10
    id /* block */ _giftWallBoardClickButtonCallBlock; // +0x18
    id /* block */ _giftWallHeadImgeSettingGuideClickCallBlock; // +0x20
    id /* block */ _activityRankEntryClickCallBlock; // +0x28
    long long _balance; // +0x30
    NSString * _scrollToActivityEventId; // +0x38
    MMFinderLiveTaskId * _taskId; // +0x40
    UIView * _contentView; // +0x48
    UIScrollView * _scrollContentView; // +0x50
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x58
    MMUILabel * _interactionWishTitleLabel; // +0x60
    MMFinderLiveInteractionWishOperationView * _interactionWishOperationView; // +0x68
    MMUILabel * _targetGiftTitleLabel; // +0x70
    NSArray * _liveRewardWishes; // +0x78
    NSMutableArray * _targetGiftViews; // +0x80
    UICollectionView * _giftWallCollectionView; // +0x88
    UICollectionViewFlowLayout * _giftWallCollectionLayout; // +0x90
    double _lastCollectionViewWidth; // +0x98
    MMUILabel * _giftWallTitleLabel; // +0xa0
    MMUIButton * _helpButton; // +0xa8
    MMFinderLiveGuidePubbleTipView * _tipsPubbleView; // +0xb0
    MMUILabel * _activityRankTitleLabel; // +0xb8
    UIView * _activityRankEntryView; // +0xc0
    MMWebImageView * _activityRankIconView; // +0xc8
    MMUILabel * _activityRankMainLabel; // +0xd0
    MMUILabel * _activityRankSubLabel; // +0xd8
    UIImageView * _activityRankArrowView; // +0xe0
    NSArray * _boardEventEntryList; // +0xe8
    FinderLiveGetBoardEventEntryResp_BoardEventEntry * _currentDisplayEntry; // +0xf0
    FinderLiveGiftWallInfo * _giftWallInfo; // +0xf8
    InteractionWishConfig * _currentInteractionWishConfig; // +0x100
}
- (id)initWithTaskId:(id)arg1;
- (void)innerInit;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)showWithAnimated:(BOOL)arg1;
- (void)fetchInteractionWishOnlineMembers;
- (void)fetchRewardWishList;
- (void)fetchGiftWallInfo;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)updateWithWishes:(id)arg1 totalTargetCount:(unsigned long long)arg2 totalCurCount:(unsigned long long)arg3 isAchieved:(BOOL)arg4 isActive:(BOOL)arg5;
- (void)updateActivityRankSectionData;
- (void)fetchBoardEventEntry;
- (void)fetchWecoinBalance;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)performScrollToActivityRank;
- (void)layoutTitleBarView;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateCollectionLayout;
- (void)reloadData;
- (void)updateGiftWallHeaderInfo;
- (void)showPubbleTipsView;
- (void)updateTipsPubbleViewLocation;
- (void)hidePubbleTipsView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onHelpButtonClick;
- (void)onTapContentView:(id)arg1;
- (void)onActivityRankEntryClicked;
- (void)onSendAnchorWishGiftWithGiftItem:(id)arg1;
- (void)onInteractionWishOperationViewActionButtonClicked:(id)arg1;
- (void)onInteractionWishOperationViewNicknameClicked:(id)arg1;
- (id)liveTask;
- (BOOL)isGiftWallEnable;
- (BOOL)isInteractionWishEnable;
- (BOOL)isActivityRankSectionEnable;
- (id)audienceLogReporter;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id /* block */)giftWallBoardClickButtonCallBlock;
- (void)setGiftWallBoardClickButtonCallBlock:(id /* block */)arg1;
- (id /* block */)giftWallHeadImgeSettingGuideClickCallBlock;
- (void)setGiftWallHeadImgeSettingGuideClickCallBlock:(id /* block */)arg1;
- (id /* block */)activityRankEntryClickCallBlock;
- (void)setActivityRankEntryClickCallBlock:(id /* block */)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (BOOL)shouldScrollToActivityRank;
- (void)setShouldScrollToActivityRank:(BOOL)arg1;
- (id)scrollToActivityEventId;
- (void)setScrollToActivityEventId:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)scrollContentView;
- (void)setScrollContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)interactionWishTitleLabel;
- (void)setInteractionWishTitleLabel:(id)arg1;
- (id)interactionWishOperationView;
- (void)setInteractionWishOperationView:(id)arg1;
- (id)targetGiftTitleLabel;
- (void)setTargetGiftTitleLabel:(id)arg1;
- (id)liveRewardWishes;
- (void)setLiveRewardWishes:(id)arg1;
- (id)targetGiftViews;
- (void)setTargetGiftViews:(id)arg1;
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
- (id)tipsPubbleView;
- (void)setTipsPubbleView:(id)arg1;
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
- (id)giftWallInfo;
- (void)setGiftWallInfo:(id)arg1;
- (id)currentInteractionWishConfig;
- (void)setCurrentInteractionWishConfig:(id)arg1;
- (void).cxx_destruct;
@end
