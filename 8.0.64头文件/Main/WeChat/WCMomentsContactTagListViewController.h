@interface WCMomentsContactTagListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ContactTagNewDetailViewControllerDelegate, WCMomentsContactTagEditViewDelegate, WCMomentsContactTagSearchViewControllerDelegate>
{
    BOOL _canEditTagLabel; // +0x70
    id <WCMomentsContactTagListViewControllerDelegate> _delegate; // +0x78
    NSString * _viewControllerTitle; // +0x80
    NSString * _rightBarTitle; // +0x88
    NSMutableOrderedSet * _selectedTagIdSet; // +0x90
    long long _privacy; // +0x98
    long long _enterScene; // +0xa0
    unsigned long long _sourceScene; // +0xa8
    MMPageSheetAdapter * _pageSheetAdapter; // +0xb0
    MMTableView * _tableView; // +0xb8
    NSMutableDictionary * _tagDataCache; // +0xc0
    NSMutableArray * _arrAllTagID; // +0xc8
    UILabel * _noTagTips; // +0xd0
    WCSearchBar * _searchBar; // +0xd8
    WCMomentsContactTagEditView * _tagEditView; // +0xe0
    NSMutableDictionary * _searchResultsDataCache; // +0xe8
    NSMutableSet * _searchSelectedTagIDSet; // +0xf0
}
- (id)init;
- (void)initTableView;
- (void)updateTopBar;
- (void)switchTopBarIfNeeded;
- (void)initNoTagTips;
- (void)updateViewDisplayStateWithTagData:(id)arg1;
- (void)updateNoTagTipsFrame;
- (double)getContentViewY;
- (id)searchSelectedTagIDSet;
- (id)searchResultsDataCache;
- (id)tagEditView;
- (id)searchBar;
- (id)createSearchVC;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getLeftBarButtonItem;
- (id)getRightBarButtonItem;
- (id)rightBarButtonItemWithSelectTagCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)rightBarButtonItemWithTitle:(id)arg1;
- (void)updateRightBarButtonItemIfNeeded;
- (void)showSearchVC;
- (void)showContactTagDetailViewWithContactTagData:(id)arg1;
- (id)selectedTagIdSet;
- (id)tagDataCache;
- (BOOL)isSelected:(id)arg1;
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
- (void)reloadContactTagListView;
- (void)onTagDetailDismissedWithAddContactLabel;
- (void)searchViewController:(id)arg1 didSelectTagDataSet:(id)arg2 multiSelectedFlag:(BOOL)arg3;
- (id)searchViewController:(id)arg1 searchWithQuery:(id)arg2;
- (BOOL)isTagName:(id)arg1 containsQuery:(id)arg2;
- (void)onSearchViewControllerDidCancelItemClick;
- (void)contactTagEditView:(id)arg1 deleteTagData:(id)arg2;
- (void)contactTagEditViewDidClickSearch:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (id)rightBarTitle;
- (void)setRightBarTitle:(id)arg1;
- (void)setSelectedTagIdSet:(id)arg1;
- (BOOL)canEditTagLabel;
- (void)setCanEditTagLabel:(BOOL)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
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
- (void).cxx_destruct;
@end
