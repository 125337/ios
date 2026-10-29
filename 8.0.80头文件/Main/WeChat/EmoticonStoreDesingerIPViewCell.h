@interface EmoticonStoreDesingerIPViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate>
{
    id <EmoticonStoreDesingerIPViewCellDelegate> _delegate; // +0x8
    NSNumber * _designerUin; // +0x10
    MMLoadMoreCollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _layout; // +0x20
    EmoticonLoadMoreFooterView * _loadMoreView; // +0x28
    NSMutableSet * _lastVisibleItems; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initViews;
- (void)onIPSetsUpdated;
- (id)ipSets;
- (void)checkVisibleItems;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)tabPageDidAppear;
- (void)tabPageDidDisappear;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)designerUin;
- (void)setDesignerUin:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)loadMoreView;
- (void)setLoadMoreView:(id)arg1;
- (id)lastVisibleItems;
- (void)setLastVisibleItems:(id)arg1;
- (void).cxx_destruct;
@end
