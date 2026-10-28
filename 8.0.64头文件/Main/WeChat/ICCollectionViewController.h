@interface ICCollectionViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ICFlowBatchFetchingDelegate>
{
    BOOL _hasMoreData; // +0x70
    BOOL _isLoadingNewData; // +0x71
    BOOL _isLoadingMoreData; // +0x72
    BOOL _isFirstLoad; // +0x73
    ICCollectionStatInfo * _statInfo; // +0x78
    ICCollectionView * _collectionView; // +0x80
    NSMutableArray * _sectionItems; // +0x88
    id _loadingNewId; // +0x90
    id _loadingMoreId; // +0x98
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)sectionItems;
- (id)collectionLayout;
- (id)collectionView;
- (void)viewDidTransitionToNewSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (BOOL)shouldBeginBatchFetching;
- (void)startBatchFetching:(id)arg1;
- (BOOL)isLoadingData;
- (BOOL)shouldLoadNewData;
- (void)willLoadNewData;
- (void)fetchNewData;
- (void)stopFetchingNewData;
- (void)stopLoadingNewData:(id)arg1;
- (id)loadNewData:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)processLoadNewDataResult:(id)arg1 error:(id)arg2 shouldClearOldData:(BOOL)arg3 isFirstLoad:(BOOL)arg4 processCompletion:(id /* block */)arg5;
- (void)didFinishLoadNewData:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3 isFirstLoad:(BOOL)arg4;
- (BOOL)shouldLoadMoreData;
- (void)willLoadMoreData;
- (void)fetchMoreData;
- (void)fetchMoreData:(id)arg1;
- (void)didApplyCacheDataWithHasMoreData:(BOOL)arg1;
- (void)stopFetchingMoreData;
- (void)stopLoadingMoreData:(id)arg1;
- (id)loadMoreData:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)processLoadMoreDataResult:(id)arg1 error:(id)arg2 isFirstLoad:(BOOL)arg3;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3 isFirstLoad:(BOOL)arg4;
- (id)indexPathOfDataItem:(id)arg1;
- (id)indexPathOfDataItemWhere:(id /* block */)arg1;
- (id)allSectionItems;
- (id)lastDataItem;
- (id)lastSectionItems;
- (id)dataItemAt:(id)arg1;
- (void)appendDataItem:(id)arg1;
- (void)insertDataItem:(id)arg1 at:(id)arg2;
- (void)replaceDataItem:(id)arg1 at:(id)arg2;
- (void)removeDataItemAt:(id)arg1;
- (long long)dataItemCount;
- (void)replaceSectionItems:(id)arg1 at:(long long)arg2;
- (void)insertSectionItems:(id)arg1 at:(id)arg2;
- (void)appendDataItems:(id)arg1 atSection:(long long)arg2;
- (void)appendSectionItems:(id)arg1;
- (void)removeSectionAt:(unsigned long long)arg1;
- (long long)sectionCount;
- (long long)sectionItemCountAt:(long long)arg1;
- (id)sectionItemsAt:(long long)arg1;
- (void)removeAllDataItem;
- (void)reloadDataItems:(id)arg1;
- (void)reset;
- (void)updateFooterViewHidden:(BOOL)arg1;
- (id)statInfo;
- (void)setStatInfo:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (void)setSectionItems:(id)arg1;
- (BOOL)isLoadingNewData;
- (void)setIsLoadingNewData:(BOOL)arg1;
- (BOOL)isLoadingMoreData;
- (void)setIsLoadingMoreData:(BOOL)arg1;
- (BOOL)isFirstLoad;
- (void)setIsFirstLoad:(BOOL)arg1;
- (id)loadingNewId;
- (void)setLoadingNewId:(id)arg1;
- (id)loadingMoreId;
- (void)setLoadingMoreId:(id)arg1;
- (void).cxx_destruct;
@end
