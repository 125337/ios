@interface WCFinderProfileStickerTabPage : WCFinderStreamProfileViewPage <WCFinderProfileStickerTabPageModelDelegate, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _didScrollToSingleEmoji; // +0x8
    UILabel * _statusTips; // +0x10
    WCFinderStreamFooterView * _loadmoreFooterView; // +0x18
    WCFinderStreamFooterView * _noMoreFooterView; // +0x20
    UICollectionView * _collectionView; // +0x28
    unsigned long long _emotionFetchStatus; // +0x30
    unsigned long long _emojiCellLineCount; // +0x38
    double _emojiCellMargin; // +0x40
    UITapGestureRecognizer * _storePackViewMoreGesture; // +0x48
    NSString * _sdkRequestID; // +0x50
    unsigned long long _enterTime; // +0x58
}
- (id)loadView;
- (void)pageSizeDidChanged;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 footerEdgeInsetAtSection:(unsigned long long)arg3;
- (unsigned long long)emojiCellLineCount;
- (double)emojiCellMargin;
- (void)genEmojiCellWidth;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configHeaderViewFor:(id)arg1 withTitle:(id)arg2;
- (BOOL)isStorePackFlattened;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)emotionTabPageModelFirstPageDataLoadFinish:(BOOL)arg1;
- (void)emotionTabPageModelFetchDoneForType:(unsigned long long)arg1 andHasMore:(BOOL)arg2;
- (void)emotionTabPageModelFetchFailedForType:(unsigned long long)arg1;
- (void)emotionTabPageModelGotDataChangeAndNeedReload;
- (void)updateStatusTips:(BOOL)arg1 tips:(id)arg2;
- (void)onTapRetry;
- (id)getNavController;
- (id)getViewController;
- (id)sdkRequestID;
- (id)sdkPageName;
- (unsigned long long)sdkPageID;
- (id)enterTimeStr;
- (unsigned long long)cellTypeForSection:(unsigned long long)arg1;
- (id)storePackViewMoreGesture;
- (void)onTapGesture:(id)arg1;
- (void)scrollToSingleEmojiIfNeeded;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateLoadMoreFooterViewStatus;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (id)reportParams;
- (id)statusTips;
- (void)setStatusTips:(id)arg1;
- (id)loadmoreFooterView;
- (void)setLoadmoreFooterView:(id)arg1;
- (id)noMoreFooterView;
- (void)setNoMoreFooterView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (unsigned long long)emotionFetchStatus;
- (void)setEmotionFetchStatus:(unsigned long long)arg1;
- (void)setEmojiCellLineCount:(unsigned long long)arg1;
- (void)setEmojiCellMargin:(double)arg1;
- (void)setStorePackViewMoreGesture:(id)arg1;
- (BOOL)didScrollToSingleEmoji;
- (void)setDidScrollToSingleEmoji:(BOOL)arg1;
- (void)setSdkRequestID:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

