@interface ProductInfoDetailViewController : MMUIViewController <UIScrollViewDelegate, WCActionSheetDelegate>
{
    MMTableViewInfo * _mainTableViewInfo; // +0x70
    ScanProductItem * _productItem; // +0x78
    NSArray * _detailList; // +0x80
    NSArray * _bannerList; // +0x88
    MMScrollView * _adScrollView; // +0x90
    UIView * _headerView; // +0x98
    UIPageControl * _adPageControl; // +0xa0
}
- (id)initWithProductItem:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getTableHeaderView;
- (void)onPageControllerChangePage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (double)getShopInfoCellHeight:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onJumptoFeedBackView;
- (void).cxx_destruct;
@end
