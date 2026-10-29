@interface MMFavoritesUsageViewController : MMUIViewController <FavBaseTableDataControllerDelegate, IFavoritesExt, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, MMFavCellComponentDelegate>
{
    FavBaseTableDataController * m_dataController; // +0x68
    UIView * m_multiSelectActionView; // +0x70
    MMUIButton * m_delBtn; // +0x78
    MMTableView * m_tableView; // +0x80
    UIView * m_emptyView; // +0x88
    UIView * m_loadingView; // +0x90
    UIView * m_footerView; // +0x98
    MMUIView * m_maskTypeView; // +0xa0
    MMUIView * m_maskSortView; // +0xa8
    MMUIView * m_sortSelectView; // +0xb0
    MMUIView * m_selectView; // +0xb8
    MMUIView * m_typeSelectView; // +0xc0
    MMUIButton * m_type; // +0xc8
    MMUIButton * m_sort; // +0xd0
    NSArray * m_typeArray; // +0xd8
    NSMutableSet * m_typeSet; // +0xe0
    NSMutableArray * m_realTypeArray; // +0xe8
    UIActivityIndicatorView * m_activityView; // +0xf0
    MMUIWindow * m_fullScreenWindow; // +0xf8
    MMUIView * m_headLine; // +0x100
    BOOL m_bFistLoadFromCache; // +0x108
    BOOL m_isSortSelectUp; // +0x109
    BOOL m_isTypeSelectUp; // +0x10a
    int m_selectedType; // +0x10c
    unsigned short m_selectedSort; // +0x110
    unsigned long long m_leftSize; // +0x118
    unsigned long long m_curMinItemDataSize; // +0x120
    unsigned int m_curMinUsedTimes; // +0x128
    unsigned int m_curMinUpdateTime; // +0x12c
    NSMutableArray * m_typeSelectBtnArray; // +0x130
    NSMutableArray * m_sortSelectBtnArray; // +0x138
    NSMutableDictionary * m_typeTitleMap; // +0x140
    NSMutableDictionary * m_sortTitleMap; // +0x148
    UIView * m_canvasPageAnimateOriginView; // +0x150
    unsigned int m_enterPageTimeInS; // +0x158
    unsigned long long m_startTime; // +0x160
    unsigned int m_multiBtnClickTimes; // +0x168
    int m_reportFilterType; // +0x16c
    int m_deleteType; // +0x170
    NSMutableArray * m_deletedMsgInfos; // +0x178
    MMUIView * m_typeSelectContainView; // +0x180
    MMUIView * m_sortSelectContainView; // +0x188
    int fromScene; // +0x190
    NSString * _sessionId; // +0x198
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

