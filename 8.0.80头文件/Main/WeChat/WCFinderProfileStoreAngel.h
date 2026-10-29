@interface WCFinderProfileStoreAngel : ZZFLEXAngel <WCFinderStreamFooterViewActionDelegate>
{
    WCFinderProfileStorePageModel * _viewModel; // +0x8
    UINavigationController * _navigationController; // +0x10
    WCFinderStreamFooterView * _footerView; // +0x18
}
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (id)collectionView;
- (double)originY30percent;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
