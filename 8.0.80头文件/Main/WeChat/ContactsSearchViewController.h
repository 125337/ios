@interface ContactsSearchViewController : WCSearchViewController <UITextFieldDelegate, WCSearchBarDelegate, ContactsSearchSessionDelegate, ContactsSearchFilterTabBarDelegate, ContactsSearchResultListViewDelegate, ContactsSearchFilterDropDownViewDelegate, MMDatePickerHalfSheetViewDelegate>
{
    BOOL _didBuildFilterOptions; // +0x70
    ContactsSearchSession * _session; // +0x78
    ContactsSearchFilterTabBar * _tabBar; // +0x80
    ContactsSearchResultListView * _listView; // +0x88
    ContactsSearchFilterDropDownView * _filterDropDown; // +0x90
    NSString * _currentQuery; // +0x98
    double _keyboardHeight; // +0xa0
    NSArray * _sourceNames; // +0xa8
    NSArray * _sourceSceneSets; // +0xb0
    NSArray * _tagList; // +0xb8
    MMDatePickerHalfSheetView * _timePicker; // +0xc0
    long long _currentPickerSection; // +0xc8
    ContactsSearchReporter * _reporter; // +0xd0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2 forceFullScreen:(BOOL)arg3 animated:(BOOL)arg4;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setupSearchBar;
- (void)viewDidLayoutSubviews;
- (CGRect)filterDropDownFrame;
- (CGRect)filterDropDownFrameForRestrictedSection:(long long)arg1;
- (void)handleSearchInputText:(id)arg1 markedTextRange:(id)arg2;
- (void)onSearchTextFieldEditingChanged:(id)arg1;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)mmInputBoxClear;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)performSearch;
- (void)contactsFilterTabBar:(id)arg1 didTapCategorySection:(long long)arg2;
- (void)contactsFilterTabBar:(id)arg1 didTapTimeSection:(long long)arg2;
- (void)contactsFilterTabBarDidTapAll:(id)arg1;
- (void)buildFilterOptionsIfNeeded;
- (id)mutableCurrentFilterState;
- (void)applyFilterStateWithReport:(id)arg1;
- (void)collapseFilterDropDownIfNeeded;
- (void)presentFilterDropDownRestrictedToSection:(long long)arg1;
- (void)presentTimePickerForSection:(long long)arg1;
- (void)resetTimeFilterForSection:(long long)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)updateFilterDropDownMaxHeightAnimated:(BOOL)arg1;
- (void)contactsFilterDropDown:(id)arg1 didUpdateState:(id)arg2;
- (void)contactsFilterDropDownDidRequestCollapse:(id)arg1;
- (void)onDatePickerConfirmWithYear:(long long)arg1 month:(long long)arg2;
- (void)onDatePickerConfirmWithStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
- (void)onDatePickerCancel;
- (void)onDatePickerNoTimeLimit;
- (void)contactsSearchSession:(id)arg1 didUpdateSnapshot:(id)arg2;
- (void)contactsSearchResultListView:(id)arg1 didSelectContact:(id)arg2 atGlobalIndex:(long long)arg3;
- (void)showContactInfoView:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)tabBar;
- (void)setTabBar:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)filterDropDown;
- (void)setFilterDropDown:(id)arg1;
- (id)currentQuery;
- (void)setCurrentQuery:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)sourceNames;
- (void)setSourceNames:(id)arg1;
- (id)sourceSceneSets;
- (void)setSourceSceneSets:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (BOOL)didBuildFilterOptions;
- (void)setDidBuildFilterOptions:(BOOL)arg1;
- (id)timePicker;
- (void)setTimePicker:(id)arg1;
- (long long)currentPickerSection;
- (void)setCurrentPickerSection:(long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
