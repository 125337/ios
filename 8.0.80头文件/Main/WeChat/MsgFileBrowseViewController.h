@interface MsgFileBrowseViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewDataSource, WCFinderBusinessCustomListDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate, EmojiBrowseViewDelegate, UITableViewDelegate, UITableViewDataSource, MsgNewImgDataLogicDelegate, MMRefreshTableFooterDelegate, MsgFileBrowseItemViewDelegate, MsgDataDownloadDelegate, ViewAppMsgControllerDelegate, MMMultiMenuAndMemuTableViewCellDelegate, WCSearchDelegate, WCDataSearchDelegate>
{
    WCFinderFeedFlowView * m_feedFlowView; // +0x70
    NSMutableArray * m_arrFinderItems; // +0x78
    unsigned long long m_feedFlowViewState; // +0x80
    WCFinderBusinessCustomListDetailViewController * m_feedDetailViewController; // +0x88
    NSMutableDictionary * m_dicFeedSearchResultsByTitle; // +0x90
    NSMutableDictionary * m_dicFeedSearchMatchResults; // +0x98
    EmojiBrowseView * m_emojiBrowseView; // +0xa0
    NSMutableDictionary * m_dicEmojiSearchResultsByTitle; // +0xa8
    NSMutableDictionary * m_dicEmojiSearchMatchResults; // +0xb0
    NSMutableArray * m_arrEmojiMsgs; // +0xb8
    unsigned long long showFinderTime; // +0xc0
    NSHashTable * headerViewHashTable; // +0xc8
    unsigned int m_clickMediaResultType; // +0xd0
    unsigned int m_clickMediaStartTime; // +0xd4
    NSString * oldSearchText; // +0xd8
    NSString * m_historyCategorySearchId; // +0xe0
    unsigned int m_historyCategorySearchStartTime; // +0xe8
    NSString * m_historyCategoryExposedSearchId; // +0xf0
    NSString * m_historyCategoryLastTriggerQuery; // +0xf8
    BOOL m_bLoading; // +0x100
    NSMutableArray * m_arrSectionTitle; // +0x108
    NSMutableDictionary * m_dicMsgsByTitle; // +0x110
    NSMutableDictionary * m_dicMsgSelectInfo; // +0x118
    MMMsgFileBrowseMenuAndMemuTableViewCell * m_editingMenuTableCell; // +0x120
    NSMutableDictionary * m_dicDataFmtThumbImg; // +0x128
    BOOL _enableSelect; // +0x130
    BOOL _useAsSubVC; // +0x131
    BOOL _bHasLoad; // +0x132
    CBaseContact * _contact; // +0x138
    NSString * _contactName; // +0x140
    unsigned long long _filterType; // +0x148
    id <MMUIViewControllerDelegate> _m_delegate; // +0x150
    id <MsgFileBrowseViewControllerDelegate> _m_delegateSelect; // +0x158
    unsigned long long _selectLimit; // +0x160
    NSArray * _extFilter; // +0x168
    NSString * _sessionId; // +0x170
    NSMutableArray * _msgArrPage; // +0x178
    id /* block */ _m_reportHistoryCategoryTriggerBlock; // +0x180
    id /* block */ _m_reportHistoryCategoryExposureBlock; // +0x188
    id /* block */ _m_reportHistoryCategoryClickBlock; // +0x190
    MMTableView * _tableView; // +0x198
    NSMutableArray * _msgArr; // +0x1a0
    MsgNewImgDataLogic * _dataLogic; // +0x1a8
    NSMutableDictionary * _cellViewCache; // +0x1b0
    WCTimeLineFooterView * _loadingView; // +0x1b8
    UIView * _footerView; // +0x1c0
    UIButton * _okButton; // +0x1c8
    ViewAppMsgController * _appMsgController; // +0x1d0
}
- (void)reportSessionMsgSearchSwapOrLongClcickActionLogWithAction:(unsigned int)arg1;
- (void)reportSessionMsgSearchSwapOrLongClcickActionLogWithAction:(unsigned int)arg1 atIndexPath:(id)arg2;
- (void)reportSessionMsgSearchSwapOrLongClcickActionLogWithAction:(unsigned int)arg1 withMsg:(id)arg2;
- (id)getQuery;
- (id)getMsgAtIndexPath:(id)arg1;
- (unsigned int)getReportVerticalSearchEntranceType;
- (void)reportSessionMsgSearchDoClickMediaStayTime;
- (void)resetReportClickMediaInfoWithMsg:(id)arg1;
- (void)reportSessionMsgFileBrowseSearchResult;
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
- (void)initEmojiData;
- (void)initEmojiView;
- (void)handleEmojiMsgWithMoreData:(BOOL)arg1 isFirstLoading:(BOOL)arg2;
- (void)rebuildMsgEmojiData:(id)arg1 searchText:(id)arg2;
- (void)clearEmojiData;
- (void)clearEmojiView;
- (void)requestMoreEmojiData;
- (id)getEmojiData;
- (id)getEmojiSectionTitles;
- (void)hideKeyboard;
- (void)deleteEmojiAtIndexPath:(id)arg1;
- (void)doDelEmojiAtIndexPath:(id)arg1;
- (void)locateEmojiMsg:(id)arg1;
- (void)didSelectEmojiAtIndexPath:(id)arg1;
- (void)didLongPressEmojiAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)initData;
- (double)getContentViewY;
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
- (BOOL)historyCategoryReportEnabled;
- (void)historyCategoryResetSearchForNewBrowse;
- (unsigned int)historyCategoryResultCount;
- (id)historyCategoryCurrentQuery;
- (void)historyCategoryOnDoSearch:(id)arg1;
- (void)historyCategoryReportResultExposureIfNeeded;
- (void)historyCategoryReportClickWithMsg:(id)arg1 flatIndex:(unsigned long long)arg2;
- (unsigned long long)historyCategoryFlatIndexForIndexPath:(id)arg1;
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
- (void)onDownloadPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned long long)arg3;
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
- (BOOL)wcsSearchBarShouldEndEditing:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)cancelSearch;
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
- (BOOL)useAsSubVC;
- (void)setUseAsSubVC:(BOOL)arg1;
- (id /* block */)m_reportHistoryCategoryTriggerBlock;
- (void)setM_reportHistoryCategoryTriggerBlock:(id /* block */)arg1;
- (id /* block */)m_reportHistoryCategoryExposureBlock;
- (void)setM_reportHistoryCategoryExposureBlock:(id /* block */)arg1;
- (id /* block */)m_reportHistoryCategoryClickBlock;
- (void)setM_reportHistoryCategoryClickBlock:(id /* block */)arg1;
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
