@interface SelectOpenIMContactsViewController : MMUIViewController <OpenIMContactSelectViewDelegate, ContactsSearchControllerDelegate>
{
    OpenIMContactSelectView * m_selectView; // +0x68
    BOOL _m_bMultiSelect; // +0x70
    BOOL _isInPageSheetMode; // +0x71
    NSDictionary * m_dicExistContact; // +0x78
    NSDictionary * m_dicIgnoreContact; // +0x80
    NSMutableDictionary * m_dicMultiSelect; // +0x88
    id <SelectOpenIMContactsViewControllerDelegate> m_delegate; // +0x90
    MMPageSheetAdapter * _pageSheetAdapter; // +0x98
    NSString * _rightBarTitle; // +0xa0
    NSNumber * _leftBarButtonStyle; // +0xa8
    WCSearchBar * _searchBar; // +0xb0
    ContactsSearchController * _searchController; // +0xb8
    NSMutableArray * _searchControllerSelectedContacts; // +0xc0
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (id)init;
- (void)initView;
- (void)initTitleArea;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (double)getContentViewY;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)selectOpenIMContactReturn;
- (void)selectOpenIMContactCancel;
- (unsigned long long)getTotalSelectCount;
- (BOOL)isIgnore:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (id)getRightBarButtonItem;
- (id)rightBarButtonItemWithSelectTagCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)rightBarButtonItemWithTitle:(id)arg1;
- (void)updateRightBarButtonItemIfNeeded;
- (BOOL)onFilterOpenIMContactCandidate:(id)arg1;
- (BOOL)onShouldSelectOpenIMContact:(id)arg1;
- (void)onSelectOpenIMContact:(id)arg1;
- (id)getSafeSearchViewController;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)onContactSelectSearchSections:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)didSearchControllerSelectContact:(id)arg1 indexPath:(id)arg2;
- (void)onContactSearchControllerDidFinishMultiSelect;
- (void)onContactSearchControllerDidSwitchMultiSelectMode:(BOOL)arg1;
- (void)onContactSearchControllerDidCancelItemClick;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicIgnoreContact;
- (void)setM_dicIgnoreContact:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bMultiSelect;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (id)rightBarTitle;
- (void)setRightBarTitle:(id)arg1;
- (id)leftBarButtonStyle;
- (void)setLeftBarButtonStyle:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)searchControllerSelectedContacts;
- (void)setSearchControllerSelectedContacts:(id)arg1;
- (void).cxx_destruct;
@end

