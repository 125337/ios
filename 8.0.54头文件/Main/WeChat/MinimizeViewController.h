@interface MinimizeViewController : MMUIViewController <MinimizeDraggableTaskViewDelegate, MinimizeTaskStateViewDelegate, WCActionSheetDelegate, CAAnimationDelegate, MinimizeTaskOuterContentViewDelegate, MinimizeBaseViewDelegate, MMInputToolViewExt, MinimizeStarFloatingViewDelegate, MinimizeAbsorbFloatingViewDelegate>
{
    BOOL _isAnimating; // +0x68
    BOOL _isLastTimeReverseVertical; // +0x69
    BOOL _hasSelectedGestureCircle; // +0x6a
    BOOL _hasMoveDraggableTaskViewLong; // +0x6b
    BOOL _hasAbsorbFloatingViewMoveLong; // +0x6c
    BOOL _shouldShowReachMaxCountWhenEndSwipe; // +0x6d
    BOOL _hasFloatingViewDraggedWhenKeyboardShow; // +0x6e
    id <MinimizeVCDelegate> _delegate; // +0x70
    UIView * _contentView; // +0x78
    MinimizeAbsorbFloatingView * _absorbFloatingView; // +0x80
    MinimizeGestureCircleView * _gestureCircleView; // +0x88
    id <MinimizeTaskDataSource> _dataSource; // +0x90
    UIView * _maximizeFromView; // +0x98
    UIView * _maximizeFromIcon; // +0xa0
    UIView * _backgroundView; // +0xa8
    UIScrollView * _backgroundScrollView; // +0xb0
    UIButton * _backgroundCloseButton; // +0xb8
    NSMutableDictionary * _dicTaskKey2TaskViewCache; // +0xc0
    NSMutableArray * _draggableTaskViewList; // +0xc8
    NSMutableArray * _taskStateViewList; // +0xd0
    MinimizeTaskOuterContentView * _outerContentView; // +0xd8
    NSMutableDictionary * _dicStateNum2TaskStateViewCache; // +0xe0
    NSMutableArray * _finalTaskOrStateViewOrderListForAnimation; // +0xe8
    double _lastTopBaseLine; // +0xf0
    double _lastBottomBaseLine; // +0xf8
    UIView<MinimizeDetailTaskListViewInterface> * _lastHighlightTaskView; // +0x100
    unsigned long long _taskListPageEnterTime; // +0x108
    MinimizePendingTaskContext * _pendingTaskContext; // +0x110
    MinimizeStarFloatingView * _recordFloatingView; // +0x118
    double _floatViewYBeforeKeyboardShow; // +0x120
    double _currentInputToolBarTop; // +0x128
    double _currentSystemKeyboardTop; // +0x130
    MinimizeAntiCollisionLogic * _antiCollisionLogic; // +0x138
    CGPoint _initialAdsorbFloatingViewOrigin; // +0x140
    CGPoint _draggableTaskViewBeginTouchPoint; // +0x150
}
- (id)initWithDataSource:(id)arg1;
- (void)dealloc;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)loadView;
- (void)willStatusBarOrientationChanged:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setInitialAdsorbFloatingViewOrigin:(CGPoint)arg1;
- (void)initContentView;
- (void)initCloseTaskListRelatedView;
- (void)initAbsorbFloatView;
- (void)initRecFloatView;
- (void)initGestureCircleView;
- (void)onAbsorbFloatingViewTap;
- (void)onAbsorbFloatingViewOuterContentTap:(id)arg1;
- (void)onMaximizeTaskWithTaskKey:(id)arg1;
- (void)notifyEnterTaskFromAdsorbFloatingView:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onAbsorbFloatingViewLongPress:(CGPoint)arg1;
- (void)onAbsorbFloatingViewBegin:(CGPoint)arg1;
- (void)onAbsorbFloatingViewEndResultMoveTo:(CGPoint)arg1 moveContext:(id)arg2;
- (void)onAbsorbFloatingViewOuterContentSizeChanged:(CGSize)arg1 taskKey:(id)arg2;
- (void)onRemoveCurrentOuterContentTask;
- (BOOL)isRemoveTaskOperationTriggered;
- (void)onAbsorbFloatingViewFullyExpand;
- (void)onOuterContentViewSizeChanged:(id)arg1 toSize:(CGSize)arg2;
- (void)onOuterContentViewTap:(id)arg1;
- (void)onOuterContentViewLongPress:(id)arg1;
- (void)onOuterContentViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onAbsorbFloatingViewFoldStateChange:(BOOL)arg1;
- (void)onDraggableTaskViewTap:(id)arg1;
- (void)onDraggableTaskViewLongPress:(id)arg1;
- (void)onDraggableTaskViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onDraggableTaskViewDeleteBtnClicked:(id)arg1;
- (void)onTaskStateViewDeleteBtnClicked:(id)arg1;
- (void)onTaskStateViewEntryBtnClicked:(id)arg1;
- (void)onTaskStateViewEntryBtnLongPressed:(id)arg1;
- (void)onTaskStateViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (id)getCurrentForegroundTask;
- (void)removeTaskOrStateViewAnimated:(id)arg1 completion:(id /* block */)arg2;
- (id)getBackgroundTaskList;
- (id)getTask:(id)arg1;
- (id)getAllOutterTaskList;
- (void)setTaskIsForegournd:(BOOL)arg1 taskKey:(id)arg2;
- (id)hasMinimizeTask:(id)arg1;
- (void)minimizeToAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (BOOL)maximizeTask:(id)arg1;
- (BOOL)maximizeTask:(id)arg1 withEnterTaskScene:(unsigned int)arg2;
- (void)resetAdsorbFloatingViewAlphaForCurrentBackgroundTask;
- (void)showAlertTips;
- (BOOL)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
- (void)hideTaskListAndShowAdsorbFloatingViewAnimatedWithExitType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isShowingTaskList;
- (void)showAllBackgroundTaskViewListAnimatedWithCompletion:(id /* block */)arg1;
- (void)tryGenAllTaskAndStateView;
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
- (void)resetAdsorbFloatingViewWithBackgroundTaskList;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList:(id)arg1 Animated:(BOOL)arg2;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList:(id)arg1 Animated:(BOOL)arg2 Duration:(double)arg3;
- (void)animateAbsorbFloatingViewToCurrentBackgroundTaskListWithAnimationType:(int)arg1;
- (void)animateOuterContentTaskAndShowAbsorbFloatingView:(id)arg1 Duration:(double)arg2;
- (void)animateShowRecFloatingViewWithDuration:(double)arg1;
- (void)handleMinimizeEndAnimation:(id)arg1;
- (void)animateShowAbsorbFloatingView:(id)arg1 Duration:(double)arg2 FromFrame:(CGRect)arg3;
- (void)transitionToMaximization:(id)arg1 Duration:(double)arg2;
- (void)setOtherTaskToBackground:(id)arg1;
- (id)getTaskView:(id)arg1;
- (void)animateAbsorbFloatingViewToAlpha:(double)arg1 Duration:(double)arg2;
- (void)makeSureAbsorbFloatingViewInVisibleArea;
- (void)hideTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 Duration:(double)arg2 exitType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)hideOtherTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 CurrentMaximizeTaskView:(id)arg2 Duration:(double)arg3;
- (unsigned long long)positionTypeWithTaskViewFrame:(CGRect)arg1;
- (void)hideAllTaskViewCloseBtn;
- (void)showAllTaskViewCloseBtn;
- (void)beginPopBackGesture:(id)arg1 GestureMode:(int)arg2;
- (unsigned long long)getNormalTaskCount;
- (BOOL)isReachMaxCount;
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
- (BOOL)tryUpdateUIWhenRemoveTask:(id)arg1 IsForground:(BOOL)arg2 animationType:(int)arg3;
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
- (CGRect)getLimitedFrameOfOriginFrame:(CGRect)arg1;
- (void)checkInputviewsTopAndUpdateFloatingViewFrame;
- (double)calcInputViewSafeBottom;
- (void)resetInputViewStatus;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)onOpenMiniTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)absorbFloatingView;
- (void)setAbsorbFloatingView:(id)arg1;
- (id)gestureCircleView;
- (void)setGestureCircleView:(id)arg1;
- (CGPoint)initialAdsorbFloatingViewOrigin;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)maximizeFromView;
- (void)setMaximizeFromView:(id)arg1;
- (id)maximizeFromIcon;
- (void)setMaximizeFromIcon:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundScrollView;
- (void)setBackgroundScrollView:(id)arg1;
- (id)backgroundCloseButton;
- (void)setBackgroundCloseButton:(id)arg1;
- (id)dicTaskKey2TaskViewCache;
- (void)setDicTaskKey2TaskViewCache:(id)arg1;
- (id)draggableTaskViewList;
- (void)setDraggableTaskViewList:(id)arg1;
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
- (id)recordFloatingView;
- (void)setRecordFloatingView:(id)arg1;
- (double)floatViewYBeforeKeyboardShow;
- (void)setFloatViewYBeforeKeyboardShow:(double)arg1;
- (BOOL)hasFloatingViewDraggedWhenKeyboardShow;
- (void)setHasFloatingViewDraggedWhenKeyboardShow:(BOOL)arg1;
- (double)currentInputToolBarTop;
- (void)setCurrentInputToolBarTop:(double)arg1;
- (double)currentSystemKeyboardTop;
- (void)setCurrentSystemKeyboardTop:(double)arg1;
- (id)antiCollisionLogic;
- (void)setAntiCollisionLogic:(id)arg1;
- (void).cxx_destruct;
@end

