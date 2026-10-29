@interface ContactsSearchController : WCSearchViewController <ContactsViewTagListCollectionViewDelegate, UITableViewDelegate, UITableViewDataSource, MMPageSheetAdapterDelegate, GeneralContactsSearchPanelSearchingResultProtocol, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    id <ContactsSearchControllerDelegate> m_delegate; // +0x70
    BOOL _isShowAllTags; // +0x78
    BOOL _bShouldFilterSearchResults; // +0x79
    BOOL _bDisplaySectionResults; // +0x7a
    BOOL _bForbidMultiSelectChange; // +0x7b
    BOOL _bForceHiddenBottomBar; // +0x7c
    BOOL _m_bMultiSelect; // +0x7d
    unsigned int _expandBitSet; // +0x80
    WCSTokenPickLogic * _tokenPickLogic; // +0x88
    WCColorProxy * _colorProxy; // +0x90
    unsigned long long _selectedCount; // +0x98
    UIButton * _multiSelectButton; // +0xa0
    unsigned long long _overrideOrientationMask; // +0xa8
    ContactsViewTagListCollectionView * _tagView; // +0xb0
    NSMutableArray * _tagList; // +0xb8
    MMTableView * _tableView; // +0xc0
    UIView * _bottomBar; // +0xc8
    UIButton * _doneButton; // +0xd0
    NSMutableArray * _arrSectionKeys; // +0xd8
    NSMutableDictionary * _dicSectionTitles; // +0xe0
    NSMutableDictionary * _dicSectionResults; // +0xe8
    NSMutableArray * _arrFilteredObject; // +0xf0
}
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (double)getContentViewY;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onNavigationCancelItemClick;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldInteractivePop;
- (void)initData;
- (void)initView;
- (void)initTagView;
- (void)initTableView;
- (void)initBottomBar;
- (id)colorProxy;
- (void)onTextFieldChanged:(id)arg1;
- (void)onSearchTextFieldDidBeginEditing:(id)arg1;
- (void)cancelSearch;
- (void)doSearch;
- (void)SetIsShowAllTags:(BOOL)arg1;
- (void)updateTagView;
- (void)setTokenPickLogic:(id)arg1;
- (BOOL)isSearchMultiKey;
- (void)onSwitchMultiSelect;
- (void)onFinishMultiSelect;
- (void)setSelectedCount:(unsigned long long)arg1;
- (void)updateBottomBar;
- (void)updateBottomDoneButton;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onKeyboardNotification:(id)arg1;
- (long long)numberofRowsInSection:(long long)arg1;
- (id)getObjectFor:(unsigned long long)arg1;
- (id)getObjectForIndexPath:(id)arg1;
- (unsigned int)getObjectRow:(id)arg1;
- (void)setFilteredObjects:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)addFilteredObject:(id)arg1;
- (void)clearFilteredObjects;
- (void)tryFilterSearchResult;
- (id)getFilteredObjects;
- (void)setFilterdSectionKeys:(id)arg1;
- (void)setSectionTitleMaps:(id)arg1;
- (void)setFilterdSectionResults:(id)arg1;
- (void)prepareRefreshing;
- (void)prepareRefreshingAnimated:(BOOL)arg1;
- (BOOL)isMoreCellAtIndexPath:(id)arg1;
- (BOOL)isCollapseAtSection:(long long)arg1;
- (id)getMoreCellDescriptionAtSection:(long long)arg1;
- (id)getMoreCellImageAtSection:(long long)arg1;
- (void)clickMoreCellAtIndexPath:(id)arg1;
- (unsigned long long)getMoreCellStatusAtSection:(long long)arg1;
- (id)getSectionKeyAtSection:(long long)arg1;
- (void)setExpandStatus:(BOOL)arg1 forSection:(long long)arg2;
- (BOOL)isExpandingForSection:(long long)arg1;
- (BOOL)isJumpable:(id)arg1;
- (BOOL)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (id)getSearchResultTable;
- (id)getSearchText;
- (void)setSearchText:(id)arg1;
- (id)m_SearchTextField;
- (BOOL)isM_bMultiSelect;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (id)getViewController;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(BOOL)arg3;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)handleResultTokenPick:(id)arg1;
- (void)onSelectContact:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)isMultiSelectContactSection:(long long)arg1;
- (void)tryDeselectOtherContactForIndexPath:(id)arg1;
- (void)onDeselectContact:(id)arg1 forIndexPath:(id)arg2;
- (void)pickDataSelected:(id)arg1 indexPath:(id)arg2;
- (void)pickDataDeSelected:(id)arg1 indexPath:(id)arg2;
- (void)asyncRecommend;
- (void)refreshPickDataRecommendSection:(long long)arg1 added:(BOOL)arg2 deleted:(BOOL)arg3;
- (void)removeTokenSelectedContact:(id)arg1;
- (void)removePickDataForUsername:(id)arg1;
- (void)tryReorderContactAtSection:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tokenPickLogic;
- (void)setColorProxy:(id)arg1;
- (BOOL)isShowAllTags;
- (BOOL)bShouldFilterSearchResults;
- (void)setBShouldFilterSearchResults:(BOOL)arg1;
- (BOOL)bDisplaySectionResults;
- (void)setBDisplaySectionResults:(BOOL)arg1;
- (BOOL)bForbidMultiSelectChange;
- (void)setBForbidMultiSelectChange:(BOOL)arg1;
- (BOOL)bForceHiddenBottomBar;
- (void)setBForceHiddenBottomBar:(BOOL)arg1;
- (BOOL)m_bMultiSelect;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (unsigned long long)selectedCount;
- (id)multiSelectButton;
- (void)setMultiSelectButton:(id)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)arrSectionKeys;
- (void)setArrSectionKeys:(id)arg1;
- (id)dicSectionTitles;
- (void)setDicSectionTitles:(id)arg1;
- (id)dicSectionResults;
- (void)setDicSectionResults:(id)arg1;
- (unsigned int)expandBitSet;
- (void)setExpandBitSet:(unsigned int)arg1;
- (id)arrFilteredObject;
- (void)setArrFilteredObject:(id)arg1;
- (void).cxx_destruct;
@end
