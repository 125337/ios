@interface MsgFileBrowseViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewDataSource, WCFinderBusinessCustomListDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate, UITableViewDelegate, UITableViewDataSource, MsgNewImgDataLogicDelegate, MMRefreshTableFooterDelegate, MsgFileBrowseItemViewDelegate, MsgDataDownloadDelegate, ViewAppMsgControllerDelegate, MMMultiMenuAndMemuTableViewCellDelegate>
{
    WCFinderFeedFlowView * m_feedFlowView; // +0x68
    NSMutableArray * m_arrFinderItems; // +0x70
    unsigned long long m_feedFlowViewState; // +0x78
    WCFinderBusinessCustomListDetailViewController * m_feedDetailViewController; // +0x80
    NSMutableDictionary * m_dicFeedSearchResultsByTitle; // +0x88
    NSMutableDictionary * m_dicFeedSearchMatchResults; // +0x90
    unsigned long long showFinderTime; // +0x98
    NSHashTable * headerViewHashTable; // +0xa0
    unsigned int m_clickMediaResultType; // +0xa8
    unsigned int m_clickMediaStartTime; // +0xac
    BOOL m_bLoading; // +0xb0
    NSMutableArray * m_arrSectionTitle; // +0xb8
    NSMutableDictionary * m_dicMsgsByTitle; // +0xc0
    NSMutableDictionary * m_dicMsgSelectInfo; // +0xc8
    MMMsgFileBrowseMenuAndMemuTableViewCell * m_editingMenuTableCell; // +0xd0
    NSMutableDictionary * m_dicDataFmtThumbImg; // +0xd8
    BOOL _enableSelect; // +0xe0
    BOOL _bHasLoad; // +0xe1
    CBaseContact * _contact; // +0xe8
    NSString * _contactName; // +0xf0
    unsigned long long _filterType; // +0xf8
    id <MMUIViewControllerDelegate> _m_delegate; // +0x100
    id <MsgFileBrowseViewControllerDelegate> _m_delegateSelect; // +0x108
    unsigned long long _selectLimit; // +0x110
    NSArray * _extFilter; // +0x118
    NSString * _sessionId; // +0x120
    NSMutableArray * _msgArrPage; // +0x128
    MMTableView * _tableView; // +0x130
    NSMutableArray * _msgArr; // +0x138
    MsgNewImgDataLogic * _dataLogic; // +0x140
    NSMutableDictionary * _cellViewCache; // +0x148
    WCTimeLineFooterView * _loadingView; // +0x150
    UIView * _footerView; // +0x158
    UIButton * _okButton; // +0x160
    ViewAppMsgController * _appMsgController; // +0x168
}
- (void)reportSessionMsgSearchSwapOrLongClcickActionLogWithAction:(unsigned int)arg1;
- (unsigned int)getReportVerticalSearchEntranceType;
- (void)reportSessionMsgSearchDoClickMediaStayTime;
- (void)resetReportClickMediaInfoWithMsg:(id)arg1;
- (void)handleFinderMsg:(id)arg1 hasMoreData:(BOOL)arg2;
- (void)initFeedFlowData;
- (void)clearFeedFlowData;
- (void)rebuildMsgFeedFlowData:(id)arg1 searchText:(id)arg2;
- (void)initFeedFlowView;
- (id)convertFeedContentVMsToCustomBusinessFeedIDModels:(id)arg1;
- (void)setFeedDetailViewController:(id)arg1;
- (id)genFinderDataItemWithMsg:(id)arg1;
- (id)genFinderDataItemsWithArrMsg:(id)arg1;
- (void)clearFeedFlowView;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)updateTitleHeaderView:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateHeaderViewHashTable:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedFlowViewAnchor:(id)arg1;
- (void)onClickAnchorAction:(id)arg1;
- (void)onClickDeleteAction:(id)arg1 contentVM:(id)arg2;
- (id)getFinderSearchHighLightItemModelAtIndexPath:(id)arg1;
- (void)businessCustomListDetailRemainSection:(long long)arg1;
- (void)businessCustomListDetailDidDisappear;
- (void)handleDeleteMsgActionWithMsg:(id)arg1;
- (void)doDelMsgWithMsg:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)initData;
- (id)getViewController;
- (void)initView;
- (id)contactName;
- (void)stopAllDownloading;
- (void)onClickCancel;
- (void)onClickReturn;
- (unsigned long long)calcSelectedCount;
- (void)onClickOk:(id)arg1;
- (void)onClickDownloadingAlertCancel;
- (void)onClickDownloadingAlertOk;
- (void)initNavigationBar;
- (void)rebuildMsgData;
- (void)reloadDataAndView;
- (void)reloadData;
- (void)reloadMsgArray;
- (BOOL)isNeedGetMore;
- (void)appendLoadMsgArrPageData;
- (id)getMsgInSection:(long long)arg1 Row:(long long)arg2;
- (void)delMsgAtIndexPath:(id)arg1;
- (id)genMultiMenuItemImage:(id)arg1 coler:(id)arg2;
- (id)getArrSectionTitle;
- (void)showMsgLocationForRowAtIndexPath:(id)arg1;
- (void)showMsgLocationWithMsg:(id)arg1;
- (id)genNoResultView;
- (void)removeFinderMsgByLocalID:(unsigned int)arg1;
- (void)hiddenMenuInCell;
- (void)handleCancelSearchTextSelected;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (void)updateSquareImgPercent:(id)arg1 downloadInfo:(id)arg2;
- (id)genNormalCellView:(id)arg1;
- (void)onTimeShowProgress:(id)arg1;
- (void)onFileBrowseItem:(id)arg1 selected:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)getFileBrowseItemIconImageByFileExt:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)checkIsShowMusicMVWithMessageWrap:(id)arg1;
- (void)updateLoading;
- (void)doSearch:(id)arg1;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (void)getMoreData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (BOOL)isMatchMsg:(id)arg1 SearchText:(id)arg2;
- (BOOL)isOnlyMatchMsgFtsContent:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)openWeApp:(id)arg1;
- (unsigned long long)getChatType;
- (BOOL)accessibilityPerformEscape;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (BOOL)isShouldShowNavigationBarInViewAppMsg:(id)arg1;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (void)onMenuTransitionToConfirmWithState:(long long)arg1;
- (void)onMemuShowOnCell:(id)arg1;
- (void)onMemuNotFoucusOnCell:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setContactName:(id)arg1;
- (unsigned long long)filterType;
- (void)setFilterType:(unsigned long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_delegateSelect;
- (void)setM_delegateSelect:(id)arg1;
- (BOOL)enableSelect;
- (void)setEnableSelect:(BOOL)arg1;
- (unsigned long long)selectLimit;
- (void)setSelectLimit:(unsigned long long)arg1;
- (id)extFilter;
- (void)setExtFilter:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)msgArrPage;
- (void)setMsgArrPage:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)msgArr;
- (void)setMsgArr:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (BOOL)bHasLoad;
- (void)setBHasLoad:(BOOL)arg1;
- (id)cellViewCache;
- (void)setCellViewCache:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (id)appMsgController;
- (void)setAppMsgController:(id)arg1;
- (void).cxx_destruct;
@end

