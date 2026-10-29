@interface FavBaseListViewController : MMUIViewController <FavSearchBarDelegate, FavSearchExtendFilterPanelDelegate, FavSearchTopFilterViewDelegate, FavRelatedTagDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderBusinessCustomListDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewLayoutDelegate, FavBaseTableDataControllerDelegate, IFavoritesExt, MsgFastBrowseViewDelegate, MMFavCellComponentDelegate, FavAddressDataControllerDelegate, FavFullScreenImageViewControllerDelegate>
{
    unsigned int m_curMinItemUpdateTime; // +0x68
    NSString * m_searchTaskKey; // +0x70
    unsigned long long m_cellStyle; // +0x78
    MMTableView * m_tableView; // +0x80
    UIView * m_emptyView; // +0x88
    UIView * m_loadingView; // +0x90
    MMUILabel * m_emptySearchLabel; // +0x98
    MsgFastBrowseView * m_msgFastBrowseView; // +0xa0
    NSMutableArray * m_arrImgInfo; // +0xa8
    WCFinderFeedFlowView * m_feedFlowView; // +0xb0
    NSMutableArray * m_arrFinderItems; // +0xb8
    unsigned long long m_feedFlowViewState; // +0xc0
    WCFinderBusinessCustomListDetailViewController * m_feedDetailViewController; // +0xc8
    FavBaseTableDataController * m_dataController; // +0xd0
    FavAddressDataController * m_addressDataController; // +0xd8
    BOOL m_bReceiveSearchResult; // +0xe0
    NSMutableArray * m_toCheckTypes; // +0xe8
    NSMutableArray * m_checkedTypes; // +0xf0
    NSDictionary * m_filterTypeToName; // +0xf8
    NSMutableDictionary * m_typeCount; // +0x100
    NSDictionary * m_filterNameToType; // +0x108
    NSString * m_checkFilterSearchKey; // +0x110
    UIView * m_navigationBarBackground; // +0x118
    UIView * m_navigationSep; // +0x120
    FavSearchBar * m_searchBar; // +0x128
    FavSearchTopFilterView * m_topFilter; // +0x130
    FavSearchExtendFilterPanel * m_filterExtendPanel; // +0x138
    BOOL m_duringAnimation; // +0x140
    MMUIView * m_maskView; // +0x148
    MMUIView * m_containView; // +0x150
    MMUIActivityIndicatorView * m_searchLoadingView; // +0x158
    BOOL m_hasItemUpdate; // +0x160
    int m_preResultCount; // +0x164
    NSMutableSet * m_searchTagsFromCard; // +0x168
    unsigned long long showFinderTime; // +0x170
    BOOL m_hasSelectedTypeSinceInit; // +0x178
    id /* block */ m_afterPresectHandler; // +0x180
    unsigned int _enterPageTimeInS; // +0x188
    long long _selectedType; // +0x190
    NSArray * _selectedTags; // +0x198
    NSString * _searchText; // +0x1a0
    NSString * _defaultTitle; // +0x1a8
    UIColor * _backgroundColor; // +0x1b0
    NSArray * _displayItemTypes; // +0x1b8
}
- (id)init;
- (id)initWithFilterTypeDic:(id)arg1;
- (void)preSetSelectedType:(id)arg1;
- (void)updateData;
- (void)updateReport;
- (unsigned int)entranceScene;
- (unsigned int)getTagSearchScene;
- (BOOL)itemEditable;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)clearSearch;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)updateContentFrame;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initNavigationBar;
- (void)initTableView;
- (void)initSearchHeader;
- (void)updateSearchHeader;
- (BOOL)shouldIgnoreTableHeadViewForContentInset;
- (void)initLoadingView;
- (void)initEmptyView;
- (void)showSearchLoading;
- (void)setSearchLoading:(BOOL)arg1;
- (void)initEmptySearchLabel;
- (void)setSearchEmpty:(BOOL)arg1;
- (void)initFilterDataWithFilterTypeDic:(id)arg1;
- (void)checkFilterData;
- (void)onCheckTypeWithResultCount:(int)arg1;
- (id)getCheckedTypes;
- (BOOL)useBlackStatusbar;
- (BOOL)showNavigationBarSepLine;
- (BOOL)useTransparentNavibar;
- (void)extendFilter;
- (void)dismissFilterPanel;
- (void)dismissFilterPanelWithAnimation:(BOOL)arg1;
- (void)dismissFilterPanelEnd;
- (void)dismissFilterPanelComplete;
- (void)setSearchHeaderHidden:(BOOL)arg1;
- (double)getSearchBarHeight;
- (BOOL)isSearchBarEditing;
- (void)updateTypeFilterWith:(id)arg1;
- (void)updateTagFilter;
- (BOOL)isOnSearch;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (double)getHeightForItem:(id)arg1;
- (void)addItemList:(id)arg1;
- (void)reloadContent;
- (void)hideLoadingView;
- (void)updateRecentData;
- (void)initFeedFlowView;
- (id)convertFeedContentVMsToCustomBusinessFeedIDModels:(id)arg1;
- (void)setFeedDetailViewController:(id)arg1;
- (id)getArrFinderItems;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (void)initFastBrowserView;
- (void)initFastBrowserViewFooterView;
- (BOOL)tryOpenBrandMpVideoWithInfo:(id)arg1 thumbView:(id)arg2;
- (void)onShowEmptyView;
- (void)onUpdateUnexistItem:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (long long)getSelectedType;
- (void)OnHasAnyFavoriteData:(BOOL)arg1;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)initTingListenListBar;
- (void)openFavMusicListProfile:(id)arg1;
- (id)filterMusicItemBySelectedType:(long long)arg1 resultArr:(id)arg2;
- (id)genFinderDataItemsWith:(id)arg1;
- (BOOL)updateTagSearchResult;
- (void)OnUpdateItems:(id)arg1;
- (void)OnTagListUpdate;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)getCurrentViewController;
- (void)onLoadMore;
- (void)onReloadData;
- (void)onAddressViewDidScroll:(id)arg1;
- (unsigned long long)cellStyle;
- (id)getSelectedDic;
- (unsigned long long)getMaxSelectedCount;
- (void)onSearchBarMoved:(id)arg1;
- (void)onDeleteTag:(id)arg1;
- (void)onDeleteType:(id)arg1;
- (void)onStartSearch:(BOOL)arg1;
- (void)onBeginEditing;
- (void)realSearch;
- (void)onSelectType:(id)arg1;
- (void)onSelectTag:(id)arg1;
- (void)onClickExtendBtn;
- (void)onSelectTypeFromExtendPanel:(id)arg1;
- (void)onCancelTypeFromExtendPanel;
- (void)onSelectTagFromExtendPanel:(id)arg1;
- (void)onCancelTagFromExtendPanel:(id)arg1;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)onHideExtendFilterPanel;
- (double)getContentViewY;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (int)getIndexOfImage:(id)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (void)onMsgFastBrowseViewWillBeginDragging:(id)arg1;
- (void)onMsgFastBrowseViewDidScroll:(id)arg1;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)onClickTagButtonWithTagName:(id)arg1;
- (BOOL)enableTingListMode;
- (void)businessCustomListDetailRemainSection:(long long)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (long long)selectedType;
- (id)selectedTags;
- (id)searchText;
- (id)defaultTitle;
- (void)setDefaultTitle:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (unsigned int)enterPageTimeInS;
- (void)setEnterPageTimeInS:(unsigned int)arg1;
- (id)displayItemTypes;
- (void)setDisplayItemTypes:(id)arg1;
- (void).cxx_destruct;
@end

