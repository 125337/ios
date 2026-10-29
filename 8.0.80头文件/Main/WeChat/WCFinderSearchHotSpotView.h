@interface WCFinderSearchHotSpotView : MMUIView <UITableViewDelegate, UITableViewDataSource, WCFinderSearchHotSpotViewModelDelegate, WCFinderSearchHistoryTableViewCellDelegate>
{
    id <WCFinderSearchHotSpotViewDelegate> _delegate; // +0x8
    UITableView * _tableView; // +0x10
    WCFinderSearchHotSpotViewModel * _viewModel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (void)setupData;
- (void)setupUI;
- (void)reloadHistoryData;
- (int)getCommentScene;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onFinderSearchHotSpotVMDataChanged:(id)arg1;
- (void)onRemoveSearchHistory:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
