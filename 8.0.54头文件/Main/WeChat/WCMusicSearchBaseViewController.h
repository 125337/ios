@interface WCMusicSearchBaseViewController : ICCollectionViewController
{
    WCMusicSearchContext * _searchContext; // +0x68
    unsigned long long _lastRequestId; // +0x70
    WCMusicSearchHintView * _hintView; // +0x78
    WCMusicFooterHintView * _currentFooterView; // +0x80
}
- (void)doSearchWithContext:(id)arg1;
- (Class)collectionViewCellClass;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)generateCollectionViewFlowLayout;
- (id)generateEmptyHintView;
- (void)doSearch;
- (void)cancelSearch;
- (void)cancelSearchWithLastReqeustId:(unsigned long long)arg1;
- (id)loadMoreData:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (unsigned long long)loadWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)processLoadMoreDataResult:(id)arg1 error:(id)arg2 isFirstLoad:(BOOL)arg3;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3 isFirstLoad:(BOOL)arg4;
- (void)startListLoading;
- (BOOL)checkEmptyHintViewDisplayStatus;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionVeiwCellForDataItem:(id)arg1 reuseCell:(id)arg2;
- (id)hintView;
- (BOOL)showFooterView;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (unsigned long long)lastRequestId;
- (void)setLastRequestId:(unsigned long long)arg1;
- (void)setHintView:(id)arg1;
- (id)currentFooterView;
- (void)setCurrentFooterView:(id)arg1;
- (void).cxx_destruct;
@end

