@interface MMFinderLiveProductsSearchView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate, MMFinderLiveShopShelfPage>
{
    BOOL _isSearching; // +0x8
    MMFinderLiveProductsTableView * _tableView; // +0x10
    MMFinderLiveTaskId * _taskID; // +0x18
    id <MMFinderLiveProductsSearchViewDelegate> _delegate; // +0x20
    MMUIButton * _backButton; // +0x28
    UILabel * _hintWordingLabel; // +0x30
    MMUITextField * _textField; // +0x38
    UIButton * _searchButton; // +0x40
    WCFinderAnimationLoadingView * _loadingView; // +0x48
    NSString * _keyword; // +0x50
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x58
    NSDate * _appearDate; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 taskID:(id)arg2 delegate:(id)arg3;
- (void)initSubviews;
- (void)onBackButtonClicked;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onSearchButtonClicked;
- (void)searchIfNeeded;
- (void)handleSearchResults:(id)arg1 keyword:(id)arg2;
- (void)reportSearchResultIfNeeded:(id)arg1 keyword:(id)arg2;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)focusOnTextField;
- (void)onTap;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)pageWillAppear;
- (void)pageDidDisappear;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)hintWordingLabel;
- (void)setHintWordingLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)appearDate;
- (void)setAppearDate:(id)arg1;
- (void).cxx_destruct;
@end

