@interface MMLiteAppMinimizeMgr : MMUserService <MMServiceProtocol, IMinimizeTaskDelegateInterface>
+ (id)dictFromString:(id)arg1;
+ (TaskDataParams)parseTaskDataParams:(id)arg1;
+ (id)uniqueKeyWithBizName:(id)arg1 withType:(id)arg2 withAppId:(id)arg3 withPage:(id)arg4 withQuery:(id)arg5 orKey:(id)arg6;
+ (id)taskContextDataWithAppId:(id)arg1 withPage:(id)arg2 withQuery:(id)arg3 withExtraData:(id)arg4;
+ (long long)getLiteAppKeepAliveGroup:(unsigned int)arg1;
+ (id)parseTaskContextData:(id)arg1;
+ (id)genMinimizeTaskData:(BOOL)arg1 taskDataParams:(TaskDataParams)arg2 bizName:(id)arg3 bizKey:(id)arg4 appId:(id)arg5 page:(id)arg6 query:(id)arg7;
+ (id)updateMinimizeTaskData:(BOOL)arg1 taskDataParams:(TaskDataParams)arg2 bizName:(id)arg3 bizKey:(id)arg4 appId:(id)arg5 page:(id)arg6 query:(id)arg7;
+ (id)getTaskBizName:(id)arg1;
+ (void)installMMLiteAppViewControllerTransition:(id)arg1 taskData:(id)arg2;
+ (void)uninstallMMLiteAppViewControllerTransition:(id)arg1;
+ (void)updateTaskSnapshot:(id)arg1 taskData:(id)arg2;
+ (void)publishAddTaskEvent:(id)arg1 type:(id)arg2 reason:(id)arg3;
- (void)addTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (void)updateTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (void)removeTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (void)prepareTask:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 params:(id)arg5;
- (id)getTaskSwitch;
- (id)getTaskState:(id)arg1 appUuid:(unsigned int)arg2 page:(id)arg3 query:(id)arg4 key:(id)arg5;
- (void)transitionToTask:(id)arg1 taskData:(id)arg2;
- (void)tryAddTaskAndMinimize:(id)arg1 NotiDelegate:(id)arg2 controller:(id)arg3;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
@end
