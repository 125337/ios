@interface WCPaySolitairePageSheet : NSObject <MMPageSheetAdapterDelegate, UITableViewDelegate, UITableViewDataSource, WCPayGPSoliListTableViewCellDelegate>
{
    NSArray * _dataList; // +0x8
    id <WCPaySolitairePageSheetDelegate> _delegate; // +0x10
    MMPageSheetAdapter * _pageAdapter; // +0x18
    UIView * _pageDetailView; // +0x20
    MMTableView * _dataTableView; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)updatePageSheetWithData:(id)arg1;
- (void)setupAdapter;
- (void)setupDetailView;
- (void)setupEmptyView;
- (void)setupDataTableView;
- (double)calcContentViewHeight;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickCellShowDetailWithSoliObj:(id)arg1;
- (void)showPageSheet;
- (void)dismissPageSheet;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageDetailView;
- (void)setPageDetailView:(id)arg1;
- (id)dataTableView;
- (void)setDataTableView:(id)arg1;
- (void).cxx_destruct;
@end
