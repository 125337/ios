@interface MMFinderLiveAnchorThumbLikeListPageSheet : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveAnchorThumbLikeListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    BOOL _didReportShow; // +0x8
    BOOL _didReportClose; // +0x9
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x10
    id <MMFinderLiveAnchorThumbLikeListPageSheetDelegate> _delegate; // +0x18
    MMFinderLiveAnchorThumbLikeListViewModel * _viewModel; // +0x20
    UIView * _contentView; // +0x28
    MMTableView * _tableView; // +0x30
    WCFinderDynamicRichTextView * _titleIconView; // +0x38
    WCFinderRefreshTableFooterView * _footerView; // +0x40
    UIButton * _stateButton; // +0x48
    UIView * _columnsHeader; // +0x50
    UILabel * _audienceColumnLabel; // +0x58
    UILabel * _countColumnLabel; // +0x60
}
- (id)initWithTaskId:(id)arg1 objectId:(unsigned long long)arg2 totalLikeCount:(unsigned long long)arg3;
- (void)dealloc;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)setupPageSheetConfig;
- (void)setupSubViews;
- (id)tableView;
- (id)columnsHeader;
- (id)footerView;
- (void)layoutColumnsHeader;
- (void)updateTitle;
- (void)layoutContentView;
- (void)onClickClose;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)anchorThumbLikeListViewModelDidLoadFirstPage;
- (void)anchorThumbLikeListViewModelDidLoadNextPage;
- (void)anchorThumbLikeListViewModelDidFailLoad;
- (void)retryFirstPage;
- (void)updateListState;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)titleIconView;
- (void)setTitleIconView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)stateButton;
- (void)setStateButton:(id)arg1;
- (void)setColumnsHeader:(id)arg1;
- (id)audienceColumnLabel;
- (void)setAudienceColumnLabel:(id)arg1;
- (id)countColumnLabel;
- (void)setCountColumnLabel:(id)arg1;
- (BOOL)didReportShow;
- (void)setDidReportShow:(BOOL)arg1;
- (BOOL)didReportClose;
- (void)setDidReportClose:(BOOL)arg1;
- (void).cxx_destruct;
@end
