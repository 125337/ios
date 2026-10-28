@interface WCMktCardHomeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCMktCardHomeLogicControllerDelegate, WCMktMerchantItemCellDelegate, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate, WCMktStoreSectionCellDelegate>
{
    WCMktCardHomeLogicController * _logicController; // +0x70
    MMTableView * _tableView; // +0x78
    NSString * _currentSelectCardDetailMerchantID; // +0x80
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)setupEmptyView:(id)arg1;
- (void)handleHeaderRefresh;
- (void)faqButtonClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (void)updateFooterView;
- (void)updateRightBarButton;
- (void)rightBarButtonClick;
- (void)scrollToRowWithIndexPath:(id)arg1;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)arg1;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)arg1 mchID:(id)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)arg1;
- (void)storeCellClickSortrule;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onUpdateStoreElemDataSuccWithIndexPath:(id)arg1;
- (void)onUpdateTopCellWithIndexPath:(id)arg1;
- (void)onTableViewNeedRefresh;
- (void)onDeleteCard:(id)arg1;
- (void)handleMerchantInfoUpdateWithCardData:(id)arg1;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onUseCard:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)registerYReportSdk;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)currentSelectCardDetailMerchantID;
- (void)setCurrentSelectCardDetailMerchantID:(id)arg1;
- (void).cxx_destruct;
@end
