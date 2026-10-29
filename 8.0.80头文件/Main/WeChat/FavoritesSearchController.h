@interface FavoritesSearchController : MMObject <IFavoritesRepairSvrDataExt, FavBaseSearchViewControllerDelegate, FavBaseTableDataControllerDelegate, WCActionSheetDelegate, FavRelatedTagDelegate, UISearchBarDelegate, FavForwardLogicDelegate, IFavoritesExt, MMTipsViewControllerDelegate, MMSearchPanGestureControlDelegate, WCSearchDelegate, UIScrollViewDelegate>
{
    FavMultiSelectToolView * m_multiSelectToolView; // +0x8
    MMUIButton * m_multiSelectCancelBtn; // +0x10
    MMUILabel * m_multiSelectTitle; // +0x18
    UIView * m_multiSelectTopCoverView; // +0x20
    UIView * m_loadingView; // +0x28
    UILabel * m_loadingLabel; // +0x30
    FavClickStreamData * m_clickData; // +0x38
    FavBaseTableDataController * m_dataController; // +0x40
    NSString * m_tagText; // +0x48
    NSMutableArray * m_internalSearchTags; // +0x50
    BOOL m_bSearching; // +0x58
    BOOL m_bInSearchSession; // +0x59
    UIView * m_filterContainView; // +0x60
    MMScrollView * m_scrollView; // +0x68
    FavBarButton * m_favBarBtn; // +0x70
    WCSearcher * m_searcher; // +0x78
    UITextField * m_searchField; // +0x80
    UIView * m_hostView; // +0x88
    MMSearchPanGestureController * m_panCancelGesture; // +0x90
    int m_deleteType; // +0x98
    MMUILabel * m_tipsLabel; // +0xa0
    NSString * m_searchTaskKey; // +0xa8
    unsigned int _entranceScene; // +0xb0
    id <FavSearchControllerDelegate> _delegate; // +0xb8
    NSString * _searchText; // +0xc0
    NSArray * _searchTags; // +0xc8
    unsigned long long _currentSearchType; // +0xd0
}
- (BOOL)isSearchActive;
- (id)initWithViewController:(id)arg1 SuperView:(id)arg2;
- (void)set_delegate:(id)arg1;
- (id)dataController;
- (id)searcher;
- (void)initMultiSelectToolView;
- (void)initTagFilterView;
- (id)getCapacityString;
- (void)goToCapacityViewController;
- (void)dealloc;
- (void)relayoutSubviews;
- (void)UISplitViewWillChangeSplitMode;
- (void)onViewBePoped;
- (void)searchControllerWillAppear;
- (void)hideVisibleCellMenu;
- (void)searchControllerWillDisappear;
- (double)getContentViewY;
- (BOOL)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)updateSearchFieldText;
- (void)initTipsView;
- (id)getTextFromType:(long long)arg1;
- (void)resetTypingAttributes;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)cancelSearchByTap;
- (void)cancelSearch;
- (void)selectTag:(id)arg1;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)doSearch;
- (void)hideKeyboard;
- (void)tryHideSearchInternalBlackView;
- (void)onShowEmptyView;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (id)getCurrentViewController;
- (unsigned int)entranceScene;
- (void)onLoadMore;
- (void)canNotSelecteDueToExceedCount;
- (BOOL)isOnSearch;
- (void)forwardDataAndItems:(id)arg1;
- (void)onForwardData;
- (void)onDeleteData;
- (void)deleteData:(id)arg1;
- (void)onMultiSelectEdit;
- (void)onMultiSelectDone;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (BOOL)updateTagSearchResult;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)preparePanGesture;
- (void)resetPanGesture;
- (void)onTriggerToMoveRight;
- (void)onTriggerToCancelMove;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)searchTags;
- (void)setSearchTags:(id)arg1;
- (unsigned long long)currentSearchType;
- (void)setCurrentSearchType:(unsigned long long)arg1;
- (void)setEntranceScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
