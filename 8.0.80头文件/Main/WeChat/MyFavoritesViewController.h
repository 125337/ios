@interface MyFavoritesViewController : FavBaseListViewController <FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, FavSightViewDelegate, ViewLocationDelegate, MMTipsViewControllerDelegate, FavoritesBatchSafeChecker, FavoritesBatchSafeCheckerDelegate, WCFinderFeedFlowViewSelectionDelegate, WCFinderStaticCoverCellMenuHandle, UIScrollViewDelegate>
{
    UIButton * m_bannerBtn; // +0x120
    MMUIWindow * m_fullScreenWindow; // +0x128
    FavWarningBannerView * m_warningBanner; // +0x130
    FavClickStreamData * m_clickData; // +0x138
    UIView * canvasPageAnimateOriginView; // +0x140
    double m_originHeaderHeight; // +0x148
    FavMultiSelectToolView * m_multiSelectActionView; // +0x150
    MMUIView * m_spaceHeaderview; // +0x158
    MMTimer * m_syncTimer; // +0x160
    int m_deleteType; // +0x168
    MMUIButton * m_favBarBtn; // +0x170
    double m_lastContentOffset; // +0x178
    double m_accumulatedUpwardScrollForSave; // +0x180
    BOOL m_didVibrate; // +0x188
    BOOL m_isWarningbanner; // +0x189
    BOOL m_isWarningbannerFullDisplay; // +0x18a
    BOOL m_isSpaceTipFullDisplay; // +0x18b
    unsigned long long m_spaceTipVisibilityRefreshGeneration; // +0x190
    int m_reportStatus; // +0x198
    FavDataBatchSaveLogic * _batchSavePreflightLogic; // +0x1a0
    FavBatchSaveProgressToastPresenter * _batchSaveProgressToastPresenter; // +0x1a8
    unsigned long long _totalItemCount; // +0x1b0
    FavoritesBatchSafeCheckerExecuter * _batchSafeCheckerExecuter; // +0x1b8
    double _lastBatchSafeCheckTime; // +0x1c0
    NSArray * m_allMainScopeItems; // +0x1c8
    long long m_mainScopeLoadState; // +0x1d0
    long long m_mainScopeSelectionIntent; // +0x1d8
    unsigned long long m_multiSelectScopeRequestId; // +0x1e0
    long long m_multiSelectActionButtonsSelectedType; // +0x1e8
    FavNoteQuickEditorViewManager * _quickEditorManager; // +0x1f0
    BOOL _isQuickEditorEnabled; // +0x1f8
    UIView * _dualTabSpacerView; // +0x200
    BOOL _createNewDirectly; // +0x208
    BOOL _shouldGenerateSessionId; // +0x209
    BOOL _favBannerFetching; // +0x20a
    BOOL _favBannerDismissed; // +0x20b
    id <MyFavoritesViewControllerDelegate> _m_delegate; // +0x210
    id <MyFavoritesViewControllerParentContainerDelegate> _parentContainerDelegate; // +0x218
    NSString * _favSessionId; // +0x220
    NSString * _lastSelectedTypeString; // +0x228
    unsigned long long _selectedImageCount; // +0x230
    unsigned long long _selectedVideoCount; // +0x238
    unsigned long long _selectedImageSize; // +0x240
    unsigned long long _selectedVideoSize; // +0x248
    unsigned long long _totalImageCount; // +0x250
    unsigned long long _totalVideoCount; // +0x258
    NSString * _favBannerMainTitle; // +0x260
    NSString * _favBannerUpQuery; // +0x268
    long long _currentButtonType; // +0x270
    WCFinderFeedContentVM * _finderMenuContentVM; // +0x278
    FavoritesItem * _finderMenuFavItem; // +0x280
    NSIndexPath * _finderMenuIndexPath; // +0x288
    WCFinderFeedStaticCoverCollectionViewCell * _finderMenuCell; // +0x290
}
- (id)favDuoPaddedNavItem:(id)arg1 isLeading:(BOOL)arg2;
- (BOOL)shouldPreloadVisibleFavMPArticles;
- (BOOL)shouldDelegateMultiSelectNavigationToParent;
- (void)applyMultiSelectTitle:(id)arg1;
- (BOOL)usesNewMultiSelectCellStyle;
- (unsigned long long)locationSubPageSelectMode;
- (void)configureMultiSelectCellStyle;
- (BOOL)shouldEnableBatchPicSaveSelectAll;
- (BOOL)shouldEnableListScopeMultiSelect;
- (BOOL)isMainScopeSelectionReady;
- (id)allCurrentTableSelectableData;
- (id)selectableDataFromSearchScope:(id)arg1;
- (id)currentMultiSelectScopeItems;
- (void)refreshMultiSelectSelectionPresentation;
- (void)refreshMultiSelectActionViewZOrderAndFrame;
- (void)applyMultiSelectPresentationForCurrentType;
- (void)syncImageGridSelectionFromSelectionDict;
- (id)init;
- (id)initWithTabMode:(long long)arg1;
- (void)updateData;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)startAutoSyncTimer;
- (void)stopAutoSyncTimer;
- (void)onTimeSync;
- (void)setupBatchSaveProgressToastPresenterIfNeeded;
- (BOOL)shouldShowBatchSaveProgressToast;
- (void)updateBatchSaveTaskPresentationForCurrentFilter;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)hideVisibleCellMenu;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didAddFavBrowseCollectionView;
- (double)getMultiSelectBrowseTopY;
- (void)applyMultiSelectLayoutToBrowseCollectionViewIfNeeded;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)addItemList:(id)arg1;
- (void)initNavigationBar;
- (void)onClickNewBtn;
- (void)onReturn;
- (void)handleTypeChange:(id)arg1;
- (void)onSelectType:(id)arg1;
- (void)onSelectTypeFromExtendPanel:(id)arg1;
- (void)onCancelTypeFromExtendPanel:(id)arg1;
- (id)warningBanner;
- (void)initMultiSelectActionView;
- (void)updateSelectActionView;
- (double)favSpaceBannerTotalHeightWithBarHeight:(double)arg1;
- (void)logFavEntryLayoutCore:(id)arg1;
- (void)syncTableViewContentOffsetAfterHeaderChange:(double)arg1;
- (void)initTingListenListBar;
- (double)getHeaderContentInset;
- (BOOL)isBatchPicSaveEnabled;
- (void)loadAllMainScopeItemsForMultiSelectIfNeeded;
- (void)setupMultiSelectActionButtons;
- (void)onMultiSelect;
- (void)setImageTableViewBottomInset:(double)arg1;
- (void)onMultiSelectDone;
- (void)updateTableViewInset;
- (void)hideSelectActionView;
- (void)onForwardItems;
- (void)forwardData:(id)arg1;
- (void)addTagForItems;
- (void)onDeleteItems;
- (BOOL)isVideoOrSightDataType:(id)arg1;
- (void)countSelectedFromWraps:(id)arg1;
- (void)countTotalFromWraps:(id)arg1;
- (id)getSelectedImageVideoItems;
- (void)updateSelectionStatistics;
- (void)reportMultiSelectButtonExposure;
- (void)reportMultiSelectButtonClick;
- (void)reportDownloadButtonExposure;
- (void)reportDownloadButtonClick;
- (void)fillCommonParamsWithSessionId:(id)arg1;
- (void)fillCommonParamsWithStatistics:(id)arg1;
- (id)batchSaveReportParams;
- (void)reportSelectAllButtonExposure;
- (void)reportSelectAllButtonClick;
- (void)reportCancelSelectAllButtonExposure;
- (void)reportCancelSelectAllButtonClick;
- (id)createSelectAllBarButtonItem;
- (id)createCancelSelectAllBarButtonItem;
- (void)setSelectAllButton;
- (void)setCancelSelectAllButton;
- (void)startBatchSaveWithSelectedItems:(id)arg1 reportParams:(id)arg2;
- (void)onSaveItems;
- (void)applyRightBarButtonItemForMultiSelect:(id)arg1;
- (id)derivedMainScopeSelectAllBarButtonItem;
- (void)applyPendingMainScopeSelectionIntent;
- (void)onMultiSelectSelectionChanged;
- (void)updateSelectAllButtonState;
- (void)onSelectAllImages;
- (void)performSelectAllImagesWithLoadedData;
- (void)onUnselectAllImages;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (int)getListPageType;
- (int)getSearchListIndexForImageDataWrap:(id)arg1;
- (int)getSearchListIndexForFinderItem:(id)arg1;
- (void)realDeleteData:(id)arg1;
- (void)deleteDataAtIndexPath:(id)arg1;
- (void)disableBtns;
- (void)enableBtns;
- (void)jumpToViewStreamVideo:(id)arg1;
- (BOOL)shouldDisplaySpaceTip;
- (void)refreshSpaceTipVisibilityPreservingOffset;
- (void)checkForBanner;
- (BOOL)checkForFailBanner;
- (BOOL)checkForCapacityWarningBanner;
- (void)showUploadFailForCapacityTips;
- (void)showCapacityWarningTips;
- (void)showSpaceHalfScreenViewController;
- (void)showWarningBanner;
- (void)hideWarningBanner;
- (void)initSpaceTip;
- (void)onSpaceTipOrWarningbannerExposure;
- (int)getCapBarReportStatus;
- (void)updateSpaceTip;
- (void)showSpaceTip;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)checkWeNoteOnScroll:(id)arg1;
- (id)weNoteBarButton;
- (void)triggerVibrationFeedback;
- (id)getCapacityString;
- (id)getTempCapacityString:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)fav_canPerformMenuAction:(SEL)arg1 forDataObj:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onClickDetailBtnWith:(id)arg1 favItem:(id)arg2;
- (void)onClickDetailBtnWithDataWrap:(id)arg1;
- (void)onSelectItem:(id)arg1 position:(int)arg2;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)onFavoritesItemHiddenWithAnimation:(id)arg1;
- (void)onFavoritesItemShownWithAnimation:(id)arg1;
- (BOOL)isEmptyNoteItem:(id)arg1;
- (BOOL)isMarkdownNoteItem:(id)arg1;
- (BOOL)shouldSuppressForwardForMdNoteItem:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnFavCapacityInfoUpdate;
- (void)OnForwardDone;
- (void)OnFavForwardCancel;
- (id)getFavForawrdViewController;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)registerYReportSdk;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)coverCellShouldHandleMenuGesgture:(id)arg1 gesture:(id)arg2;
- (BOOL)onStaticCoverCellShowMenu:(id)arg1 gesture:(id)arg2;
- (void)fav_showFinderFeedLongPressMenuForCell:(id)arg1 favItem:(id)arg2;
- (void)favFinderFeedForwardAction:(id)arg1;
- (void)favFinderFeedStarAction:(id)arg1;
- (void)favFinderFeedUnstarAction:(id)arg1;
- (void)favFinderFeedPinTopAction:(id)arg1;
- (void)favFinderFeedUnpinTopAction:(id)arg1;
- (void)favFinderFeedEditTagAction:(id)arg1;
- (void)favFinderFeedDeleteAction:(id)arg1;
- (void)favFinderFeedMoreAction:(id)arg1;
- (void)onFinderFeedFlowViewMultiSelect:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (id)favItemForFinderContentVM:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isContentVMSelected:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 setSelected:(BOOL)arg2 forContentVM:(id)arg3;
- (id)selectedItemsInFinderFeedFlowView:(id)arg1;
- (void)onFinderFeedFlowViewForward:(id)arg1;
- (void)onFinderFeedFlowViewEditTag:(id)arg1;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedLongPress:(id)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)favBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)favBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)onLongPressSquareImg:(id)arg1 withInfo:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)needExecuteBatchCgiSafetyCheck:(id)arg1;
- (void)batchCgiSafetyCheckSuccess;
- (void)batchCgiSafetyCheckFail;
- (void)initQuickEditor;
- (double)currentBannerHeightForQuickEditor;
- (void)updateTableHeaderViewWithQuickEditor;
- (void)setSearchHeaderHidden:(BOOL)arg1;
- (void)initSearchHeader;
- (void)checkFilterData;
- (double)getSearchBarHeight;
- (void)onClickSearchPlaceholder;
- (void)cleanupQuickEditor;
- (BOOL)isFavPageBannerAskEnabled;
- (void)fetchFavPageBannerPromptIfNeeded;
- (id)createFavPageBannerItem;
- (void)syncFavPageBannerPresence;
- (void)onClickFavPageBanner;
- (void)onClickXiaoweiBannerClose:(id)arg1;
- (void)dealloc;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)parentContainerDelegate;
- (void)setParentContainerDelegate:(id)arg1;
- (BOOL)createNewDirectly;
- (void)setCreateNewDirectly:(BOOL)arg1;
- (id)favSessionId;
- (void)setFavSessionId:(id)arg1;
- (BOOL)shouldGenerateSessionId;
- (void)setShouldGenerateSessionId:(BOOL)arg1;
- (id)lastSelectedTypeString;
- (void)setLastSelectedTypeString:(id)arg1;
- (unsigned long long)selectedImageCount;
- (void)setSelectedImageCount:(unsigned long long)arg1;
- (unsigned long long)selectedVideoCount;
- (void)setSelectedVideoCount:(unsigned long long)arg1;
- (unsigned long long)selectedImageSize;
- (void)setSelectedImageSize:(unsigned long long)arg1;
- (unsigned long long)selectedVideoSize;
- (void)setSelectedVideoSize:(unsigned long long)arg1;
- (unsigned long long)totalImageCount;
- (void)setTotalImageCount:(unsigned long long)arg1;
- (unsigned long long)totalVideoCount;
- (void)setTotalVideoCount:(unsigned long long)arg1;
- (id)favBannerMainTitle;
- (void)setFavBannerMainTitle:(id)arg1;
- (id)favBannerUpQuery;
- (void)setFavBannerUpQuery:(id)arg1;
- (BOOL)favBannerFetching;
- (void)setFavBannerFetching:(BOOL)arg1;
- (BOOL)favBannerDismissed;
- (void)setFavBannerDismissed:(BOOL)arg1;
- (long long)currentButtonType;
- (void)setCurrentButtonType:(long long)arg1;
- (id)finderMenuContentVM;
- (void)setFinderMenuContentVM:(id)arg1;
- (id)finderMenuFavItem;
- (void)setFinderMenuFavItem:(id)arg1;
- (id)finderMenuIndexPath;
- (void)setFinderMenuIndexPath:(id)arg1;
- (id)finderMenuCell;
- (void)setFinderMenuCell:(id)arg1;
- (void).cxx_destruct;
@end
