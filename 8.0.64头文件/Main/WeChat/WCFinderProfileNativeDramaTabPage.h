@interface WCFinderProfileNativeDramaTabPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, WCFinderProfileNativeDramaTabPageModelDelegate>
{
    UICollectionView * _collectionView; // +0x8
    WCFinderNoMoreView * _noMoreView; // +0x10
    WCFinderProfileNativeDramaBackgroundView * _backgroundView; // +0x18
    UICollectionViewDiffableDataSource * _collectionViewDataSource; // +0x20
}
- (id)loadView;
- (void)setViewModel:(id)arg1;
- (void)viewDidLoad;
- (id)_collectionViewLayout;
- (void)_setupCollectionViewDataSource;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)viewModelDidFetchData:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)collectionViewDataSource;
- (void)setCollectionViewDataSource:(id)arg1;
- (void).cxx_destruct;
@end
