@interface MiniTaskLaunchStarNavController : MiniTaskNavigationController
{
    BOOL _disableStarFloatingCheck; // +0x8
    BOOL _shouldShowAddStarCorner; // +0x9
    BOOL _hasActivateMinimizeInPop; // +0xa
    NSObject<IMinimizeTaskDelegateInterface> * _restoreNotifyDelegate; // +0x10
    UIImage * _restoreSnapshotImage; // +0x18
}
- (void)setTransitionContext:(id)arg1;
- (void)onMiniInteractiveTransitionBegin:(id)arg1;
- (void)onMiniInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3;
- (void)onMiniInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onMiniInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)performInteractiveMinimizationTansition;
- (BOOL)disableStarFloatingCheck;
- (void)setDisableStarFloatingCheck:(BOOL)arg1;
- (BOOL)shouldShowAddStarCorner;
- (void)setShouldShowAddStarCorner:(BOOL)arg1;
- (BOOL)hasActivateMinimizeInPop;
- (void)setHasActivateMinimizeInPop:(BOOL)arg1;
- (id)restoreNotifyDelegate;
- (void)setRestoreNotifyDelegate:(id)arg1;
- (id)restoreSnapshotImage;
- (void)setRestoreSnapshotImage:(id)arg1;
- (void).cxx_destruct;
@end
