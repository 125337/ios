@interface WCOutPackageViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCOutPackageProductListDelegate, WCOutPurchasePackageDelegate, MMTipsViewControllerDelegate>
{
    int _purchaseRetCode; // +0x68
    NSMutableDictionary * _WCOPkgItemsDict; // +0x70
    MMTableView * _tableView; // +0x78
    WCOutGetPackageProductListCgi * _getproductCgi; // +0x80
    WCOutPurchasePackageCgi * _purchaseCgi; // +0x88
    WCOPackageItem * _item_buy; // +0x90
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)configTableWithoutData;
- (void)configData;
- (id)getPackageByIndex:(unsigned long long)arg1;
- (void)initTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)PackageProductListResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (void)PurchasePackageResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (void)onClickBuy:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showNOPackageLabel;
- (double)getCellContentHeightBtIndex:(id)arg1;
- (id)WCOPkgItemsDict;
- (void)setWCOPkgItemsDict:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)getproductCgi;
- (void)setGetproductCgi:(id)arg1;
- (id)purchaseCgi;
- (void)setPurchaseCgi:(id)arg1;
- (id)item_buy;
- (void)setItem_buy:(id)arg1;
- (int)purchaseRetCode;
- (void)setPurchaseRetCode:(int)arg1;
- (void).cxx_destruct;
@end

