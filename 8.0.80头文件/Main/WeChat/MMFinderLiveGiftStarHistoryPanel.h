@interface MMFinderLiveGiftStarHistoryPanel : MMFinderLiveGiftStarBasePanel <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _hasMore; // +0x8
    BOOL _isLoading; // +0x9
    BOOL _loadedOnce; // +0xa
    unsigned long long _historyMaxLevel; // +0x10
    unsigned long long _maxLevel; // +0x18
    unsigned long long _pageIndex; // +0x20
    NSMutableArray * _records; // +0x28
    NSData * _lastBuffer; // +0x30
    UICollectionView * _collectionView; // +0x38
    MMUILabel * _stateLabel; // +0x40
}
- (id)initWithTaskId:(id)arg1 historyMaxLevel:(unsigned long long)arg2 maxLevel:(unsigned long long)arg3;
- (void)panelDidPush;
- (id)panelBackgroundColor;
- (void)loadMore;
- (void)updateState;
- (void)setupContent;
- (void)layoutContentWithBounds:(CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)historyMaxLevel;
- (void)setHistoryMaxLevel:(unsigned long long)arg1;
- (unsigned long long)maxLevel;
- (void)setMaxLevel:(unsigned long long)arg1;
- (unsigned long long)pageIndex;
- (void)setPageIndex:(unsigned long long)arg1;
- (id)records;
- (void)setRecords:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)loadedOnce;
- (void)setLoadedOnce:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (void).cxx_destruct;
@end
