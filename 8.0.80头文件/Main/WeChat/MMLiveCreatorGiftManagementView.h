@interface MMLiveCreatorGiftManagementView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _hasMore; // +0x8
    BOOL _isLoadingMore; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x18
    UICollectionView * _collectionView; // +0x20
    UIView * _loadingOverlay; // +0x28
    UIActivityIndicatorView * _loadingIndicator; // +0x30
    CAGradientLayer * _bottomGradientLayer; // +0x38
    NSArray * _giftItems; // +0x40
    NSArray * _pinnedGiftItems; // +0x48
    NSData * _lastBuffer; // +0x50
    unsigned long long _requestSeqId; // +0x58
    NSIndexPath * _selectedIndexPath; // +0x60
}
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheet;
- (void)createUI;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)showLoading;
- (void)hideLoading;
- (void)fetchDesignedGiftList;
- (void)loadMoreIfNeeded;
- (void)fetchDesignedGiftListWithLastBuffer:(id)arg1 isRefresh:(BOOL)arg2;
- (void)pinGift:(id)arg1;
- (void)unpinGift:(id)arg1;
- (void)sendModPinnedDesignedGiftRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGiftListResponse:(id)arg1;
- (void)appendGiftListResponse:(id)arg1;
- (void)showErrorToastWithMsg:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)deselectCurrentCell;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (BOOL)isGiftPinned:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)loadingOverlay;
- (void)setLoadingOverlay:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)giftItems;
- (void)setGiftItems:(id)arg1;
- (id)pinnedGiftItems;
- (void)setPinnedGiftItems:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg1;
- (unsigned long long)requestSeqId;
- (void)setRequestSeqId:(unsigned long long)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
