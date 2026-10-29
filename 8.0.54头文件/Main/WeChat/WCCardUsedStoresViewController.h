@interface WCCardUsedStoresViewController : MMUIViewController <ViewLocationDelegate, FavForwardLogicDelegate, UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, WCCardUsedStoreViewDelegate>
{
    id <WCCardDataSource> _cardDataSource; // +0x68
    NSArray * _tableDatas; // +0x70
    MMTableView * _tableView; // +0x78
    unsigned long long _appBrandModeType; // +0x80
}
- (void)dealloc;
- (id)initWithCardDataSource:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeStoreCell:(id)arg1 storeInfo:(id)arg2;
- (void)onRetrieveLocation:(int)arg1;
- (void)onRetrieveLocationConfirm;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (id)getFavForawrdViewController;
- (void)onNavigation:(id)arg1;
- (void)openAppBranWithUserName:(id)arg1 brandPass:(id)arg2;
- (unsigned long long)appBrandModeType;
- (void)setAppBrandModeType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

