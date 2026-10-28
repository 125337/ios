@interface WCFinderSearchHistoryListView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderSearchHistoryTableViewCellDelegate, WCFinderSearchSuggestionViewModelDelegate>
{
    int _commentScene; // +0x8
    id <WCFinderSearchHistoryListViewDelegate> _delegate; // +0x10
    unsigned long long _searchScene; // +0x18
    NSString * _searchSessionId; // +0x20
    UITableView * _tableView; // +0x28
    WCFinderSearchSuggestionViewModel * _viewModel; // +0x30
    WCFinderSearchReportModel * _reportModel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configTableView;
- (void)loadLatestData;
- (void)fetchSuggestion:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onRemoveSearchHistory:(id)arg1;
- (void)onLoadHistorySuccess;
- (void)onFetchSuggestionSuccess;
- (void)fillReportParams:(BOOL)arg1;
- (void)clearCurrentDataSuccess;
- (int)enterScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (void).cxx_destruct;
@end
