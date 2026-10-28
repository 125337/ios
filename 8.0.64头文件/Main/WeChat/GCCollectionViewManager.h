@interface GCCollectionViewManager : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _disableChildViewEvent; // +0x8
    BOOL _isLoadingMorePreviousData; // +0x9
    BOOL _hasInitEnd; // +0xa
    BOOL _showHeaderView; // +0xb
    id /* block */ _loadMoreBlock; // +0x10
    id <GCClvManagerProtocol> _managerDelegate; // +0x18
    UILongPressGestureRecognizer * _longPressGesture; // +0x20
    double _trigerPreloadRefreshDistance; // +0x28
    UICollectionView * _collectionView; // +0x30
    GCCollectionViewManagerConfig * _config; // +0x38
    UIRefreshControl * _refreshControl; // +0x40
    NSMutableArray * _sectionArray; // +0x48
    NSMutableDictionary * _reuseIdentifierDict; // +0x50
    NSMutableDictionary * _reuseIdentifierForSupplementaryElementDict; // +0x58
    MMUIActivityIndicatorView * _activityView; // +0x60
    double _activityHeight; // +0x68
    CGPoint _previousContentOffset; // +0x70
}
- (id)initWithCollectionView:(id)arg1;
- (id)initWithManagerConfig:(id)arg1;
- (void)setDisableChildViewEvent:(BOOL)arg1;
- (void)handleLongPress:(id)arg1;
- (void)refreshControlDidRefresh;
- (void)reloadCollectionView;
- (void)onCollectionViewDataChange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)endRefreshWithPreviousModelArray:(id)arg1 hasMoreMessage:(BOOL)arg2;
- (void)configureShowHeaderView:(BOOL)arg1;
- (void)setModelArrayOnly1Section:(id)arg1;
- (void)setSectionModelArray:(id)arg1;
- (id)getSectionModelForIndex:(long long)arg1;
- (void)appendModelArray:(id)arg1 toSection:(id)arg2;
- (void)appendModelArray:(id)arg1 toSection:(id)arg2 completion:(id /* block */)arg3;
- (void)insertModelArray:(id)arg1 toSection:(id)arg2 atIndex:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)indexPathForCellModel:(id)arg1;
- (void)reloadCellModel:(id)arg1;
- (void)replaceCellModel:(id)arg1 withNewModel:(id)arg2;
- (id)indexPathOfCellModelPassingTest:(id /* block */)arg1;
- (id)layoutAttributeForCellModel:(id)arg1;
- (void)forceScrollToBottom:(BOOL)arg1;
- (void)didLoadMorePreviousModelArray:(id)arg1;
- (id)collectionViewFlowLayout;
- (id)bindCollectionView;
- (id)indexPathForLastItem;
- (BOOL)isIndexPathVisible:(id)arg1;
- (id)singleSectionModel;
- (void)reloadSection:(id)arg1;
- (void)appendSection:(id)arg1;
- (void)insertSection:(id)arg1 beforeSectionModel:(id)arg2;
- (void)insertSection:(id)arg1 afterSectionModel:(id)arg2;
- (void)insertSection:(id)arg1 withSectionModel:(id)arg2 offset:(long long)arg3;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (id)cellModelForIndexPath:(id)arg1;
- (void)invalidAllCellModelLayout;
- (CGSize)realContentSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id /* block */)loadMoreBlock;
- (void)setLoadMoreBlock:(id /* block */)arg1;
- (id)managerDelegate;
- (void)setManagerDelegate:(id)arg1;
- (BOOL)disableChildViewEvent;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (double)trigerPreloadRefreshDistance;
- (void)setTrigerPreloadRefreshDistance:(double)arg1;
- (CGPoint)previousContentOffset;
- (void)setPreviousContentOffset:(CGPoint)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)refreshControl;
- (void)setRefreshControl:(id)arg1;
- (id)sectionArray;
- (void)setSectionArray:(id)arg1;
- (id)reuseIdentifierDict;
- (void)setReuseIdentifierDict:(id)arg1;
- (id)reuseIdentifierForSupplementaryElementDict;
- (void)setReuseIdentifierForSupplementaryElementDict:(id)arg1;
- (id)activityView;
- (void)setActivityView:(id)arg1;
- (BOOL)isLoadingMorePreviousData;
- (void)setIsLoadingMorePreviousData:(BOOL)arg1;
- (BOOL)hasInitEnd;
- (void)setHasInitEnd:(BOOL)arg1;
- (double)activityHeight;
- (void)setActivityHeight:(double)arg1;
- (BOOL)showHeaderView;
- (void)setShowHeaderView:(BOOL)arg1;
- (void).cxx_destruct;
@end
