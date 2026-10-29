@interface WCFinderMemberShipSearchVC : WCSearchViewController <WCFinderMemberShipSearchViewModelDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    id /* block */ _closeCallback; // +0x70
    WCFinderMemberShipSearchViewModel * _viewModel; // +0x78
    UITableView * _resTableView; // +0x80
    unsigned long long _searchKey; // +0x88
    NSString * _finderUserName; // +0x90
    UIView * _emptyView; // +0x98
    UILabel * _emptyLabel; // +0xa0
    WCFinderAnimationLoadingView * _emptyLoadingView; // +0xa8
    WCFinderFeedContentTextViewConfig * _textViewConfig; // +0xb0
}
+ (void)displayOnViewController:(id)arg1 finderUserName:(id)arg2 closeCallback:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (id)createResTableView;
- (id)emptyView;
- (void)_dismiss:(unsigned long long)arg1;
- (void)onNavigationCancelItemClick;
- (double)searchBarHeight;
- (id)customSearchBar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTextFieldChanged:(id)arg1;
- (void)_delaySearch;
- (void)_doSerach:(long long)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onDataChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)textViewConfig;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)resTableView;
- (void)setResTableView:(id)arg1;
- (unsigned long long)searchKey;
- (void)setSearchKey:(unsigned long long)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (void)setEmptyView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)emptyLoadingView;
- (void)setEmptyLoadingView:(id)arg1;
- (void)setTextViewConfig:(id)arg1;
- (void).cxx_destruct;
@end
