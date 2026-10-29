@interface WCPayBizF2FTransferMoneyFaovrPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate, UITableViewDataSource, UITableViewDelegate, WCPayFavorSelectCellDelegate>
{
    BOOL _bIsShowing; // +0x8
    int _tableViewHeight; // +0xc
    int _pageSheetMarginTop; // +0x10
    id <WCPayBizF2FTransferMoneyFaovrPageSheetDelegate> _delegate; // +0x18
    WCPayBizF2FTransferMoneyFaovrPageSheetConfig * _config; // +0x20
    MMPageSheetAdapter * _pageAdapter; // +0x28
    MMTableView * _m_tableView; // +0x30
    NSMutableArray * _m_selectedArray; // +0x38
}
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (void)setupDetailView;
- (void)updateConfig:(id)arg1;
- (void)initPageSheet;
- (void)showPageSheet;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)updateTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getTableViewHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onWCPayFavorSelectCellSelectIndex:(long long)arg1;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)dismissPageSheet;
- (void)dismissPage;
- (BOOL)isPageSheetShowing;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetDidClose:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)bIsShowing;
- (void)setBIsShowing:(BOOL)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_selectedArray;
- (void)setM_selectedArray:(id)arg1;
- (int)tableViewHeight;
- (void)setTableViewHeight:(int)arg1;
- (int)pageSheetMarginTop;
- (void)setPageSheetMarginTop:(int)arg1;
- (void).cxx_destruct;
@end

