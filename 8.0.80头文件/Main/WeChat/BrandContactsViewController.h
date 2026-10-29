@interface BrandContactsViewController : MMUIViewController <WCSearchDelegate, WCDataSearchDelegate, WebSearchLocalPageCellDelegate, FTSVerticalSearchSugCellDelegate, FTSVerticalSearchHistoryCellDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate, IContactMgrExt, WCActionSheetDelegate, IWCDeviceBrandMgrExt, MMTableViewIndexViewDelegate>
{
    MMTableView * _tableView; // +0x70
    UILabel * m_countLabel; // +0x78
    BrandServiceHeadImageProvider * _headImageCache; // +0x80
    ContactsDataLogic * _contactsDataLogic; // +0x88
    NSMutableArray * _sectionKeyArray; // +0x90
    NSMutableDictionary * _allContactsDic; // +0x98
    unsigned long long _contactCount; // +0xa0
    WCDataSearcher * _searcher; // +0xa8
    NSMutableDictionary * _oldSubscribeStatusDict; // +0xb0
    BOOL _isSearching; // +0xb8
    BOOL _willReportSearchBarExposed; // +0xb9
    BOOL _useVerticalSearchNewStyle; // +0xba
    unsigned int _searchScene; // +0xbc
    MMLoadingView * _loadingView; // +0xc0
    NSString * _pardusSessionId; // +0xc8
    FTSWebSearchLocalPageCell * _weakFTSWebSearchLocalPageCell; // +0xd0
    NSString * _queryText; // +0xd8
    NSString * _lastQueryText; // +0xe0
    NSString * _lastSearchBarExposedText; // +0xe8
    long long _i64LocalSearchId; // +0xf0
    CContact * _preSelectedContact; // +0xf8
    WSNativeVerticalHistoryData * _historyData; // +0x100
    CGRect _currentKeyboardRect; // +0x108
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)isSeachActive;
- (void)reloadData;
- (unsigned long long)getContactsDataScene;
- (unsigned int)getFTSSearchType;
- (unsigned long long)getAsyncSearchOption;
- (id)getHistoryData;
- (void)initData;
- (BOOL)isContactNeedExtraFiltered:(id)arg1;
- (void)sort;
- (void)initView;
- (id)vcTitle;
- (id)bottomCountString;
- (unsigned int)searchbarScene;
- (unsigned long long)businessType;
- (void)initNavbar;
- (void)initTableView;
- (void)initLoadingView;
- (void)viewDidLayoutSubviews;
- (void)initSearchBar;
- (void)initCountLabel:(id)arg1;
- (void)updateCount;
- (void)makeCell:(id)arg1 section:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)makeCell:(id)arg1 ForSearchContact:(id)arg2;
- (void)onShowSearchBrandView:(id)arg1;
- (void)onShowAuthList;
- (void)onNavigationButtonMoreClicked;
- (BOOL)shouldInteractivePop;
- (BOOL)isVerticalSearchNewStyle;
- (BOOL)shouldShowVerticalSearchHistory;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)addLineView:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openTargetForContact:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)getSearchEmptyTipsLabelText;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)wcSearchViewTableDidScroll:(id)arg1;
- (BOOL)hasNoSearchResult;
- (void)delayFinishSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)onWCSearchControllerDidAppear;
- (void)onWCSearchControllerDidDisappear;
- (void)delayPardusSearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delayPardusSearchImp:(id)arg1;
- (void)triggerWebSearch:(id)arg1 withDocId:(id)arg2;
- (id)pardusSearchRequestId;
- (id)pardusSearchId;
- (id)queryText;
- (id)localPageResult;
- (id)webSearchSuffix;
- (id)pardusSearchGuideText;
- (void)report20433WithType:(int)arg1 sugResult:(id)arg2 sugpos:(long long)arg3 isS1SItem:(BOOL)arg4;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)tryLogFTSWebSearchLocalPageCellShow;
- (BOOL)shouldShowTabbarAfterSearchBarBecomeUnActive;
- (BOOL)hidesBottomBarWhenPushed;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (id)contactAtIndex:(id)arg1;
- (id)contactWithUserName:(id)arg1;
- (void)cancelFoucsAtIndex:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelFocusWithContact:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (id)getContactResultKey;
- (id)searchResultArrayFromSectionResults:(id)arg1;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)onClickVerticalSearchSugItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onExposeSVerticalSearchSugItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onClickSearchHistoryItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onDeleteSearchHistoryItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onClearSearchHistoryItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onExposeSearchHistoryItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onClickSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onExposeSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2;
- (void)onPardusSearchResultReturn:(id)arg1 request:(id)arg2;
- (void)onPardusSearchResultFail:(id)arg1 request:(id)arg2;
- (void)registerYReportSdk;
- (void)tableViewWillDisplayRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (void)tableViewDidSelectRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)pardusSessionId;
- (void)setPardusSessionId:(id)arg1;
- (id)weakFTSWebSearchLocalPageCell;
- (void)setWeakFTSWebSearchLocalPageCell:(id)arg1;
- (CGRect)currentKeyboardRect;
- (void)setCurrentKeyboardRect:(CGRect)arg1;
- (void)setQueryText:(id)arg1;
- (id)lastQueryText;
- (void)setLastQueryText:(id)arg1;
- (id)lastSearchBarExposedText;
- (void)setLastSearchBarExposedText:(id)arg1;
- (BOOL)willReportSearchBarExposed;
- (void)setWillReportSearchBarExposed:(BOOL)arg1;
- (long long)i64LocalSearchId;
- (id)preSelectedContact;
- (void)setPreSelectedContact:(id)arg1;
- (id)historyData;
- (void)setHistoryData:(id)arg1;
- (BOOL)useVerticalSearchNewStyle;
- (void)setUseVerticalSearchNewStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
