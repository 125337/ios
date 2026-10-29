@interface MMMusicPostVideoMyLikePageController : MMMusicPostVideoBasePageController <MMMusicPostVideoMyLikeDataVMDelegate, MMMusicPostVideoCollectionCellDelegate>
{
    MMMusicPostVideoMyLikeDataVM * _dataVM; // +0x8
    UICollectionView * _listView; // +0x10
    MMMusicPostVideoCollectionFooterCell * m_footerView; // +0x18
    BOOL m_continueFlag; // +0x20
}
- (id)initWithCanMultiSelect:(BOOL)arg1;
- (void)layoutWithFrame:(CGRect)arg1;
- (void)onSwitchToThisPage:(BOOL)arg1;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (void)onDataVMDataChanged:(BOOL)arg1;
- (void)mmMusicPostVideoCollectionCell:(id)arg1 onSelectedBtnClicked:(id)arg2;
- (id)dataViewModel;
- (void).cxx_destruct;
@end

