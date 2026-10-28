@interface ICFlowViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ICFlowBatchFetchingDelegate, ICFlowModelObserver>
{
    ICFlowModel * _model; // +0x70
    ICCollectionView * _collectionView; // +0x78
}
- (id)initWithModel:(id)arg1;
- (void)reloadWithModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (CGRect)collectionViewFrame;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)collectionLayout;
- (id)collectionView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)shouldBeginBatchFetching;
- (void)startBatchFetching:(id)arg1;
- (void)flowModelWillLoadNew:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadNew:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadMore:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (void)flowModel:(id)arg1 didCancelLoadMore:(id)arg2;
- (void)flowModelReloadDataItems:(id)arg1;
- (void)flowModel:(id)arg1 insertDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataSectionsAt:(id)arg2;
- (void)updateFooterViewHidden:(BOOL)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
