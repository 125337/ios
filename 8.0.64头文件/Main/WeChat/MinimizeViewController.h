@interface MinimizeViewController : MMUIViewController <MinimizeTaskStateViewDelegate, WCActionSheetDelegate, CAAnimationDelegate, MinimizeTaskOuterContentViewDelegate, MinimizeBaseViewDelegate, MMInputToolViewExt, MinimizeMultiTaskExpandableDelegate, MinimizeStarFloatingViewDelegate, MinimizeAbsorbFloatingViewDelegate>
{
    BOOL _isAnimating; // +0x70
    BOOL _isLastTimeReverseVertical; // +0x71
    BOOL _hasSelectedGestureCircle; // +0x72
    BOOL _hasMoveDraggableTaskViewLong; // +0x73
    BOOL _hasAbsorbFloatingViewMoveLong; // +0x74
    BOOL _shouldShowReachMaxCountWhenEndSwipe; // +0x75
    BOOL _hasFloatingViewDraggedWhenKeyboardShow; // +0x76
    id <MinimizeVCDelegate> _delegate; // +0x78
    UIView * _contentView; // +0x80
    MinimizeAbsorbFloatingView * _absorbFloatingView; // +0x88
    MinimizeMultiTaskExpandableView * _multiTaskFloatingView; // +0x90
    MinimizeGestureCircleView * _gestureCircleView; // +0x98
    id <MinimizeTaskDataSource> _dataSource; // +0xa0
    UIView * _maximizeFromView; // +0xa8
    UIView * _maximizeFromIcon; // +0xb0
    NSMutableArray * _taskStateViewList; // +0xb8
    MinimizeTaskOuterContentView * _outerContentView; // +0xc0
    NSMutableDictionary * _dicStateNum2TaskStateViewCache; // +0xc8
    NSMutableArray * _finalTaskOrStateViewOrderListForAnimation; // +0xd0
    double _lastTopBaseLine; // +0xd8
    double _lastBottomBaseLine; // +0xe0
    double _lastStateViewCalWitdh; // +0xe8
    UIView<MinimizeDetailTaskListViewInterface> * _lastHighlightTaskView; // +0xf0
    unsigned long long _taskListPageEnterTime; // +0xf8
    MinimizePendingTaskContext * _pendingTaskContext; // +0x100
    id /* block */ _checkMaxConfirmBlock; // +0x108
    MinimizeStarFloatingView * _recordFloatingView; // +0x110
    UIView * _absorbExpandMaskBgView; // +0x118
    double _floatViewYBeforeKeyboardShow; // +0x120
    double _starFloatViewYBeforeKeyboardShow; // +0x128
    double _multiTaskFloatViewYBeforeKeyboardShow; // +0x130
    double _currentInputToolBarTop; // +0x138
    double _currentSystemKeyboardTop; // +0x140
    MinimizeAntiCollisionLogic * _antiCollisionLogic; // +0x148
    UIView * _backgroundView; // +0x150
    UIScrollView * _backgroundScrollView; // +0x158
    UIButton * _backgroundCloseButton; // +0x160
    NSMutableDictionary * _dictBackgroundProgressModel; // +0x168
    CGPoint _initialAdsorbFloatingViewOrigin; // +0x170
    CGPoint _draggableTaskViewBeginTouchPoint; // +0x180
}
- (void)resetAllBackgroundViewPreferAlpha;
- (void)setBackgroundViewPreferAlpha:(double)arg1 listStateType:(unsigned int)arg2;
- (void)onBackgroundViewPreferAlphaChange;
- (void)updateBackgroundViewShowState:(BOOL)arg1;
- (void)updateBackgroundViewShowAlpha:(double)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)dealloc;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)loadView;
- (void)willStatusBarOrientationChanged:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setInitialAdsorbFloatingViewOrigin:(CGPoint)arg1;
- (void)setInitialMultiFloatingViewOrigin:(CGPoint)arg1;
- (CGPoint)initialMultiFloatingViewOrigin;
- (void)initContentView;
- (void)initCloseTaskListRelatedView;
- (void)initAbsorbExpandMaskView;
- (void)initAbsorbFloatView;
- (void)initRecFloatView;
- (void)initGestureCircleView;
- (void)onMultiTaskClickToMinimize:(id)arg1 fromView:(id)arg2;
- (void)onMultiTaskDragToExpandProgress:(double)arg1;
- (void)onMultiTaskExpandStateChanged:(BOOL)arg1;
- (void)onMultiTaskPositionChange:(CGPoint)arg1;
- (void)onMultiTaskDragBegin;
- (void)onAnyTaskListBeginDraggingFromView:(id)arg1 isClick:(BOOL)arg2;
- (void)onAnyTaskListWillExpandToFrame:(CGRect)arg1 viewShouldKeep:(id)arg2;
- (void)onAbsorbFloatingViewTap;
- (void)onAbsorbFloatingViewOuterContentTap:(id)arg1;
- (void)onMaximizeTaskWithTaskKey:(id)arg1;
- (void)notifyEnterTaskFromAdsorbFloatingView:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onAbsorbFloatingViewBegin:(CGPoint)arg1;
- (void)onAbsorbFloatingViewMoveLong;
- (void)onAbsorbFloatingViewOuterContentRecieveTap:(id)arg1;
- (void)onAbsorbFloatingViewEndResultMoveTo:(CGPoint)arg1 moveContext:(id)arg2;
- (void)onAbsorbFloatingViewOuterContentSizeChanged:(CGSize)arg1 taskKey:(id)arg2;
- (BOOL)isRemoveTaskOperationTriggered;
- (void)onAbsorbFloatingViewFullyExpand;
- (void)onOuterContentViewSizeChanged:(id)arg1 toSize:(CGSize)arg2;
- (void)onOuterContentViewTap:(id)arg1;
- (void)onOuterContentViewLongPress:(id)arg1;
- (void)onOuterContentViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onAbsorbFloatingViewFoldStateChange:(BOOL)arg1;
- (void)onTaskStateViewDeleteBtnClicked:(id)arg1;
- (void)onTaskStateViewPlayPauseBtnClicked:(id)arg1 isToPlay:(BOOL)arg2;
- (BOOL)isStateMinimizeTaskPlaying:(id)arg1;
- (void)onTaskStateViewEntryBtnClicked:(id)arg1;
- (void)onTaskStateViewEntryBtnLongPressed:(id)arg1;
- (void)onTaskStateViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (id)getCurrentForegroundTask;
- (id)getCurrentForegroundMultiContentTask;
- (void)removeTaskOrStateViewAnimated:(id)arg1 completion:(id /* block */)arg2;
- (id)getBackgroundOutterTaskList;
- (id)getTask:(id)arg1;
- (id)getAllOutterTaskList;
- (id)getBackgroundMultiContentTaskList;
- (void)setTaskIsForegournd:(BOOL)arg1 taskKey:(id)arg2;
- (id)hasMinimizeTask:(id)arg1;
- (void)minimizeToAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (BOOL)maximizeTask:(id)arg1;
- (BOOL)maximizeTask:(id)arg1 withEnterTaskScene:(unsigned int)arg2;
- (void)processFloatingViewAlpha:(unsigned long long)arg1;
- (void)resetAdsorbFloatingViewAlphaForCurrentBackgroundTask;
- (void)showAlertTips;
- (void)showMultiContentMaxCountAlertTips;
- (BOOL)checkTaskMaxCountOrShowTipsBeforeAddWithPendingTaskContext:(id)arg1;
- (BOOL)checkMultiContentTaskMaxCountWithConfirmBlock:(id /* block */)arg1;
- (BOOL)doDeleteLastMultiContentTaskAfterConfirmed;
- (void)hideTaskListAndShowAdsorbFloatingViewAnimatedWithExitType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isShowingTaskListOrMultiContentList;
- (BOOL)isShowingTaskList;
- (BOOL)isShowingMultiContentList;
- (void)updateTaskListShadowState:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)showAllBackgroundTaskViewListAnimatedWithCompletion:(id /* block */)arg1;
- (void)tryGenAllTaskAndStateView;
- (void)onOtherTaskDataViewHide:(id)arg1 hide:(BOOL)arg2;
- (void)clearAllCacheTaskView;
- (UIEdgeInsets)taskViewEdgeInsets;
- (void)moveTaskViewWithScale:(id)arg1 Scale:(double)arg2 PositionType:(unsigned long long)arg3;
- (double)layoutTaskOrStateView:(CGPoint)arg1 VerticalReverse:(BOOL)arg2 ViewList:(id)arg3 ViewYInset:(double)arg4;
- (void)resetTaskAndStateViewListFrameAndOrder:(BOOL)arg1;
- (void)calculateTaskViewListTopBaseLine:(double *)arg1 bottomBaseLine:(double *)arg2 verticalReverse:(BOOL *)arg3 shouldCheckReverse:(BOOL)arg4;
- (BOOL)isAbsorbFloatingViewStickToRight;
- (BOOL)showAllTaskListAndHideAdsorbFloatingViewAnimated:(id)arg1 completion:(id /* block */)arg2;
- (void)onCloseTaskListButtonClick:(id)arg1;
- (void)hideAllTaskViewList;
- (id)getMinimizeTransitionFloatingView:(id)arg1;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (CGRect)getConvertedVisibleFrame:(id)arg1;
- (CGRect)getConvertedVisibleFrame:(id)arg1 toWindow:(id)arg2;
- (CGRect)getConvertedFloatingIconFrame;
- (void)onMinimizeAnimationEnd:(id)arg1;
- (id)getMaximizeTransitionFloatingView:(id)arg1;
- (void)transitionToMinimization:(id)arg1 Duration:(double)arg2 FromFrame:(CGRect)arg3 toFrame:(CGRect)arg4;
- (void)transitionToMinimizationInOutterWindow:(id)arg1 backgroundTaskListBeforeMinimize:(id)arg2 duration:(double)arg3 fromFrame:(CGRect)arg4 toFrame:(CGRect)arg5;
- (void)resetAdsorbFloatingView;
- (void)resetAdsorbFloatingViewAnimated:(BOOL)arg1;
- (void)resetAdsorbFloatingViewAnimated:(BOOL)arg1 duration:(double)arg2;
- (void)animateAbsorbFloatingViewToCurrentBackgroundTaskListWithAnimationType:(int)arg1 needShrinkAnime:(BOOL)arg2;
- (void)animateAbsorbFloatingViewToCurrentBackgroundTaskListWithAnimationType:(int)arg1;
- (BOOL)checkHideFloatingView:(id)arg1 animationType:(int)arg2;
- (void)animateMultiTaskFloatingView:(id)arg1 Duration:(double)arg2;
- (void)animateOuterContentTaskAndShowAbsorbFloatingView:(id)arg1 Duration:(double)arg2;
- (void)animateShowRecFloatingViewWithTaskKey:(id)arg1;
- (void)handleMinimizeEndAnimation:(id)arg1;
- (void)animateShowAbsorbFloatingView:(id)arg1 Duration:(double)arg2 FromFrame:(CGRect)arg3;
- (void)transitionToMaximization:(id)arg1 Duration:(double)arg2;
- (void)setOtherTaskToBackground:(id)arg1;
- (id)getTaskView:(id)arg1;
- (void)animateAbsorbFloatingViewToHidden:(BOOL)arg1 Duration:(double)arg2;
- (void)scaleAbsorbFloatingViewToHidden:(BOOL)arg1;
- (void)makeSureAbsorbFloatingViewInVisibleArea;
- (void)hideTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 Duration:(double)arg2 exitType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)hideTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 scaleAdsorbFloating:(BOOL)arg2 Duration:(double)arg3 exitType:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)closeAndCancelBizVoice;
- (void)hideOtherTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 CurrentMaximizeTaskView:(id)arg2 Duration:(double)arg3;
- (unsigned long long)positionTypeWithTaskViewFrame:(CGRect)arg1;
- (void)hideAllTaskViewCloseBtn;
- (void)showAllTaskViewCloseBtn;
- (void)beginPopBackGesture:(id)arg1 GestureMode:(int)arg2;
- (unsigned long long)getMultiContentTaskTaskCount;
- (unsigned long long)getOutterContainerTaskCount;
- (BOOL)isMultiContentTaskReachMaxCount;
- (BOOL)isReachGestureMaxCount;
- (void)slideToShowAdsorbFloatingView:(id)arg1 Progress:(double)arg2;
- (void)endSlideToShowAdsorbFloatingView:(id)arg1 isComplete:(BOOL)arg2;
- (BOOL)canSwipeToAddMinimize:(id)arg1 Progress:(double)arg2 TouchPoint:(CGPoint)arg3 ShouldCancel:(BOOL *)arg4;
- (void)endSwipeToAddMinimize:(id)arg1 isComplete:(BOOL)arg2 pendingTaskContext:(id)arg3;
- (BOOL)trySelectGestureCircleViewWith:(CGPoint)arg1 ReachMaxCount:(BOOL)arg2;
- (void)configGestureCircleViewNormalFrameWithProgress:(double)arg1;
- (void)configGestureCircleViewSelectedFrame;
- (void)resetGestureCircleViewToCanAddTaskState:(BOOL)arg1;
- (void)resetGestureCircleViewToCanAddTaskState:(BOOL)arg1 taskKey:(id)arg2;
- (void)beginAddMinimizeInteraction;
- (BOOL)updateAddMinimizeWithProgress:(double)arg1 TouchPoint:(CGPoint)arg2 ShouldCancel:(BOOL *)arg3;
- (void)endAddMinimizeComplete:(BOOL)arg1;
- (BOOL)tryUpdateUIWhenRemoveTask:(id)arg1 animationType:(int)arg2;
- (void)animateRemoveTaskView:(id)arg1;
- (void)animateRemoveTaskViewAndRearrangeUI:(id)arg1;
- (BOOL)updateTask:(id)arg1 Title:(id)arg2 Subtitle:(id)arg3 titleTail:(id)arg4 subTitleTail:(id)arg5;
- (BOOL)updateTaskAnimated:(id)arg1;
- (BOOL)isRecordTipsFloatingViewShowing;
- (id)cachedTaskStateView:(id)arg1;
- (void)resetTaskAndStateViewWhenUpdateTask:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)getCurTaskViewWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)getCurTaskViewWithPoint:(CGPoint)arg1 fromView:(id)arg2;
- (void)highlightTaskView:(id)arg1;
- (BOOL)tryNotifyExitTaskListPage:(unsigned long long)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (double)getMaxReachY;
- (CGRect)getLimitedFrameOfOriginFrame:(CGRect)arg1;
- (void)checkInputviewsTopAndUpdateFloatingViewFrame;
- (void)checkInputviewsTopAndUpdateFloatingViewFrame:(id)arg1 floatViewYBefore:(double)arg2 additionalBottomPadding:(double)arg3;
- (double)calcInputViewSafeBottom;
- (void)resetInputViewStatus;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)onOpenMiniTask;
- (id)viewControllerToOpenMiniTask;
- (void)checkReAddMinimizeTask;
- (void)updateStarFloatingState;
- (double)taskStateViewHeight:(id)arg1;
- (double)taskStateViewWidth;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)absorbFloatingView;
- (void)setAbsorbFloatingView:(id)arg1;
- (id)multiTaskFloatingView;
- (void)setMultiTaskFloatingView:(id)arg1;
- (id)gestureCircleView;
- (void)setGestureCircleView:(id)arg1;
- (CGPoint)initialAdsorbFloatingViewOrigin;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)maximizeFromView;
- (void)setMaximizeFromView:(id)arg1;
- (id)maximizeFromIcon;
- (void)setMaximizeFromIcon:(id)arg1;
- (id)taskStateViewList;
- (void)setTaskStateViewList:(id)arg1;
- (id)outerContentView;
- (void)setOuterContentView:(id)arg1;
- (id)dicStateNum2TaskStateViewCache;
- (void)setDicStateNum2TaskStateViewCache:(id)arg1;
- (id)finalTaskOrStateViewOrderListForAnimation;
- (void)setFinalTaskOrStateViewOrderListForAnimation:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isLastTimeReverseVertical;
- (void)setIsLastTimeReverseVertical:(BOOL)arg1;
- (double)lastTopBaseLine;
- (void)setLastTopBaseLine:(double)arg1;
- (double)lastBottomBaseLine;
- (void)setLastBottomBaseLine:(double)arg1;
- (double)lastStateViewCalWitdh;
- (void)setLastStateViewCalWitdh:(double)arg1;
- (id)lastHighlightTaskView;
- (void)setLastHighlightTaskView:(id)arg1;
- (BOOL)hasSelectedGestureCircle;
- (void)setHasSelectedGestureCircle:(BOOL)arg1;
- (BOOL)hasMoveDraggableTaskViewLong;
- (void)setHasMoveDraggableTaskViewLong:(BOOL)arg1;
- (BOOL)hasAbsorbFloatingViewMoveLong;
- (void)setHasAbsorbFloatingViewMoveLong:(BOOL)arg1;
- (CGPoint)draggableTaskViewBeginTouchPoint;
- (void)setDraggableTaskViewBeginTouchPoint:(CGPoint)arg1;
- (BOOL)shouldShowReachMaxCountWhenEndSwipe;
- (void)setShouldShowReachMaxCountWhenEndSwipe:(BOOL)arg1;
- (unsigned long long)taskListPageEnterTime;
- (void)setTaskListPageEnterTime:(unsigned long long)arg1;
- (id)pendingTaskContext;
- (void)setPendingTaskContext:(id)arg1;
- (id /* block */)checkMaxConfirmBlock;
- (void)setCheckMaxConfirmBlock:(id /* block */)arg1;
- (id)recordFloatingView;
- (void)setRecordFloatingView:(id)arg1;
- (id)absorbExpandMaskBgView;
- (void)setAbsorbExpandMaskBgView:(id)arg1;
- (double)floatViewYBeforeKeyboardShow;
- (void)setFloatViewYBeforeKeyboardShow:(double)arg1;
- (double)starFloatViewYBeforeKeyboardShow;
- (void)setStarFloatViewYBeforeKeyboardShow:(double)arg1;
- (double)multiTaskFloatViewYBeforeKeyboardShow;
- (void)setMultiTaskFloatViewYBeforeKeyboardShow:(double)arg1;
- (BOOL)hasFloatingViewDraggedWhenKeyboardShow;
- (void)setHasFloatingViewDraggedWhenKeyboardShow:(BOOL)arg1;
- (double)currentInputToolBarTop;
- (void)setCurrentInputToolBarTop:(double)arg1;
- (double)currentSystemKeyboardTop;
- (void)setCurrentSystemKeyboardTop:(double)arg1;
- (id)antiCollisionLogic;
- (void)setAntiCollisionLogic:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundScrollView;
- (void)setBackgroundScrollView:(id)arg1;
- (id)backgroundCloseButton;
- (void)setBackgroundCloseButton:(id)arg1;
- (id)dictBackgroundProgressModel;
- (void)setDictBackgroundProgressModel:(id)arg1;
- (void).cxx_destruct;
@end
