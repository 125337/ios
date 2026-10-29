@interface WCMomentsContactTagListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ContactTagNewDetailViewControllerDelegate, WCMomentsContactTagEditViewDelegate, WCMomentsContactTagSearchViewControllerDelegate, ContactTagSearchFromContactLogicDelegate, ContactTagListBottomBarDelegate, ContactTagCreateTagHalfScreenViewControllerDelegate, ContactTagListViewControllerDelegate, IContactLabelMgrExt, WCSearchBarDelegate>
{
    ContactTagSearchFromContactLogic * m_contactTagSearchLogic; // +0x70
    WCMomentsContactTagSearchViewController * m_searchVC; // +0x78
    BOOL m_needReload; // +0x80
    BOOL m_forbidSelectNotMemberTag; // +0x81
    BOOL m_stopSoredSelectContactTag; // +0x82
    BOOL _canEditTagLabel; // +0x83
    BOOL _hideSearchBar; // +0x84
    BOOL _enableConfirmAfterModify; // +0x85
    BOOL _embeddedInContainer; // +0x86
    BOOL _hasModifiedSelectedContacts; // +0x87
    BOOL _isInlineSearching; // +0x88
    id <WCMomentsContactTagListViewControllerDelegate> _delegate; // +0x90
    NSString * _viewControllerTitle; // +0x98
    NSString * _rightBarTitle; // +0xa0
    long long _privacy; // +0xa8
    long long _enterScene; // +0xb0
    unsigned long long _sourceScene; // +0xb8
    NSMutableOrderedSet * _selectedTagIdSet; // +0xc0
    NSArray * _requiredTags; // +0xc8
    NSArray * _disabledTags; // +0xd0
    MMPageSheetAdapter * _pageSheetAdapter; // +0xd8
    id /* block */ _selectedTagsDidChangeBlock; // +0xe0
    MMTableView * _tableView; // +0xe8
    NSMutableDictionary * _tagDataCache; // +0xf0
    NSMutableArray * _arrAllTagID; // +0xf8
    UILabel * _noTagTips; // +0x100
    WCSearchBar * _searchBar; // +0x108
    WCMomentsContactTagEditView * _tagEditView; // +0x110
    NSMutableDictionary * _searchResultsDataCache; // +0x118
    NSMutableSet * _searchSelectedTagIDSet; // +0x120
    ContactTagListBottomBar * _bottomBar; // +0x128
    MMTableView * _inlineSearchTableView; // +0x130
    NSArray * _inlineSearchResults; // +0x138
    NSString * _lastInlineSearchQuery; // +0x140
    NSString * _reportSessionId; // +0x148
}
- (void)setupReportData;
- (void)reportClickContactTagCreateButton;
- (void)reportClickFinishContactTagCreateButton:(id)arg1;
- (void)reportClickContactTagManageButton;
- (void)reportClickFinishUpdateContactTagNameButton;
- (void)reportClickFinishDeleteContactTagButton:(unsigned int)arg1;
- (unsigned int)getBusinessTypeWithSourceScene;
- (id)getReportDictionary;
- (id)init;
- (void)dealloc;
- (void)initData;
- (void)initTableView;
- (void)updateTopBar;
- (void)switchTopBarIfNeeded;
- (void)initNoTagTips;
- (void)updateViewDisplayStateWithTagData:(id)arg1;
- (void)updateNoTagTipsFrame;
- (double)getContentViewY;
- (void)initBottomBar;
- (id)searchSelectedTagIDSet;
- (id)searchResultsDataCache;
- (id)tagEditView;
- (id)searchBar;
- (id)createSearchVC;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)createTagCellForTableView:(id)arg1;
- (id)manageTagCellForTableView:(id)arg1;
- (id)getLeftBarButtonItem;
- (id)getRightBarButtonItem;
- (id)rightBarButtonItemWithSelectTagCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)rightBarButtonItemWithTitle:(id)arg1;
- (void)updateRightBarButtonItemIfNeeded;
- (void)showSearchVC;
- (void)showContactTagDetailViewWithContactTagData:(id)arg1;
- (id)selectedTagIdSet;
- (id)tagDataCache;
- (BOOL)filterTag:(id)arg1;
- (BOOL)isTagSelectEnabled:(id)arg1;
- (BOOL)shouldForbidSelectEmptyTag:(id)arg1;
- (BOOL)isTagSelected:(id)arg1;
- (id)tagDataAtIndexPath:(id)arg1;
- (id)tagDataWithTagID:(id)arg1;
- (id)tagDatasWithTagIDs:(id)arg1;
- (void)addSelectedTagDatas:(id)arg1;
- (void)addSelectedTagData:(id)arg1;
- (void)deleteSelectedTagData:(id)arg1;
- (BOOL)canShowTopBar;
- (void)reloadData;
- (void)reloadTableView;
- (void)clearCache;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)onSaveBarButtonPress:(id)arg1;
- (void)makeNewContactTag;
- (void)reloadContactTagListView;
- (void)onTagDetailDismissedWithAddContactLabel;
- (void)searchViewController:(id)arg1 didSelectTagDataSet:(id)arg2 multiSelectedFlag:(BOOL)arg3;
- (id)searchViewController:(id)arg1 searchWithQuery:(id)arg2;
- (BOOL)isTagName:(id)arg1 containsQuery:(id)arg2;
- (void)onSearchViewControllerDidCancelItemClick;
- (void)contactTagEditView:(id)arg1 deleteTagData:(id)arg2;
- (void)contactTagEditViewDidClickSearch:(id)arg1;
- (void)onContactAsynContactTagResultChanged;
- (id)getAllContactUserNameMatchTip;
- (void)onContactTagListBottomBarCreateTag;
- (void)onContactTagListBottomBarEditTags;
- (void)onContactTagListBottomBarMoveTo;
- (void)onContactTagListBottomBarDelete;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (BOOL)handleQuitEditMode:(id)arg1;
- (void)OnMakeSureDelteContactTag:(id)arg1;
- (void)OnMakeSureUpdateContactTagName;
- (void)onUpdateLabelOrder:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)reloadTagList;
- (void)initInlineSearchTableView;
- (void)showInlineSearchResults;
- (void)hideInlineSearchResults;
- (void)performInlineSearchWithQuery:(id)arg1;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)mmInputBoxClear;
- (void)onInlineSearchTextFieldChanged:(id)arg1;
- (long long)inlineSearchTableViewNumberOfRows;
- (id)inlineSearchCellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)inlineSearchDidSelectRowAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (id)rightBarTitle;
- (void)setRightBarTitle:(id)arg1;
- (BOOL)canEditTagLabel;
- (void)setCanEditTagLabel:(BOOL)arg1;
- (BOOL)hideSearchBar;
- (void)setHideSearchBar:(BOOL)arg1;
- (BOOL)enableConfirmAfterModify;
- (void)setEnableConfirmAfterModify:(BOOL)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (void)setSelectedTagIdSet:(id)arg1;
- (id)requiredTags;
- (void)setRequiredTags:(id)arg1;
- (id)disabledTags;
- (void)setDisabledTags:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)embeddedInContainer;
- (void)setEmbeddedInContainer:(BOOL)arg1;
- (id /* block */)selectedTagsDidChangeBlock;
- (void)setSelectedTagsDidChangeBlock:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void)setTagDataCache:(id)arg1;
- (id)arrAllTagID;
- (void)setArrAllTagID:(id)arg1;
- (id)noTagTips;
- (void)setNoTagTips:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setTagEditView:(id)arg1;
- (void)setSearchResultsDataCache:(id)arg1;
- (void)setSearchSelectedTagIDSet:(id)arg1;
- (BOOL)hasModifiedSelectedContacts;
- (void)setHasModifiedSelectedContacts:(BOOL)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)inlineSearchTableView;
- (void)setInlineSearchTableView:(id)arg1;
- (id)inlineSearchResults;
- (void)setInlineSearchResults:(id)arg1;
- (BOOL)isInlineSearching;
- (void)setIsInlineSearching:(BOOL)arg1;
- (id)lastInlineSearchQuery;
- (void)setLastInlineSearchQuery:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
