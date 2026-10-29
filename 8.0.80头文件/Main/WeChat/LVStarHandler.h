@interface LVStarHandler : MinimizeTaskBaseLogicController <IMinimizeTaskDelegateInterface>
- (void)markStar:(id)arg1 starContext:(id)arg2 snapshotInfo:(id)arg3 commentScene:(long long)arg4 generateType:(unsigned long long)arg5 fromViewController:(id)arg6;
- (BOOL)hasStar:(id)arg1 commentScene:(long long)arg2;
- (void)removeStar:(id)arg1 commentScene:(long long)arg2;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (BOOL)canDirectLaunchInMainFrame:(id)arg1;
@end
