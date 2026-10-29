@interface FavBaseSearchViewController : MMUIViewController <FavTagViewDelegate, FavSearchControllerDelegate, IFavoritesExt, FavForwardLogicDelegate, FavBaseTableDataControllerDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate>
{
    BOOL _bReceiveSearchResult; // +0x68
    int _deleteType; // +0x6c
    id <FavBaseSearchViewControllerDelegate> _delegate; // +0x70
    NSString * _searchTitle; // +0x78
    long long _searchType; // +0x80
    MMTableView * _tableView; // +0x88
    UIView * _headerView; // +0x90
    FavBaseTableDataController * _dataController; // +0x98
    FavoritesSearchController * _searchController; // +0xa0
    FavMultiSelectToolView * _multiSelectToolView; // +0xa8
    UIView * _loadingView; // +0xb0
    UILabel * _loadingLabel; // +0xb8
    NSString * _searchTaskKey; // +0xc0
    FavClickStreamData * _clickData; // +0xc8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)hideVisibleCellMenu;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)clearSearch;
- (void)initTableView;
- (void)initNavigationBar;
- (void)initHeaderView;
- (void)initLoadingView;
- (void)initMultiSelectToolView;
- (void)initData;
- (int)getPageType;
- (void)onReturn;
- (void)forwardDataAndItems:(id)arg1;
- (void)onForwardData;
- (void)addTagForItems;
- (void)onDeleteData;
- (void)deleteData:(id)arg1;
- (void)onMultiSelect;
- (void)setTableViewBottomInset:(double)arg1;
- (void)onMultiSelectDone;
- (void)hideSelectToolView;
- (void)showSearchBar;
- (void)hideSearchBar;
- (void)onShowEmptyView;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (unsigned int)entranceScene;
- (BOOL)itemEditable;
- (id)getCurrentViewController;
- (void)resetHeaderView:(id)arg1;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onWillBeginSearch;
- (void)onDidEndSearch;
- (void)onLoadMore;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)processSearchResultDone;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchTitle;
- (void)setSearchTitle:(id)arg1;
- (long long)searchType;
- (void)setSearchType:(long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)multiSelectToolView;
- (void)setMultiSelectToolView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)searchTaskKey;
- (void)setSearchTaskKey:(id)arg1;
- (int)deleteType;
- (void)setDeleteType:(int)arg1;
- (BOOL)bReceiveSearchResult;
- (void)setBReceiveSearchResult:(BOOL)arg1;
- (id)clickData;
- (void)setClickData:(id)arg1;
- (void).cxx_destruct;
@end

