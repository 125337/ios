@interface MinimizationWindow : NSObject <MinimizeVCDelegate, WAMainFrameTaskBarViewActionExt, MMInputToolViewExt, FullScreenOccupyEvent, iConsoleWindowExt, IMMWindowMgrExt>
{
    BOOL _needCheckHidden; // +0x8
    BOOL _isAnimatingHidden; // +0x9
    BOOL _isShowingRecordOperateView; // +0xa
    id <MinimizeWindowDelegate> _delegate; // +0x10
    MinimizeViewController * _minimizeVC; // +0x18
    long long _statusBarOrientation; // +0x20
    CGRect _inputToolFrame; // +0x28
}
- (id)initWithDataSource:(id)arg1;
- (void)attachToTopWindow;
- (void)dettachSelf;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (void)makeKeyWindow;
- (void)forceFinishWindowEndState;
- (void)configWindowEndStateWithAnimationDuration:(double)arg1;
- (void)configWindowEndState;
- (void)configWindowEndStateAfterDelay:(double)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)minimizeToAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (void)hideTaskListAndShowAdsorbFloatingViewAnimatedWithExitType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)onMinimizeAnimationEnd:(id)arg1;
- (BOOL)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
- (void)bringToFront;
- (void)willStatusBarOrientationChanged:(id)arg1;
- (void)onFloatingViewTap:(id)arg1 FromFloatingView:(id)arg2 WillEnterBackgroundTaskKey:(id)arg3 EnterTaskScene:(unsigned int)arg4;
- (void)onFloatingViewMoveToTrash:(id)arg1;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(BOOL)arg2;
- (void)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onClearPendingTask:(id)arg1 bAddNewTask:(BOOL)arg2;
- (void)onUpdateAbsorbFloatingViewLastPosition:(CGPoint)arg1 moveContext:(id)arg2;
- (void)onEnterTaskList;
- (void)onExitTaskListPage:(unsigned long long)arg1 ExitType:(unsigned long long)arg2;
- (void)onOuterContentViewSizeDidChanged:(id)arg1 From:(CGSize)arg2 To:(CGSize)arg3;
- (void)onTaskCountExceedMaxWhenSlideToAddNewTask:(id)arg1;
- (void)onRecordTipsFloatingViewHidden;
- (void)onAbsorbFloatingViewFoldStateChange:(BOOL)arg1;
- (void)onRemoveCurrentOuterContentTask;
- (void)transitionToMinimization:(id)arg1 Duration:(double)arg2 FromFrame:(CGRect)arg3 toFrame:(CGRect)arg4;
- (void)transitionToMaximization:(id)arg1 Duration:(double)arg2;
- (id)getMinimizeTransitionFloatingView:(id)arg1;
- (id)getMaximizeTransitionFloatingView:(id)arg1;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (CGRect)getConvertedVisibleFrame:(id)arg1;
- (CGRect)getConvertedVisibleFrame:(id)arg1 toWindow:(id)arg2;
- (CGRect)getConvertedFloatingIconFrame;
- (void)beginPopBackGesture:(id)arg1 GestureMode:(int)arg2;
- (void)slideToShowAdsorbFloatingView:(id)arg1 Progress:(double)arg2;
- (void)endSlideToShowAdsorbFloatingView:(id)arg1 isComplete:(BOOL)arg2;
- (BOOL)canSwipeToAddMinimize:(id)arg1 Progress:(double)arg2 TouchPoint:(CGPoint)arg3 ShouldCancel:(BOOL *)arg4;
- (void)endSwipeToAddMinimize:(id)arg1 isComplete:(BOOL)arg2 pendingTaskContext:(id)arg3;
- (BOOL)updateAddMinimizeWithProgress:(double)arg1 TouchPoint:(CGPoint)arg2 ShouldCancel:(BOOL *)arg3;
- (void)endAddMinimizeComplete:(BOOL)arg1;
- (void)beginAddMinimizeInteraction;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)onShowRecordOperateView;
- (void)onHiddenRecordOperateView;
- (void)onFullScreenOccupy;
- (void)onExitFullScreenOccupy;
- (void)onRootViewControllerDidChangedFrom:(id)arg1 to:(id)arg2;
- (void)onWindowLevelChanged;
- (id)getAttachWindow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)minimizeVC;
- (void)setMinimizeVC:(id)arg1;
- (BOOL)needCheckHidden;
- (void)setNeedCheckHidden:(BOOL)arg1;
- (BOOL)isAnimatingHidden;
- (void)setIsAnimatingHidden:(BOOL)arg1;
- (CGRect)inputToolFrame;
- (void)setInputToolFrame:(CGRect)arg1;
- (long long)statusBarOrientation;
- (void)setStatusBarOrientation:(long long)arg1;
- (BOOL)isShowingRecordOperateView;
- (void)setIsShowingRecordOperateView:(BOOL)arg1;
- (void).cxx_destruct;
@end

