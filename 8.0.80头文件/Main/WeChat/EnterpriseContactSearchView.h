@interface EnterpriseContactSearchView : MMUIView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    NSString * _brandUserName; // +0x8
    MMUISearchBar * _superSearchBar; // +0x10
    UIImageView * _searchBarWrap; // +0x18
    MMUISearchBar * _searchBar; // +0x20
    UIButton * _backButton; // +0x28
    MMTableView * _tableView; // +0x30
    WCTimeLineFooterView * _footerView; // +0x38
    UIImageView * _bottomViewShadow; // +0x40
    AttributeLabel * _tipLabel; // +0x48
    double _moveStartOffset; // +0x50
    double _moveCurOffset; // +0x58
    double _moveContentOffsetY; // +0x60
    NSString * _searchText; // +0x68
    NSString * _searchedText; // +0x70
    BOOL _isLoading; // +0x78
    BOOL _isError; // +0x79
    BOOL _hasMore; // +0x7a
    BOOL _hasMoving; // +0x7b
    double _searchTextFieldNormalWidth; // +0x80
    NSMutableArray * _aryResult; // +0x88
    unsigned int _scene; // +0x90
    id <EnterpriseContactSearchViewDelegate> _delegate; // +0x98
    UIView * _bottomView; // +0xa0
    NSString * _emptyTipSuffix; // +0xa8
}
- (id)initWithSuperSearchBar:(id)arg1 scene:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)initView;
- (void)initData;
- (void)show;
- (void)pop:(BOOL)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onPopCompleted;
- (void)handleRotateEvent;
- (void)enableSearchBarButton:(id)arg1;
- (BOOL)shouldProcessRemoteSearchResp:(id)arg1 range:(unsigned int)arg2;
- (void)onRemoteSearchMoreCompleted:(id)arg1 range:(unsigned int)arg2 result:(id)arg3;
- (void)onRemoteSearchError;
- (void)cancelMoveSearchBar;
- (void)updateSearchBarPosition;
- (void)handlePanGesture:(id)arg1;
- (void)handleTextChangedDelay:(id)arg1;
- (void)handleTextChanged:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)reloadData;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)makeContactCell:(id)arg1 tableView:(id)arg2;
- (id)makeTitleCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)getMMSearchBar;
- (id)getViewController;
- (id)getDataController;
- (id)getSearchTextField;
- (unsigned int)getTipType;
- (double)getSearchTextFieldWidth;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)emptyTipSuffix;
- (void)setEmptyTipSuffix:(id)arg1;
- (void).cxx_destruct;
@end
