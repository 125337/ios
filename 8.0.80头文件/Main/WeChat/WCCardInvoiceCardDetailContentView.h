@interface WCCardInvoiceCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDataSource, UITableViewDelegate, WCCardDetailContentLogicDelegate, WCShareCardInvoiceCardHeaderDelegate, ILinkEventExt>
{
    BOOL _bUserHasClickUnfoldBtn; // +0x8
    BOOL _bIsShareCardMode; // +0x9
    id <WCCardInvoiceCardContentViewDelegate> _delegte; // +0x10
    WCShareCardInvoiceHeaderView * _invoiceCardHeaderView; // +0x18
}
- (id)initContentViewWithFrame:(CGRect)arg1 isShareCardMode:(BOOL)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)createTableViewFooterView;
- (id)createItemDetailView;
- (void)reloadContentData;
- (void)onInvoiceCardViewApplyBtnClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCellBottomLineWithRowType:(id)arg1 withIndexPath:(id)arg2 withCell:(id)arg3 withCellContentHeight:(double)arg4;
- (void)makeDetailTableCell:(id)arg1;
- (double)calcDetailTableCellHeight;
- (void)onClickFlatBtn:(id)arg1;
- (void)onClickAcceptCardBtn:(id)arg1;
- (double)getTableViewCellSumHeight;
- (void)realOpenUrl:(id)arg1;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (id)delegte;
- (void)setDelegte:(id)arg1;
- (BOOL)bIsShareCardMode;
- (void)setBIsShareCardMode:(BOOL)arg1;
- (id)invoiceCardHeaderView;
- (void)setInvoiceCardHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
