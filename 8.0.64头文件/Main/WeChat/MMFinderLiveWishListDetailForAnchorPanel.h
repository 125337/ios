@interface MMFinderLiveWishListDetailForAnchorPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _isAchieved; // +0x8
    BOOL _isActive; // +0x9
    unsigned int _totalPrice; // +0xc
    id /* block */ _clickModifyButtonCallBlock; // +0x10
    id /* block */ _giftWallBoardClickButtonCallBlock; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _contentView; // +0x28
    UIScrollView * _scrollContentView; // +0x30
    MMUILabel * _headerTitleLabel; // +0x38
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x40
    MMUIButton * _settingButton; // +0x48
    MMUILabel * _priceTitleLabel; // +0x50
    UIImageView * _wishAchievedIconView; // +0x58
    UIImageView * _coinIconView; // +0x60
    MMUILabel * _priceLabel; // +0x68
    NSMutableArray * _targetGiftViews; // +0x70
    NSArray * _lastRewardWishList; // +0x78
    NSArray * _liveRewardWishes; // +0x80
    unsigned long long _totalTargetCount; // +0x88
    unsigned long long _totalCurCount; // +0x90
    UICollectionView * _giftWallCollectionView; // +0x98
    UICollectionViewFlowLayout * _giftWallCollectionLayout; // +0xa0
    double _lastCollectionViewWidth; // +0xa8
    MMUILabel * _giftWallTitleLabel; // +0xb0
    MMUIButton * _helpButton; // +0xb8
    FinderLiveGiftWallInfo * _giftWallInfo; // +0xc0
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
- (void)layoutTitleBarView;
- (void)layoutPriceView;
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
- (void)onHelpButtonClick;
- (void)handleCreateNewWishButtonClick;
- (void)onRemoveCurrentRewardWish;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id)liveTask;
- (BOOL)isGiftWallEnable;
- (id /* block */)clickModifyButtonCallBlock;
- (void)setClickModifyButtonCallBlock:(id /* block */)arg1;
- (id /* block */)giftWallBoardClickButtonCallBlock;
- (void)setGiftWallBoardClickButtonCallBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)scrollContentView;
- (void)setScrollContentView:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
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
- (void).cxx_destruct;
@end
