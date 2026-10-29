@interface MiniTaskViewController : MMUIViewController <MiniTaskPanGestureHandlerDelegate, MiniTaskTransitionAnimationDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MiniTaskCollectionCellDelegate, IMiniMizeUserdRecordUpdateExt, MiniTaskCollectionViewLayoutDelegate, MiniTaskCollectionHeaderViewDelegate, WCScheduleMgrExt, WCScheduleLogicControllerDelegate, MiniTaskCollectionLoadMoreViewDelegate, IMinimizeTaskDataChangeDelegateInterface>
{
    BOOL _bNeedReportVisibleCellsDisplayAction; // +0x68
    BOOL _isCollectionUpdateAnimating; // +0x69
    BOOL _bHasAppearAsTopVC; // +0x6a
    MultiTaskPageActionInfo * _pageActionInfo; // +0x70
    UIView * _collectionContainerView; // +0x78
    UICollectionView * _collectionView; // +0x80
    MMUILabel * _titleLabel; // +0x88
    MiniTaskCollectionViewLayout * _collectionViewLayout; // +0x90
    NSMutableArray * _sectionModels; // +0x98
    NSMutableSet * _clickedSchedules; // +0xa0
    MiniTaskCollectioViewMaskLayer * _maskLayer; // +0xa8
    NSMutableSet * _exposedTaskKey; // +0xb0
    NSMutableDictionary * _dicLastExposeTimeStamp; // +0xb8
    MiniTaskDurantionCounter * _gesEduDurantionCounter; // +0xc0
    WCScheduleLogicController * _scheduleRemindLogic; // +0xc8
    MiniTaskViewControllerContext * _context; // +0xd0
    MiniTaskDynamicBgView * _backgroundView; // +0xd8
    UIImageView * _fakeMainFrameSnapshotView; // +0xe0
    MMUIButton * _fakeSnapshotMaskView; // +0xe8
    UIView * _fakeSnapshotShadowView; // +0xf0
    MMUIButton * _exitButton; // +0xf8
    MMUILabel * _gestureExitEducationLabel; // +0x100
    MiniTaskPanGestureHandler * _leftPanPopGestureHandler; // +0x108
}
- (void)setupLeftPanGestureHandler;
- (BOOL)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)arg1 isComplete:(BOOL)arg2;
- (void)onMiniInteractiveTransitionChangedOfPanGesture:(id)arg1 progress:(double)arg2;
- (void)onTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (id)init;
- (void)onEnterWithNewContext:(id)arg1;
- (void)dealloc;
- (void)initData;
- (void)reloadDataWithArrTaskData:(id)arg1;
- (void)initMainUI;
- (void)initNavigationItems;
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
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupBackgroundView;
- (void)setupFakeSnapshot;
- (id)getCurrentContextId;
- (void)updateDefaultTaskTransitionContext:(id)arg1;
- (void)updateTaskTransitionContext:(id)arg1;
- (void)onFakeSnapshotClicked;
- (void)onExitButtonClicked;
- (void)viewDidLayoutSubviews;
- (BOOL)isSectionCanLoadMore:(long long)arg1;
- (BOOL)shouldShowSectionHeader:(long long)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
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
- (id)mergetMinimizeTaskDataInLocalAndAff:(id)arg1;
- (void)onMinimizedTaskDataListChanged;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (void)onUpdateMinimizedTaskData:(id)arg1;
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
- (void)removeTaskDataAtIndexPath:(id)arg1;
- (id)insertTaskDataViewModel:(id)arg1;
- (id)removeLastTaskDatas:(long long)arg1;
- (void)removeViewModelAtIndexPath:(id)arg1;
- (void)replaceViewModel:(id)arg1 atIndexPath:(id)arg2;
- (id)viewModelAtIndexPath:(id)arg1;
- (void)updateOutdateViewModels;
- (id)arrScheduleCellViewModel;
- (id)arrCellViewModel;
- (id)arrOutdateCellViewModel;
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
- (id)pageActionInfo;
- (void)setPageActionInfo:(id)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
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
- (id)gesEduDurantionCounter;
- (void)setGesEduDurantionCounter:(id)arg1;
- (BOOL)bHasAppearAsTopVC;
- (void)setBHasAppearAsTopVC:(BOOL)arg1;
- (void)setScheduleRemindLogic:(id)arg1;
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
- (id)leftPanPopGestureHandler;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (void).cxx_destruct;
@end

