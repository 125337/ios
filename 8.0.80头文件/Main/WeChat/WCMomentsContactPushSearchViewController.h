@interface WCMomentsContactPushSearchViewController : MMUIViewController <WCSearchBarDelegate, UIGestureRecognizerDelegate>
{
    BOOL _useNegativeStyle; // +0x70
    BOOL _isMultiSelectEnabled; // +0x71
    BOOL _hasOriginalExistContacts; // +0x72
    WCMomentsCombinedContactListViewController * _contactVC; // +0x78
    UIView * _topContainer; // +0x80
    WCSearchBar * _searchBar; // +0x88
    UIButton * _cancelButton; // +0x90
    MMTableView * _tableView; // +0x98
    UIView * _bottomBar; // +0xa0
    MMUIButton * _multiSelectButton; // +0xa8
    MMUIButton * _cancelMultiSelectButton; // +0xb0
    UIButton * _confirmButton; // +0xb8
    NSMutableDictionary * _incrementalSelectedContacts; // +0xc0
    id /* block */ _originalSelectedContactsDidChangeBlock; // +0xc8
    NSDictionary * _originalExistContacts; // +0xd0
    double _keyboardHeight; // +0xd8
}
- (id)initWithContactVC:(id)arg1 useNegativeStyle:(BOOL)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
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
- (void)onSearchTextChanged:(id)arg1;
- (void)mmInputBoxClear;
- (void)resetToSingleSelectState;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)onSearchReturn:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTapToDismissKeyboard:(id)arg1;
- (id)contactVC;
- (void)setContactVC:(id)arg1;
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
- (id)incrementalSelectedContacts;
- (void)setIncrementalSelectedContacts:(id)arg1;
- (id /* block */)originalSelectedContactsDidChangeBlock;
- (void)setOriginalSelectedContactsDidChangeBlock:(id /* block */)arg1;
- (id)originalExistContacts;
- (void)setOriginalExistContacts:(id)arg1;
- (BOOL)hasOriginalExistContacts;
- (void)setHasOriginalExistContacts:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
