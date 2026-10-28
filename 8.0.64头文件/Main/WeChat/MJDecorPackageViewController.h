@interface MJDecorPackageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    MJDecorPackageViewModel * _viewModel; // +0x8
    UICollectionView * _collectionView; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)bindViews;
- (void)unbindViews;
- (void)setupViews;
- (void)loadContents;
- (void)updateViewsForWillLoadContents;
- (void)updateViewsForDidLoadContents:(BOOL)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateCellSelection;
- (id)collectionView;
- (id)loadingView;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
