@interface EmoticonCustomManageViewResortOrderController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, EmoticonCustomManageViewDelegate, IEmoticonMgrExt, MMImagePickerManagerDelegate, EmoticonBackupOperateMgrExt, EmoticonBackUpMgrExt, EmoticonBackUpMgrViewExt, WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate, CustomEmoticonConflictViewDelegate, UIGestureRecognizerDelegate, EmoticonCustomManagePopInteractiveTransitionDelegate, EmoticonCustomCreateLogicDelegate, EmoticonPreviewWindowViewControllerDelegate>
{
    BOOL _isConflictViewClosed; // +0x70
    BOOL _shouldShowConflictView; // +0x71
    BOOL _needResetBrickView; // +0x72
    BOOL _isSortPopupShowing; // +0x73
    BOOL _isCollectionViewScrolling; // +0x74
    BOOL _multiSelectStarted; // +0x75
    unsigned int _localEmoticonLimit; // +0x78
    EmoticonCustomManageCollectionView * _collectionView; // +0x80
    EmoticonCustomManageCollectionLayout * _collectionLayout; // +0x88
    EmoticonCustomManageDataLogic * _dataLogic; // +0x90
    UIView * _bottomBar; // +0x98
    UIButton * _deleteButton; // +0xa0
    UIButton * _moveButton; // +0xa8
    UIButton * _cancelMoveButton; // +0xb0
    UILabel * _bottomLabel; // +0xb8
    EmoticonCustomSortInsertBrickView * _insertBrickView; // +0xc0
    EmoticonCustomSortInsertBrickView * _insertBrickPlaceHolderView; // +0xc8
    EmoticonCustomSortBGView * _moveBGView; // +0xd0
    UIView * _bottomBarLineView; // +0xd8
    EmoticonLoadMoreFooterView * _footerView; // +0xe0
    double _gridViewWidth; // +0xe8
    unsigned long long _manageStatus; // +0xf0
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0xf8
    unsigned long long _type; // +0x100
    UIPanGestureRecognizer * _moveGesture; // +0x108
    EmoticonCustomManageSwipeSelectGestureRecognizer * _multiSelectGesture; // +0x110
    UIScreenEdgePanGestureRecognizer * _dismissModalGesture; // +0x118
    EmoticonCustomManagePopInteractiveTransition * _popTransition; // +0x120
    unsigned long long _insertPositionForReport; // +0x128
    EmoticonCustomCreateLogic * _customCreateLogic; // +0x130
    unsigned long long _fromScene; // +0x138
    EmoticonPreviewWindowViewController * _emoticonPreview; // +0x140
    unsigned long long _currentSortType; // +0x148
    UIView * _sortBarView; // +0x150
    UIView * _sortBarBottomCoverView; // +0x158
    UIView * _navigationBarBottomCoverView; // +0x160
    UIButton * _sortButton; // +0x168
    UIView * _sortPopupView; // +0x170
    UIView * _sortDividerLine; // +0x178
    UIView * _maskView; // +0x180
    UIView * _resortMaskView; // +0x188
    UIButton * _sortOptionDefault; // +0x190
    UIButton * _sortOptionMostUsed; // +0x198
    UIButton * _sortOptionLeastUsed; // +0x1a0
    NSMutableArray * _sortOptionMostUsedMd5s; // +0x1a8
    NSMutableArray * _sortOptionLeastUsedMd5s; // +0x1b0
    double _lastCollectionLayoutSafeBottomInset; // +0x1b8
    NSString * _multiSelectStartMd5; // +0x1c0
    NSMutableSet * _multiSelectedMd5Set; // +0x1c8
    NSMutableDictionary * _multiSelectedMdsSetsss; // +0x1d0
    NSString * _insertPositionMd5; // +0x1d8
    NSArray * _operatedMd5List; // +0x1e0
    unsigned long long _lastSortType; // +0x1e8
    CGSize _lastCollectionLayoutViewSize; // +0x1f0
    CGRect _lastNavigationBarFrameInView; // +0x200
}
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)applySortNavigationBarAppearance;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (void)setScene:(unsigned long long)arg1;
- (id)addEmoticonLogic;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)hideNavigationBarHairlineInView:(id)arg1;
- (id)buildNavigationBarBottomCoverViewIfNeeded;
- (void)removeNavigationBarBottomCoverView;
- (double)alignedLayoutFloorValue:(double)arg1;
- (double)alignedLayoutCeilValue:(double)arg1;
- (double)alignedLayoutOnePixel;
- (double)sortBarOverlapCoverHeight;
- (double)sortBarVisibleBottomYWithTopOffset:(double)arg1;
- (BOOL)shouldHideNavigationBarBottomCoverView;
- (BOOL)shouldHideSortSeamCoverViews;
- (void)updateNavigationBarBottomCoverVisibility;
- (void)updateSortBarBottomCoverVisibility;
- (void)refreshNavigationBarBottomCoverView;
- (void)refreshNavigationBarHairlineHiddenState;
- (double)sortLayoutTopOffset;
- (double)sortPopupVisibleOriginY;
- (double)sortPopupHiddenOriginYWithPopupHeight:(double)arg1 visibleOriginY:(double)arg2;
- (BOOL)isCollectionViewScrolledToTop;
- (BOOL)shouldShowSortDivider;
- (void)updateSortDividerVisibility;
- (void)applySortSeamAppearance;
- (void)updateSortRelatedFrames;
- (void)updateCollectionLayoutIfNeeded;
- (void)updateCollectionLayout;
- (void)refreshTopLayoutForCurrentNavigationBarStateIfNeeded;
- (void)refreshTopLayoutForCurrentNavigationBarState;
- (BOOL)shouldInteractiveDismiss;
- (void)initView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initBackground;
- (void)initMoveBGView;
- (void)initMoveBrickView;
- (void)initBottomBarView;
- (void)initNavigationItem;
- (void)initCollectionView;
- (void)initMultiSelectGestures;
- (void)initDismissGesture;
- (void)onDismissGesture:(id)arg1;
- (id)genCollectionLayout;
- (double)genGridViewWidth;
- (double)BottomBarHeight;
- (void)BackButtonDown:(id)arg1;
- (void)OnCancelModalView:(id)arg1;
- (void)initData;
- (void)resetDisplayMd5ListToDefaultOrder;
- (void)setManageStatus:(unsigned long long)arg1;
- (void)updateLoadingStatus;
- (void)updateConflictView;
- (void)onClickEdit;
- (void)onEndEdit;
- (void)onAddCustomEmoticon;
- (id)getViewController;
- (id)customCreateLogic;
- (void)onDeleteEmoticonConfirm:(id)arg1;
- (void)updateBottomDeleteButton;
- (void)deleteEmoticonFromServer;
- (unsigned long long)convertDisplayIndexToWrapListIndex:(unsigned long long)arg1;
- (void)onMultiSelectGesture:(id)arg1;
- (void)checkMultiSelectForScroll;
- (void)updateCellMarked:(id)arg1;
- (void)updateCellSelectStatusForMultiSelect;
- (void)onMoveTouched;
- (void)onMoveCanceled;
- (void)onMoveGesture:(id)arg1;
- (void)checkCollectionInsertPlaceHolder;
- (BOOL)checkCollectionInsert;
- (BOOL)realDoInsertAtIndexPath:(id)arg1;
- (BOOL)checkCollectionAutoScrollForMove;
- (BOOL)checkCollectionAutoScrollForMultiSelect:(double)arg1;
- (void)cleanInsert;
- (void)onMoveGestureFailed;
- (void)onMoveGestureSucceed;
- (void)doTaptic:(long long)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)popTransition;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)onPopBackInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)onStickyEmoticonFromServer:(id)arg1;
- (void)onMoveEmoticonFromServer:(id)arg1 insertPositionMd5:(id)arg2;
- (id)recoverMgr;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setShouldShowConflictView:(BOOL)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (BOOL)needForbiddenFirstWrap;
- (void)onEmoticonCustomManageViewTaped:(id)arg1 andView:(id)arg2;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onAddEmoticonCommonFail;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onMoveBackupEmoticonOK:(id)arg1;
- (void)onMoveBackupEmoticonOK:(id)arg1 isSticky:(BOOL)arg2;
- (void)onMoveBackupEmoticonFailed:(id)arg1;
- (void)onMoveBackupEmoticonFailed:(id)arg1 isSticky:(BOOL)arg2;
- (void)onStickyBackupEmoticonOK:(id)arg1 needDealVc:(BOOL)arg2;
- (void)onStickyBackupEmoticonFailed:(id)arg1 needDealVc:(BOOL)arg2;
- (void)onEmoticonBackUpMgrRecoverOneEmoticon;
- (void)onEmoticonBackUpMgrRecoverCompleteForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrSyncOperateForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverFailedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachableForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onCustomEmoticonConflictViewClickClose;
- (void)checkIfIsOnEmoticonCustomManageViewController:(BOOL *)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (BOOL)isCurrentManageStatusAllowRefresh;
- (BOOL)isCurrentManangeStatusNoneEdit;
- (BOOL)isCurrentManageStatusCommonSelect;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (void)initSortView;
- (void)initSortPopupView;
- (void)setupSortPopupViewCornerRadius;
- (void)onSortButtonClicked:(id)arg1;
- (void)toggleSortPopup;
- (void)hideSortPopup;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onSortOptionClicked:(id)arg1;
- (void)updateSortButtons;
- (void)updateSortOptionButtonsStyle;
- (id)sortTypeString:(unsigned long long)arg1;
- (void)performSortWithType:(unsigned long long)arg1;
- (void)continueRequestMd5List:(unsigned long long)arg1;
- (void)onEmoticonLongPressed:(id)arg1;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 cellIndex:(unsigned long long)arg3 frame:(CGRect)arg4;
- (void)hideEmoticonPreview;
- (long long)convertSortType:(unsigned long long)arg1;
- (void)makeCommonReport:(id)arg1;
- (id)makeMd5List;
- (void)reportEvent:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (double)getNavigationBarHeight;
- (double)getStatusBarHeight;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)moveButton;
- (void)setMoveButton:(id)arg1;
- (id)cancelMoveButton;
- (void)setCancelMoveButton:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)insertBrickView;
- (void)setInsertBrickView:(id)arg1;
- (id)insertBrickPlaceHolderView;
- (void)setInsertBrickPlaceHolderView:(id)arg1;
- (id)moveBGView;
- (void)setMoveBGView:(id)arg1;
- (id)bottomBarLineView;
- (void)setBottomBarLineView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (double)gridViewWidth;
- (void)setGridViewWidth:(double)arg1;
- (unsigned long long)manageStatus;
- (BOOL)isConflictViewClosed;
- (void)setIsConflictViewClosed:(BOOL)arg1;
- (BOOL)shouldShowConflictView;
- (unsigned int)localEmoticonLimit;
- (void)setLocalEmoticonLimit:(unsigned int)arg1;
- (void)setAddEmoticonLogic:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)moveGesture;
- (void)setMoveGesture:(id)arg1;
- (id)multiSelectGesture;
- (void)setMultiSelectGesture:(id)arg1;
- (id)dismissModalGesture;
- (void)setDismissModalGesture:(id)arg1;
- (void)setPopTransition:(id)arg1;
- (BOOL)needResetBrickView;
- (void)setNeedResetBrickView:(BOOL)arg1;
- (unsigned long long)insertPositionForReport;
- (void)setInsertPositionForReport:(unsigned long long)arg1;
- (void)setCustomCreateLogic:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)emoticonPreview;
- (void)setEmoticonPreview:(id)arg1;
- (unsigned long long)currentSortType;
- (void)setCurrentSortType:(unsigned long long)arg1;
- (id)sortBarView;
- (void)setSortBarView:(id)arg1;
- (id)sortBarBottomCoverView;
- (void)setSortBarBottomCoverView:(id)arg1;
- (id)navigationBarBottomCoverView;
- (void)setNavigationBarBottomCoverView:(id)arg1;
- (id)sortButton;
- (void)setSortButton:(id)arg1;
- (id)sortPopupView;
- (void)setSortPopupView:(id)arg1;
- (id)sortDividerLine;
- (void)setSortDividerLine:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)resortMaskView;
- (void)setResortMaskView:(id)arg1;
- (id)sortOptionDefault;
- (void)setSortOptionDefault:(id)arg1;
- (id)sortOptionMostUsed;
- (void)setSortOptionMostUsed:(id)arg1;
- (id)sortOptionLeastUsed;
- (void)setSortOptionLeastUsed:(id)arg1;
- (BOOL)isSortPopupShowing;
- (void)setIsSortPopupShowing:(BOOL)arg1;
- (id)sortOptionMostUsedMd5s;
- (void)setSortOptionMostUsedMd5s:(id)arg1;
- (id)sortOptionLeastUsedMd5s;
- (void)setSortOptionLeastUsedMd5s:(id)arg1;
- (BOOL)isCollectionViewScrolling;
- (void)setIsCollectionViewScrolling:(BOOL)arg1;
- (CGSize)lastCollectionLayoutViewSize;
- (void)setLastCollectionLayoutViewSize:(CGSize)arg1;
- (double)lastCollectionLayoutSafeBottomInset;
- (void)setLastCollectionLayoutSafeBottomInset:(double)arg1;
- (CGRect)lastNavigationBarFrameInView;
- (void)setLastNavigationBarFrameInView:(CGRect)arg1;
- (id)multiSelectStartMd5;
- (void)setMultiSelectStartMd5:(id)arg1;
- (id)multiSelectedMd5Set;
- (void)setMultiSelectedMd5Set:(id)arg1;
- (BOOL)multiSelectStarted;
- (void)setMultiSelectStarted:(BOOL)arg1;
- (id)multiSelectedMdsSetsss;
- (void)setMultiSelectedMdsSetsss:(id)arg1;
- (id)insertPositionMd5;
- (void)setInsertPositionMd5:(id)arg1;
- (id)operatedMd5List;
- (void)setOperatedMd5List:(id)arg1;
- (unsigned long long)lastSortType;
- (void)setLastSortType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
