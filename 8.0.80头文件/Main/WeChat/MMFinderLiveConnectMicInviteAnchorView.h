@interface MMFinderLiveConnectMicInviteAnchorView : MMPageSheetBaseView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveConnectMicRandomHintTableFooterViewDelegate>
{
    BOOL _footerViewHasBeenExposed; // +0x8
    id <MMFinderLiveConnectMicInviteAnchorViewDelegate> _actionDelegate; // +0x10
    UIView * _contentView; // +0x18
    UIView * _searchBarContainer; // +0x20
    MMUISearchBar * _searchBar; // +0x28
    UILabel * _tipsLabel; // +0x30
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x38
    MMTableView * _tableView; // +0x40
    MMFinderLiveConnectMicRandomHintTableFooterView * _footerView; // +0x48
    MMFinderLiveTaskId * _taskId; // +0x50
    NSArray * _connectMicAuchorUserList; // +0x58
    NSDictionary * _connectMicAuchorUserDict; // +0x60
    NSMutableArray * _candicateAnchorUserInfoList; // +0x68
    NSString * _curSearchText; // +0x70
    NSMutableArray * _displaySearchUserInfoList; // +0x78
    NSMutableDictionary * _candicateReportDic; // +0x80
    NSMutableDictionary * _searchReportDic; // +0x88
    MMFinderLiveConnectMicAnchorContainerReporterExtInfo * _anchorContainerReporterExtInfo; // +0x90
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)setupPageSheetConfig;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)layoutSearchBar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutTableView;
- (void)checkFooterViewExposedAndReport;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)startLoading;
- (void)stopLoading;
- (void)updateWithConnectMicAuchorUserList:(id)arg1 candicateAnchorList:(id)arg2;
- (void)updateAnchorContainerReporterExtInfo:(id)arg1;
- (void)tryActiveSearch;
- (void)onCancelSearch;
- (void)doSearchWithText:(id)arg1;
- (void)onBeginSearchFromService;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultArray:(id)arg2;
- (void)setConnectMicAuchorUserList:(id)arg1;
- (id)connectMicAuchorUserDict;
- (BOOL)isOnSearching;
- (id)candicateReportDic;
- (id)searchReportDic;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onRandomMicHintTableFooterViewActionInvoked:(id)arg1;
- (void)updateDicWithIndexPath:(id)arg1;
- (void)onReporterBegin;
- (void)onReporterEnd;
- (void)reportWithType:(unsigned long long)arg1 reportParams:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)searchBarContainer;
- (void)setSearchBarContainer:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)connectMicAuchorUserList;
- (void)setConnectMicAuchorUserDict:(id)arg1;
- (id)candicateAnchorUserInfoList;
- (void)setCandicateAnchorUserInfoList:(id)arg1;
- (id)curSearchText;
- (void)setCurSearchText:(id)arg1;
- (id)displaySearchUserInfoList;
- (void)setDisplaySearchUserInfoList:(id)arg1;
- (BOOL)footerViewHasBeenExposed;
- (void)setFooterViewHasBeenExposed:(BOOL)arg1;
- (void)setCandicateReportDic:(id)arg1;
- (void)setSearchReportDic:(id)arg1;
- (id)anchorContainerReporterExtInfo;
- (void)setAnchorContainerReporterExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
