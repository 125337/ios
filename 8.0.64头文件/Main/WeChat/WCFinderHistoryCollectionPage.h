@interface WCFinderHistoryCollectionPage : WCFinderHistoryPageBase <UICollectionViewDelegate, WCFinderFlowLayoutDelegate, WCFinderHistoryCollectionPageModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderCollectionHistoryCellMenu>
{
    UICollectionViewDiffableDataSource * _dataSource; // +0x8
    UICollectionView * _collectionView; // +0x10
    WCFinderStreamFooterView * _footerView; // +0x18
}
- (id)viewModel;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)createSnapshot;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHistoryCellDeleteItem:(id)arg1;
- (double)collectionView:(id)arg1 flowLayout:(id)arg2 heightForIndexPath:(id)arg3 width:(double)arg4;
- (double)collectionView:(id)arg1 headerHeight:(long long)arg2;
- (double)collectionView:(id)arg1 footerHeight:(long long)arg2;
- (void)collectionView:(id)arg1 insets:(UIEdgeInsets *)arg2 forSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 flowLayout:(id)arg2 pinHeader:(long long)arg3;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)onHistoryCollectionPageDataChanged:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
