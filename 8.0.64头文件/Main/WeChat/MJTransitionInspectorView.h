@interface MJTransitionInspectorView : MJSegmentInspectorView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <MJTransitionInspectorViewDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
}
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)loadContent;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateCellSelection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
