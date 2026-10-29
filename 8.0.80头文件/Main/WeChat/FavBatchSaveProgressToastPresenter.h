@interface FavBatchSaveProgressToastPresenter : NSObject <FavBatchSaveTaskMgrObserver>
{
    BOOL _visible; // +0x8
    BOOL _isObservingTask; // +0x9
    BOOL _hasPresentedRunningState; // +0xa
    BOOL _hasPresentedFailureState; // +0xb
    BOOL _hasDismissedFailureState; // +0xc
    UIView * _parentView; // +0x10
    FavBatchSaveTaskMgr * _taskManager; // +0x18
    double _safeBottomInset; // +0x20
    FavBatchSaveProgressToastView * _toastView; // +0x28
    MMToastView * _terminalToast; // +0x30
    unsigned long long _terminalToastGeneration; // +0x38
    FavBatchSaveTaskSnapshot * _presentedFailureSnapshot; // +0x40
}
- (id)initWithParentView:(id)arg1 taskManager:(id)arg2 safeBottomInset:(double)arg3;
- (void)dealloc;
- (void)show;
- (void)hide;
- (void)keepOnTop;
- (void)favBatchSaveTaskMgr:(id)arg1 didUpdateSnapshot:(id)arg2;
- (void)startObservingTask;
- (void)stopObservingTask;
- (void)presentSnapshot:(id)arg1;
- (BOOL)isFailedTerminalSnapshot:(id)arg1;
- (void)presentFailedSnapshot:(id)arg1;
- (void)presentCompletedSnapshot:(id)arg1;
- (void)presentCancelledSnapshot:(id)arg1;
- (void)presentCardForSnapshot:(id)arg1;
- (void)configureHandlersForToastView:(id)arg1;
- (void)reportPresentedFailureSnapshotConfirmation;
- (unsigned long long)pausedReasonForFailureReason:(long long)arg1;
- (void)dismissFailureState;
- (void)showSucceededToast;
- (void)showCancelledToast;
- (void)showTerminalToastWithText:(id)arg1;
- (void)hideTerminalToast;
- (unsigned long long)displayStateForSnapshot:(id)arg1;
- (BOOL)isVisible;
- (void)setVisible:(BOOL)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (id)taskManager;
- (void)setTaskManager:(id)arg1;
- (double)safeBottomInset;
- (void)setSafeBottomInset:(double)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)terminalToast;
- (void)setTerminalToast:(id)arg1;
- (unsigned long long)terminalToastGeneration;
- (void)setTerminalToastGeneration:(unsigned long long)arg1;
- (BOOL)isObservingTask;
- (void)setIsObservingTask:(BOOL)arg1;
- (BOOL)hasPresentedRunningState;
- (void)setHasPresentedRunningState:(BOOL)arg1;
- (BOOL)hasPresentedFailureState;
- (void)setHasPresentedFailureState:(BOOL)arg1;
- (BOOL)hasDismissedFailureState;
- (void)setHasDismissedFailureState:(BOOL)arg1;
- (id)presentedFailureSnapshot;
- (void)setPresentedFailureSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
