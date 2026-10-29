@interface FBFilesViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFileBrowseCellDelegate, WCSearchDelegate, WCDataSearchDelegate, WCFileBrowseServiceExt, FBFilesSearchViewControllerDelegate>
{
    BOOL _bLoadingChatLogFile; // +0x68
    BOOL _bLoadingFavFile; // +0x69
    BOOL _bInSearch; // +0x6a
    unsigned int _maxFileCount; // +0x6c
    id <FBFilesViewControllerDelegate> _delegate; // +0x70
    UIColor * _customNavigationBarBgColor; // +0x78
    MMTableView * _mainTableView; // +0x80
    UIImageView * _logoImageView; // +0x88
    NSMutableArray * _selectedFileBrowseArray; // +0x90
    MMUILabel * _emptyTipLabel; // +0x98
    WCDataSearcher * _searcher; // +0xa0
    FBFilesSearchViewController * _searchViewController; // +0xa8
    NSArray * _itemTitleArr; // +0xb0
    unsigned long long _currentDataType; // +0xb8
    unsigned long long _type; // +0xc0
    NSString * _chatName; // +0xc8
}
- (id)init;
- (id)initWithChatName:(id)arg1;
- (id)initWithVCType:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)addLogoImageOnTableView;
- (void)initSearchBar;
- (void)initEmptyView;
- (void)updateSelectFileType:(unsigned long long)arg1;
- (void)unselectFile:(id)arg1;
- (void)updateSelect;
- (void)updateLoadingState;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)whetherFileBrowseInfoSelect:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (void)onFileBrowseCellTouchIndexPath:(id)arg1;
- (void)onFileBrowseDataLoading:(unsigned long long)arg1;
- (void)onFileBrowseDataLoadEnd:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)maxFileCount;
- (void)setMaxFileCount:(unsigned int)arg1;
- (id)customNavigationBarBgColor;
- (void)setCustomNavigationBarBgColor:(id)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg1;
- (id)selectedFileBrowseArray;
- (void)setSelectedFileBrowseArray:(id)arg1;
- (id)emptyTipLabel;
- (void)setEmptyTipLabel:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)searchViewController;
- (void)setSearchViewController:(id)arg1;
- (id)itemTitleArr;
- (void)setItemTitleArr:(id)arg1;
- (unsigned long long)currentDataType;
- (void)setCurrentDataType:(unsigned long long)arg1;
- (BOOL)bLoadingChatLogFile;
- (void)setBLoadingChatLogFile:(BOOL)arg1;
- (BOOL)bLoadingFavFile;
- (void)setBLoadingFavFile:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (BOOL)bInSearch;
- (void)setBInSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end

