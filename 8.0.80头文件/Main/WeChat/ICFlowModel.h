@interface ICFlowModel : NSObject
{
    BOOL _isFirstLoad; // +0x8
    BOOL _hasMore; // +0x9
    ICCollectionStatInfo * _statInfo; // +0x10
    NSHashTable * _observerList; // +0x18
    NSObject<OS_dispatch_queue> * _workThread; // +0x20
    NSMutableArray * _sectionItems; // +0x28
    id _loadingNewId; // +0x30
    id _loadingMoreId; // +0x38
    ICBatchFetchingContext * _batchFetchingContext; // +0x40
}
- (id)indexPathOfDataItem:(id)arg1;
- (id)indexPathOfDataItemWhere:(id /* block */)arg1;
- (id)allFlatDataItems;
- (id)allFlatDataItemsWhere:(id /* block */)arg1;
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
- (void)appendDataItems:(id)arg1 atSection:(long long)arg2;
- (void)appendSectionItems:(id)arg1;
- (void)insertSectionItems:(id)arg1 at:(long long)arg2;
- (void)removeSectionAt:(unsigned long long)arg1;
- (long long)sectionCount;
- (long long)sectionItemCountAt:(long long)arg1;
- (id)sectionItemsAt:(long long)arg1;
- (void)removeAllDataItem;
- (void)reloadDataItems:(id)arg1;
- (void)updateUIDataItems:(id)arg1;
- (id)init;
- (id)observerList;
- (id)sectionItems;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserver:(id /* block */)arg1;
- (void)enumerateObserver:(BOOL)arg1 block:(id /* block */)arg2;
- (BOOL)isLoading;
- (BOOL)isLoadingNew;
- (void)fetchNew;
- (id)executeLoadNew;
- (void)didExecuteLoadNewWithResults:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3;
- (id)loadNew:(id /* block */)arg1;
- (void)processLoadNew:(id)arg1 error:(id)arg2;
- (void)handleFetchNewResult:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3;
- (void)cancelFetchNew;
- (void)cancelFetchNew:(id)arg1;
- (BOOL)isLoadingMore;
- (BOOL)shouldLoadMore;
- (void)fetchMore:(id)arg1;
- (id)loadMore:(id /* block */)arg1;
- (id)executeLoadMore;
- (void)didExecuteLoadMoreWithResults:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3;
- (void)processLoadMore:(id)arg1 error:(id)arg2;
- (void)handleFetchMore:(id)arg1 result:(id)arg2 error:(id)arg3 hasMore:(BOOL)arg4;
- (void)cancelFetchMore;
- (void)cancelFetchMore:(id)arg1;
- (id)statInfo;
- (void)setStatInfo:(id)arg1;
- (BOOL)isFirstLoad;
- (void)setIsFirstLoad:(BOOL)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (void)setObserverList:(id)arg1;
- (id)workThread;
- (void)setWorkThread:(id)arg1;
- (void)setSectionItems:(id)arg1;
- (id)loadingNewId;
- (void)setLoadingNewId:(id)arg1;
- (id)loadingMoreId;
- (void)setLoadingMoreId:(id)arg1;
- (id)batchFetchingContext;
- (void)setBatchFetchingContext:(id)arg1;
- (void).cxx_destruct;
@end
