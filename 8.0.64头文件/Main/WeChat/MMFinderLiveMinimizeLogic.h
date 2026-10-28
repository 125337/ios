@interface MMFinderLiveMinimizeLogic : MinimizeTaskBaseLogicController <IMinimizeTaskDelegateInterface>
+ (void)updateRecentUserdRecordWithLiveTask:(id)arg1;
+ (void)updateRecentUserdRecordWithDataItem:(id)arg1;
+ (id)generateTaskDataWithDataItem:(id)arg1;
+ (void)enterMMFinderLiveWithDataItems:(id)arg1 selectIndex:(id)arg2;
+ (id)getDataItemFromTaskData:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
@end
