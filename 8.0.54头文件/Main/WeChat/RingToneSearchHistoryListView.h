@interface RingToneSearchHistoryListView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderSearchHistoryTableViewCellDelegate, RingToneSearchViewModelDelegate>
{
    id <RingToneSearchHistoryListViewDelegate> _delegate; // +0x8
    UITableView * _tableView; // +0x10
    RingToneSearchHistoryViewModel * _viewModel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)preinit;
- (void)configTableView;
- (void)loadLatestData;
- (void)fetchSuggestion:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)addSearchContent:(id)arg1;
- (void)deleteAllSearchRecord;
- (void)deleteSearchRecord:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onRemoveSearchHistory:(id)arg1;
- (void)onLoadHistorySuccess;
- (void)onFetchSuggestionSuccess;
- (void)clearCurrentDataSuccess;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

