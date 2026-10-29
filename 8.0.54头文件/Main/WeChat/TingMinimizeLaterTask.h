@interface TingMinimizeLaterTask : MinimizeTaskBaseLogicController
+ (BOOL)enableListenMinimizeTask;
+ (void)removeMinimizeTaskWithListenItem:(id)arg1;
+ (void)addMinimizeTaskWithListenItem:(id)arg1 scene:(long long)arg2 fromView:(id)arg3;
+ (id)minimizeTaskDataWithListenItem:(id)arg1 scene:(long long)arg2;
+ (void)updateTaskSnapshotWithListemItem:(id)arg1 taskData:(id)arg2;
+ (void)updateTaskSnapshotWithCoverImage:(id)arg1 taskData:(id)arg2;
+ (id)parseItemFromTaskData:(id)arg1;
+ (id)reportParamFromListenItem:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)updateSnapshotIfNeed:(id)arg1 preferredSize:(CGSize)arg2;
@end

