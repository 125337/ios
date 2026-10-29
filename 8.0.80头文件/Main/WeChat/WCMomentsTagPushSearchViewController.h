@interface WCMomentsTagPushSearchViewController : MMUIViewController <WCSearchBarDelegate, UIGestureRecognizerDelegate>
{
    BOOL _useNegativeStyle; // +0x70
    BOOL _isMultiSelectEnabled; // +0x71
    BOOL _hasOriginalDisabledTags; // +0x72
    WCMomentsCombinedTagListViewController * _tagVC; // +0x78
    UIView * _topContainer; // +0x80
    WCSearchBar * _searchBar; // +0x88
    UIButton * _cancelButton; // +0x90
    MMTableView * _tableView; // +0x98
    UIView * _bottomBar; // +0xa0
    MMUIButton * _multiSelectButton; // +0xa8
    MMUIButton * _cancelMultiSelectButton; // +0xb0
    UIButton * _confirmButton; // +0xb8
    NSMutableDictionary * _incrementalSelectedTags; // +0xc0
    id /* block */ _originalSelectedTagsDidChangeBlock; // +0xc8
    NSArray * _originalDisabledTags; // +0xd0
    double _keyboardHeight; // +0xd8
}
- (id)initWithTagVC:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (double)getTopInset;
- (void)buildTopContainer;
- (void)buildTableView;
- (void)buildBottomBar;
- (void)relayoutContainers;
- (void)onKeyboardChangeFrame:(id)arg1;
- (void)onCancelTapped;
- (void)onConfirmTapped;
- (void)onMultiSelectTapped;
- (void)onCancelMultiSelectTapped;
- (void)onSelectionChanged:(id)arg1;
- (void)rollbackIncrementalSelection;
- (void)refreshConfirmButton;
- (id)tagVCInlineSearchResults;
- (void)onSearchTextChanged:(id)arg1;
- (void)mmInputBoxClear;
- (void)resetToSingleSelectState;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)onSearchReturn:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTapToDismissKeyboard:(id)arg1;
- (id)tagVC;
- (void)setTagVC:(id)arg1;
- (id)topContainer;
- (void)setTopContainer:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)multiSelectButton;
- (void)setMultiSelectButton:(id)arg1;
- (id)cancelMultiSelectButton;
- (void)setCancelMultiSelectButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (BOOL)useNegativeStyle;
- (void)setUseNegativeStyle:(BOOL)arg1;
- (BOOL)isMultiSelectEnabled;
- (void)setIsMultiSelectEnabled:(BOOL)arg1;
- (id)incrementalSelectedTags;
- (void)setIncrementalSelectedTags:(id)arg1;
- (id /* block */)originalSelectedTagsDidChangeBlock;
- (void)setOriginalSelectedTagsDidChangeBlock:(id /* block */)arg1;
- (id)originalDisabledTags;
- (void)setOriginalDisabledTags:(id)arg1;
- (BOOL)hasOriginalDisabledTags;
- (void)setHasOriginalDisabledTags:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
