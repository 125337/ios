@interface MMFinderLiveSensitiveSearchViewController : WCSearchViewController <MMTableViewDelegate, UITextFieldDelegate, MMFinderLiveCommentSensitiveSearchTableDelegate>
{
    BOOL _isSearching; // +0x70
    MMFinderLiveTaskId * _taskId; // +0x78
    id /* block */ _onSensitiveSearchDataItemDeleteCallback; // +0x80
    unsigned long long _overrideOrientationMask; // +0x88
    MMTableView * _tableView; // +0x90
    MMFinderLiveCommentSensitiveSearchTableViewModel * _tableViewModel; // +0x98
    NSMutableArray * _sourceDataItemList; // +0xa0
    NSString * _lastSearchQuery; // +0xa8
}
- (id)initWithSourceDataItems:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (BOOL)isHalfPage;
- (void)loadTableView;
- (void)resignSearchBar;
- (void)searchWithQuery:(id)arg1;
- (void)updateSourceDataItems:(id)arg1;
- (id)sourceDataItemList;
- (id)finderLiveTask;
- (void)searchTableViewDidScroll:(id)arg1;
- (void)onSearchResultSensitiveDataItemDelete:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)reportForSearchTextFieldExp;
- (void)reportForSearchTextFieldClick;
- (void)commonInit;
- (BOOL)shouldOverrideMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didAskSearchControllerShouldBeginWithResult:(BOOL)arg1;
- (void)didAppearFromSearchController;
- (void)toggleLandscapeNavBarHidden:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)onSensitiveSearchDataItemDeleteCallback;
- (void)setOnSensitiveSearchDataItemDeleteCallback:(id /* block */)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewModel;
- (void)setTableViewModel:(id)arg1;
- (void)setSourceDataItemList:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (id)lastSearchQuery;
- (void)setLastSearchQuery:(id)arg1;
- (void).cxx_destruct;
@end
