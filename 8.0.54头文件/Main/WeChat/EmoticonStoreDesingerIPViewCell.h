@interface EmoticonStoreDesingerIPViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate>
{
    id <EmoticonStoreDesingerIPViewCellDelegate> _delegate; // +0x8
    MMLoadMoreCollectionView * _collectionView; // +0x10
    UICollectionViewFlowLayout * _layout; // +0x18
    EmoticonLoadMoreFooterView * _loadMoreView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initViews;
- (void)onIPSetsUpdated;
- (id)ipSets;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)loadMoreView;
- (void)setLoadMoreView:(id)arg1;
- (void).cxx_destruct;
@end

