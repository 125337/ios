@interface MMFavoritesUsageViewController : MMUIViewController <FavBaseTableDataControllerDelegate, IFavoritesExt, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, MMFavCellComponentDelegate>
{
    FavBaseTableDataController * m_dataController; // +0x70
    UIView * m_multiSelectActionView; // +0x78
    MMUIButton * m_delBtn; // +0x80
    MMTableView * m_tableView; // +0x88
    UIView * m_emptyView; // +0x90
    UIView * m_loadingView; // +0x98
    UIView * m_footerView; // +0xa0
    MMUIView * m_maskTypeView; // +0xa8
    MMUIView * m_maskSortView; // +0xb0
    MMUIView * m_sortSelectView; // +0xb8
    MMUIView * m_selectView; // +0xc0
    MMUIView * m_typeSelectView; // +0xc8
    MMUIButton * m_type; // +0xd0
    MMUIButton * m_sort; // +0xd8
    NSArray * m_typeArray; // +0xe0
    NSMutableSet * m_typeSet; // +0xe8
    NSMutableArray * m_realTypeArray; // +0xf0
    UIActivityIndicatorView * m_activityView; // +0xf8
    MMUIWindow * m_fullScreenWindow; // +0x100
    MMUIView * m_headLine; // +0x108
    BOOL m_bFistLoadFromCache; // +0x110
    BOOL m_isSortSelectUp; // +0x111
    BOOL m_isTypeSelectUp; // +0x112
    int m_selectedType; // +0x114
    unsigned short m_selectedSort; // +0x118
    unsigned long long m_leftSize; // +0x120
    unsigned long long m_curMinItemDataSize; // +0x128
    unsigned int m_curMinUsedTimes; // +0x130
    unsigned int m_curMinUpdateTime; // +0x134
    NSMutableArray * m_typeSelectBtnArray; // +0x138
    NSMutableArray * m_sortSelectBtnArray; // +0x140
    NSMutableDictionary * m_typeTitleMap; // +0x148
    NSMutableDictionary * m_sortTitleMap; // +0x150
    UIView * m_canvasPageAnimateOriginView; // +0x158
    unsigned int m_enterPageTimeInS; // +0x160
    unsigned long long m_startTime; // +0x168
    unsigned int m_multiBtnClickTimes; // +0x170
    int m_reportFilterType; // +0x174
    int m_deleteType; // +0x178
    NSMutableArray * m_deletedMsgInfos; // +0x180
    MMUIView * m_typeSelectContainView; // +0x188
    MMUIView * m_sortSelectContainView; // +0x190
    int fromScene; // +0x198
    NSString * _sessionId; // +0x1a0
}
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (unsigned char)getReportStatus;
- (BOOL)showNavigationBarSepLine;
- (void)initNavRightBar;
- (void)initNavLeftBar;
- (void)switchToDefaultDelete;
- (void)backToPreView;
- (void)switchToMutiDelete;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setViewTitle;
- (void)initData;
- (void)initTableView;
- (void)initSelectView;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)initTagSelectView;
- (void)updateReportFileterType;
- (void)showTagSelectView:(id)arg1;
- (void)onSelectTagBtnHandler:(id)arg1;
- (void)initSortSelectView;
- (int)getReportSortType;
- (void)showSortSelectView:(id)arg1;
- (void)onSelectSortBtnHandler:(id)arg1;
- (void)initTagMaskView;
- (void)maskTagTouchHandler;
- (void)initSortMaskView;
- (void)maskSortTouchHandler;
- (BOOL)isTypelistEmpty:(int)arg1;
- (void)initLoadingView;
- (void)HideLoadingView;
- (void)initEmptyView;
- (void)initDelBtn;
- (void)hideSelectActionView;
- (void)onDeleteItems;
- (unsigned long long)getSelectCapacity;
- (void)showChoosenCapacityUI;
- (void)viewDidTransitionToNewSize;
- (void)jumpToViewStreamVideo:(id)arg1;
- (void)onSelectItem:(id)arg1;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)realDeleteFavItem:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (id)getCurrentViewController;
- (void)onShowEmptyView;
- (void)onHideEmptyView;
- (void)onLoadMore;
- (int)getSortType;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reloadTableView;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (BOOL)onResponseForSelectFavItem:(id)arg1;
- (void)OnGetFirstPageFavoritesByType:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnGetNextPageFavoritesByType:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3;
- (void)onUpdateUnexistItem:(id)arg1;
- (BOOL)isSameAsSelectedType:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (double)getHeightForItem:(id)arg1;
- (void)addItemList:(id)arg1;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)onClickPurgeSelectBtn:(BOOL)arg1 favItem:(id)arg2;
- (void)registerYReportSdk;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
