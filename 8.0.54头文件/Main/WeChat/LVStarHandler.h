@interface LVStarHandler : NSObject <IMinimizeTaskDelegateInterface>
- (void)markStar:(id)arg1 starContext:(id)arg2 snapshotInfo:(id)arg3 commentScene:(long long)arg4 generateType:(unsigned long long)arg5;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)_openPlayerDetailFromStar:(id)arg1 targetCommentScene:(int)arg2 starContext:(id)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
@end

