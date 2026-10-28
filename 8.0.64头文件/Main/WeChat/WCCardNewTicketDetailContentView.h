@interface WCCardNewTicketDetailContentView : WCCardBaseCardDetailContentView <WCCardDetailContentLogicDelegate, UITableViewDelegate, UITableViewDataSource, WCShareCardNewTicketHeaderDelegate, WCCardTicketCodeCellViewDelegate, ILinkEventExt>
{
    id <WCCardNewTicketContentDelegate> _delegte; // +0x8
}
- (id)initContentViewWithFrame:(CGRect)arg1 withCardDataSource:(id)arg2 withNearbyStore:(id)arg3 withServiceContact:(id)arg4 withDelegate:(id)arg5;
- (void)reloadContentData;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)createTableViewFooterView;
- (double)getTableViewCellSumHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCodeCell:(id)arg1;
- (BOOL)ticketHeaderHaveNearByStoreInfo;
- (id)ticketHeaderGetStoreInfo;
- (BOOL)ticketHeaderHaveUsedStoreInfo;
- (void)onTicketHeaderUsredStoreBtnClick;
- (void)onTicketHeaderAcceptBtnClick;
- (void)jumpButtonDidClikced;
- (void)onTicketCodeCellViewSecondaryFieldClick:(id)arg1;
- (void)onTicketCodeCellViewCodeClick;
- (void)realOpenUrl:(id)arg1;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (id)delegte;
- (void)setDelegte:(id)arg1;
- (void).cxx_destruct;
@end
