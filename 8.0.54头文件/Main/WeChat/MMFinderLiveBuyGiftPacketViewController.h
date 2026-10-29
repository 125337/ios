@interface MMFinderLiveBuyGiftPacketViewController : MMCPUIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, MMFinderLiveRewardGiftPacketCollectionViewCellDelegate, MMFinderLiveRewardGiftPacketSettingViewDelegate, WCActionSheetDelegate, MMCommonActionSheetPickerDelegate, MMFinderLiveGlobalRewardLevelViewDelegate, MMFinderLiveMgrExt, WCCoinConsumeLogicDelegate, WCCoinBuyCoinLogicDelegate>
{
    BOOL _wecoinBalanceUpdated; // +0x68
    BOOL _fetchWecoinBalanceFinished; // +0x69
    unsigned int _targetLevel; // +0x6c
    MMFinderLiveTaskId * _taskId; // +0x70
    MMFinderLiveGlobalRewardLevelView * _globalRewardLevelView; // +0x78
    MMFinderLiveGlobalRewardLevelView * _globalRewardLevelPreviewView; // +0x80
    NSString * _makeOrderRequestId; // +0x88
    long long _balance; // +0x90
    MMUIActivityIndicatorView * _loadingIndicator; // +0x98
    MMUILabel * _giftPacksHeaderLabel; // +0xa0
    MMUIButton * _selectGiftsButton; // +0xa8
    UICollectionView * _giftPacksCollectionView; // +0xb0
    UIImageView * _collectionGradientBackgroundView; // +0xb8
    UICollectionViewFlowLayout * _giftPacksCollectionLayout; // +0xc0
    double _lastCollectionViewWidth; // +0xc8
    MMCommonActionSheetPicker * _levelPicker; // +0xd0
    NSArray * _giftItemViewModels; // +0xd8
    MMFinderLiveRewardLevelConfigs * _levelConfig; // +0xe0
    UIImageView * _wecoinIconView; // +0xe8
    MMUILabel * _priceInWecoinLabel; // +0xf0
    MMUIButton * _purchaseButton; // +0xf8
    MMUILabel * _announcementLabel; // +0x100
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)initViews;
- (void)updateCollectionLayout;
- (void)reloadData;
- (void)purchase;
- (id)liveTask;
- (void)layoutUI;
- (void)layoutPriceInWecoin;
- (void)showLevelPicker;
- (void)dismissLevelPicker;
- (id)levelComponent;
- (id)toast;
- (void)startProductListLoadingNonBlock;
- (void)stopProductListLoading;
- (void)updateTargetRank:(unsigned int)arg1;
- (void)reloadAndRefreshData;
- (void)fetchWecoinBalance;
- (void)onBackButtonClicked:(id)arg1;
- (void)onPurchaseButtonClicked:(id)arg1;
- (void)onGiftsReselectClicked:(id)arg1;
- (void)consumeCoinWithBillNo:(id)arg1 requestId:(id)arg2 respBuff:(id)arg3 totalWecoinAmount:(long long)arg4;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)chargeCoinWithRechargeScene:(unsigned int)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)onGlobalRewardLevelEditButtonClicked;
- (void)commonPickerDismissed:(id)arg1;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)onMMFinderLiveRewardGiftPacketSettingViewChooseGiftPacketViewModel:(id)arg1 targetRank:(unsigned int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)audienceLogReporter;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)globalRewardLevelView;
- (void)setGlobalRewardLevelView:(id)arg1;
- (id)globalRewardLevelPreviewView;
- (void)setGlobalRewardLevelPreviewView:(id)arg1;
- (unsigned int)targetLevel;
- (void)setTargetLevel:(unsigned int)arg1;
- (id)makeOrderRequestId;
- (void)setMakeOrderRequestId:(id)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (BOOL)fetchWecoinBalanceFinished;
- (void)setFetchWecoinBalanceFinished:(BOOL)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)giftPacksHeaderLabel;
- (void)setGiftPacksHeaderLabel:(id)arg1;
- (id)selectGiftsButton;
- (void)setSelectGiftsButton:(id)arg1;
- (id)giftPacksCollectionView;
- (void)setGiftPacksCollectionView:(id)arg1;
- (id)collectionGradientBackgroundView;
- (void)setCollectionGradientBackgroundView:(id)arg1;
- (id)giftPacksCollectionLayout;
- (void)setGiftPacksCollectionLayout:(id)arg1;
- (double)lastCollectionViewWidth;
- (void)setLastCollectionViewWidth:(double)arg1;
- (id)levelPicker;
- (void)setLevelPicker:(id)arg1;
- (id)giftItemViewModels;
- (void)setGiftItemViewModels:(id)arg1;
- (id)levelConfig;
- (void)setLevelConfig:(id)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)priceInWecoinLabel;
- (void)setPriceInWecoinLabel:(id)arg1;
- (id)purchaseButton;
- (void)setPurchaseButton:(id)arg1;
- (id)announcementLabel;
- (void)setAnnouncementLabel:(id)arg1;
- (void).cxx_destruct;
@end

