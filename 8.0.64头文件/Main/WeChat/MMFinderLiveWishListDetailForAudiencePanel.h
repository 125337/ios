@interface MMFinderLiveWishListDetailForAudiencePanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardWishSendingViewDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _wecoinBalanceUpdated; // +0x8
    id <MMFinderLiveWishListDetailForAudiencePanelDelegate> _operationDelegate; // +0x10
    id /* block */ _giftWallBoardClickButtonCallBlock; // +0x18
    id /* block */ _giftWallHeadImgeSettingGuideClickCallBlock; // +0x20
    long long _balance; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    UIView * _contentView; // +0x38
    UIScrollView * _scrollContentView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x50
    MMUILabel * _targetGiftTitleLabel; // +0x58
    NSMutableArray * _targetGiftViews; // +0x60
    UICollectionView * _giftWallCollectionView; // +0x68
    UICollectionViewFlowLayout * _giftWallCollectionLayout; // +0x70
    double _lastCollectionViewWidth; // +0x78
    MMUILabel * _giftWallTitleLabel; // +0x80
    MMUIButton * _helpButton; // +0x88
    MMFinderLiveSharePubbleTipView * _tipsPubbleView; // +0x90
    FinderLiveGiftWallInfo * _giftWallInfo; // +0x98
}
- (id)initWithTaskId:(id)arg1;
- (void)innerInit;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)updateWithWishes:(id)arg1 totalTargetCount:(unsigned long long)arg2 totalCurCount:(unsigned long long)arg3 isAchieved:(BOOL)arg4 isActive:(BOOL)arg5;
- (void)fetchWecoinBalance;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
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
- (void)onSendAnchorWishGiftWithGiftItem:(id)arg1;
- (id)liveTask;
- (BOOL)isGiftWallEnable;
- (id)audienceLogReporter;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id /* block */)giftWallBoardClickButtonCallBlock;
- (void)setGiftWallBoardClickButtonCallBlock:(id /* block */)arg1;
- (id /* block */)giftWallHeadImgeSettingGuideClickCallBlock;
- (void)setGiftWallHeadImgeSettingGuideClickCallBlock:(id /* block */)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)scrollContentView;
- (void)setScrollContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)targetGiftTitleLabel;
- (void)setTargetGiftTitleLabel:(id)arg1;
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
- (id)giftWallInfo;
- (void)setGiftWallInfo:(id)arg1;
- (void).cxx_destruct;
@end
