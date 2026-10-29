@interface MiniTaskViewController : MMUIViewController <MiniTaskPanGestureHandlerDelegate, MiniTaskTransitionAnimationDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MiniTaskCollectionCellDelegate, IMiniMizeUserdRecordUpdateExt, MiniTaskCollectionViewLayoutDelegate, MiniTaskCollectionHeaderViewDelegate, WCScheduleMgrExt, WCScheduleLogicControllerDelegate, MiniTaskCollectionLoadMoreViewDelegate>
{
    BOOL _bNeedReportVisibleCellsDisplayAction; // +0x70
    BOOL _isCollectionUpdateAnimating; // +0x71
    BOOL _bHasAppearAsTopVC; // +0x72
    BOOL _isFinishLoad; // +0x73
    BOOL _showingStarMigrationEducation; // +0x74
    unsigned int _firstEntryMiniTaskTime; // +0x78
    MultiTaskPageActionInfo * _pageActionInfo; // +0x80
    UIView * _collectionContainerView; // +0x88
    UICollectionView * _collectionView; // +0x90
    MMUILabel * _titleLabel; // +0x98
    UIButton * _statusBarButton; // +0xa0
    MiniTaskCollectionViewLayout * _collectionViewLayout; // +0xa8
    NSMutableArray * _sectionModels; // +0xb0
    NSMutableSet * _clickedSchedules; // +0xb8
    MiniTaskCollectioViewMaskLayer * _maskLayer; // +0xc0
    NSMutableSet * _exposedTaskKey; // +0xc8
    NSMutableDictionary * _dicLastExposeTimeStamp; // +0xd0
    MinimizeTaskData * _currOpenTaskData; // +0xd8
    MiniTaskDurantionCounter * _gesEduDurantionCounter; // +0xe0
    WCScheduleLogicController * _scheduleRemindLogic; // +0xe8
    long long _loadDataOffset; // +0xf0
    NSMutableSet * _currTaskDataSet; // +0xf8
    UIView * _starMigrationEducationView; // +0x100
    NSLayoutConstraint * _starMigrationEduGapConstraint; // +0x108
    MiniTaskViewControllerContext * _context; // +0x110
    MiniTaskDynamicBgView * _backgroundView; // +0x118
    UIImageView * _fakeMainFrameSnapshotView; // +0x120
    MMUIButton * _fakeSnapshotMaskView; // +0x128
    UIView * _fakeSnapshotShadowView; // +0x130
    MMUIButton * _exitButton; // +0x138
    MMUILabel * _gestureExitEducationLabel; // +0x140
    UIView * _pageRegionCoverView; // +0x148
    MiniTaskPanGestureHandler * _leftPanPopGestureHandler; // +0x150
    CGSize _starMigrationEduLastLoggedSize; // +0x158
}
+ (id)findPresentedStarListFrom:(id)arg1;
- (void)setupLeftPanGestureHandler;
- (BOOL)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)createPushAnimator;
- (id)createPopAnimator;
- (void)presentStarListFromViewController:(id)arg1 interactionController:(id)arg2 animated:(BOOL)arg3;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)arg1 isComplete:(BOOL)arg2;
- (void)onMiniInteractiveTransitionChangedOfPanGesture:(id)arg1 progress:(double)arg2;
- (void)onTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (id)init;
- (void)onEnterWithNewContext:(id)arg1;
- (void)dealloc;
- (void)initData;
- (void)appendDataWithArrTaskData:(id)arg1;
- (void)initMainUI;
- (void)initNavigationItems;
- (void)initStatusBarButton;
- (void)initCollectionView;
- (void)setupMaskLayer;
- (void)initTitleLabel;
- (void)initExitButton;
- (void)initEducationLabel;
- (BOOL)canRightEdgeInteractiveDismiss;
- (void)registerAppActiveStateObsever;
- (void)unregisterAppActiveStateObsever;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)onMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldHideStatusBarWhenAppear;
- (UIEdgeInsets)pageRegionInsets;
- (double)pageRegionCornerRadius;
- (CGRect)pageRegionInRootView;
- (void)initPageRegionCoverViewIfNeeded;
- (void)layoutPageRegionCoverView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupBackgroundView;
- (void)setupStarMigrationEducationIfNeeded;
- (void)updateStarMigrationEducationLayoutIfNeeded;
- (void)closeStarMigrationEducationPage;
- (void)onStarMigrationBrowseClicked;
- (void)onStarMigrationDismissClicked;
- (void)setupFakeSnapshot;
- (id)getCurrentContextId;
- (void)updateDefaultTaskTransitionContext:(id)arg1;
- (void)updateTaskTransitionContext:(id)arg1;
- (void)onFakeSnapshotClicked;
- (void)onExitButtonClicked;
- (void)viewDidLayoutSubviews;
- (double)titleAreaHorizontalPadding;
- (CGRect)backgroundViewFrame;
- (CGRect)collectionContainerFrame;
- (CGRect)fakeSnapshotFrame;
- (void)layoutFakeSnapshotViews;
- (BOOL)isSectionCanLoadMore:(long long)arg1;
- (BOOL)shouldShowSectionHeader:(long long)arg1;
- (id)sectionsForLayout;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidTransitionToNewSize;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)launchTaskWithCell:(id)arg1;
- (id /* block */)cellFrameForDataTaskGetter;
- (id /* block */)createPresentEndCallbackWithTaskData:(id)arg1;
- (id /* block */)createDimisssBeginCallback;
- (id /* block */)createDimissEndCallback;
- (void)checkAddMiniTaskBackFromNavigationController:(id)arg1;
- (void)updateViewWhenDataListChanged;
- (void)updateVisibleCellsFrontViewWithContentOffsetY:(double)arg1;
- (void)scrollToMakeFirstCellFull;
- (void)onMiniTaskDeleteAll:(long long)arg1;
- (void)onMiniTaskBeginEdit:(long long)arg1;
- (void)onMiniTaskEndEdit:(long long)arg1;
- (void)onSectionLoadMore:(long long)arg1;
- (void)onMiniTaskCollectionCellDelete:(id)arg1 isFromMenu:(BOOL)arg2;
- (void)onMiniTaskCollectionCellFavorite:(id)arg1 isFromMenu:(BOOL)arg2;
- (void)onMiniTaskCollectionCellAddRemind:(id)arg1;
- (void)onMiniTaskCollectionCellRemoveRemind:(id)arg1;
- (CGSize)snapshotImagePreferredSize;
- (unsigned long long)currentCellCount;
- (double)collectionViewOffsetY;
- (void)onMinimizedTaskDataListChanged;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (void)appendMinimizedTaskData:(id)arg1 completion:(id /* block */)arg2;
- (void)onUpdateMinimizedTaskData:(id)arg1;
- (void)onUpdateMinimizedTaskDataOrder:(id)arg1;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (void)launchScheduleItemWithCell:(id)arg1;
- (void)reloadScheduleItems;
- (id)scheduleRemindLogic;
- (void)updateScheduleFolding;
- (void)onScheduleAppendItem:(id)arg1;
- (void)onScheduleRemoveItem:(id)arg1;
- (void)onScheduleItemRemindChange:(id)arg1;
- (void)onScheduleListUpdate;
- (void)onScheduleModifyFail:(id)arg1 errTips:(id)arg2;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(BOOL)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (double)titleCenterY;
- (double)collectionViewTop;
- (id)indexPathForTaskData:(id)arg1;
- (id)indexPathForScheduleItem:(id)arg1;
- (BOOL)removeTaskDataAtIndexPath:(id)arg1;
- (id)insertTaskDataViewModel:(id)arg1;
- (id)removeLastTaskDatas:(long long)arg1;
- (void)removeViewModelAtIndexPath:(id)arg1;
- (void)replaceViewModel:(id)arg1 atIndexPath:(id)arg2;
- (id)viewModelAtIndexPath:(id)arg1;
- (void)updateOutdateViewModels;
- (id)arrScheduleCellViewModel;
- (id)normalSectionModel;
- (id)outdateSectionModel;
- (void)resetMiniTaskTransitionState;
- (void)reloadSection:(long long)arg1;
- (void)cancelEditing;
- (void)resetScheduleStatus;
- (void)updateSectionEditStatus;
- (BOOL)isSectionEditing:(long long)arg1;
- (void)callVisibleMinimizeTaskDatasExposed;
- (void)tryCallMinimizeTaskDataExposed:(id)arg1;
- (void)reportWhenExit;
- (void)reportWhenExitWithLaunchedTaskContext:(id)arg1;
- (void)reportItemActionWithTaskData:(id)arg1 actionType:(unsigned long long)arg2;
- (void)reportVisibleCellsExposed;
- (void)reportBatchAction:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)loadTaskDatasFromDB;
- (void)onLoadMoreTaskData;
- (long long)loadTaskDataLimit;
- (id)pageActionInfo;
- (void)setPageActionInfo:(id)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)statusBarButton;
- (void)setStatusBarButton:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)sectionModels;
- (void)setSectionModels:(id)arg1;
- (id)clickedSchedules;
- (void)setClickedSchedules:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)exposedTaskKey;
- (void)setExposedTaskKey:(id)arg1;
- (id)dicLastExposeTimeStamp;
- (void)setDicLastExposeTimeStamp:(id)arg1;
- (BOOL)bNeedReportVisibleCellsDisplayAction;
- (void)setBNeedReportVisibleCellsDisplayAction:(BOOL)arg1;
- (BOOL)isCollectionUpdateAnimating;
- (void)setIsCollectionUpdateAnimating:(BOOL)arg1;
- (id)currOpenTaskData;
- (void)setCurrOpenTaskData:(id)arg1;
- (id)gesEduDurantionCounter;
- (void)setGesEduDurantionCounter:(id)arg1;
- (BOOL)bHasAppearAsTopVC;
- (void)setBHasAppearAsTopVC:(BOOL)arg1;
- (void)setScheduleRemindLogic:(id)arg1;
- (BOOL)isFinishLoad;
- (void)setIsFinishLoad:(BOOL)arg1;
- (long long)loadDataOffset;
- (void)setLoadDataOffset:(long long)arg1;
- (unsigned int)firstEntryMiniTaskTime;
- (void)setFirstEntryMiniTaskTime:(unsigned int)arg1;
- (id)currTaskDataSet;
- (void)setCurrTaskDataSet:(id)arg1;
- (id)starMigrationEducationView;
- (void)setStarMigrationEducationView:(id)arg1;
- (BOOL)showingStarMigrationEducation;
- (void)setShowingStarMigrationEducation:(BOOL)arg1;
- (id)starMigrationEduGapConstraint;
- (void)setStarMigrationEduGapConstraint:(id)arg1;
- (CGSize)starMigrationEduLastLoggedSize;
- (void)setStarMigrationEduLastLoggedSize:(CGSize)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)fakeMainFrameSnapshotView;
- (void)setFakeMainFrameSnapshotView:(id)arg1;
- (id)fakeSnapshotMaskView;
- (void)setFakeSnapshotMaskView:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)gestureExitEducationLabel;
- (void)setGestureExitEducationLabel:(id)arg1;
- (id)pageRegionCoverView;
- (void)setPageRegionCoverView:(id)arg1;
- (id)leftPanPopGestureHandler;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (void).cxx_destruct;
@end
