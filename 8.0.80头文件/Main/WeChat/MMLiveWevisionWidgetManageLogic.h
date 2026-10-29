@interface MMLiveWevisionWidgetManageLogic : NSObject
{
    MMLiveTaskId * _taskId; // +0x8
    OrderedDictionary * _widgetDict; // +0x10
    NSRecursiveLock * _widgetDictLock; // +0x18
    NSMutableArray * _clearTaskList; // +0x20
    NSRecursiveLock * _clearTaskListLock; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultData;
- (void)addWevisionWidget:(id)arg1;
- (void)insertWevisionWidgetToBack:(id)arg1;
- (void)removeWevisionWidget:(id)arg1;
- (void)removeWevisionWidgetWithId:(id)arg1;
- (id)getWevisionWidgetList;
- (void)clear;
- (id)liveTask;
- (id)createRenderTaskForWidgetUseCache:(id)arg1;
- (void)changeRenderTaskToMostPrior:(id)arg1;
- (void)changeRenderTaskToLeastPrior:(id)arg1;
- (void)increaseUpdatePriorForExistRenderTasksFromBase:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)widgetDict;
- (void)setWidgetDict:(id)arg1;
- (id)widgetDictLock;
- (void)setWidgetDictLock:(id)arg1;
- (id)clearTaskList;
- (void)setClearTaskList:(id)arg1;
- (id)clearTaskListLock;
- (void)setClearTaskListLock:(id)arg1;
- (void).cxx_destruct;
@end
