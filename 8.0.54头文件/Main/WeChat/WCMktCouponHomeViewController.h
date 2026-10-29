@interface WCMktCouponHomeViewController : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCMktCouponHomeLogicControllerDelegate, WCMktMerchantItemCellDelegate, WCNewCardDetailViewControllerDelegate>
{
    WCMktCouponHomeLogicController * _logicController; // +0x68
    MMTableView * _tableView; // +0x70
    MMUILabel * _headerContentLabel; // +0x78
    UIButton * _headerContentCoverBtn; // +0x80
    UIView * _emptyView; // +0x88
    NSString * _currentSelectCardDetailMerchantID; // +0x90
}
- (id)initWithTitle:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)updateFooterView;
- (void)forceUseSortByAcceptTime;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (void)scrollToRowWithIndexPath:(id)arg1;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)arg1;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)arg1 mchID:(id)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)arg1;
- (void)handleHeaderRefresh;
- (void)sortRuleCoverBtnClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateRightBarButton;
- (void)rightBarButtonClick;
- (void)setupEmptyView;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedUpdateWithIndexPath:(id)arg1;
- (void)onTableViewNeedUpdateSortContent;
- (void)onDeleteCard:(id)arg1;
- (void)handleMerchantInfoUpdateWithCardData:(id)arg1;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onUseCard:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerContentLabel;
- (void)setHeaderContentLabel:(id)arg1;
- (id)headerContentCoverBtn;
- (void)setHeaderContentCoverBtn:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)currentSelectCardDetailMerchantID;
- (void)setCurrentSelectCardDetailMerchantID:(id)arg1;
- (void).cxx_destruct;
@end

