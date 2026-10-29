@interface MinimizeTaskDataSyncUtil : NSObject
+ (id)transformAffStarDataToMinimizeTaskData:(id)arg1;
+ (id)transformMinimizeTaskDataToAffStarData:(id)arg1;
+ (unsigned int)getTaskBizTypeInTaskData:(id)arg1;
+ (id)bussinessTypeToBizName:(unsigned int)arg1;
+ (unsigned int)bussinessTypeForBizName:(id)arg1;
+ (id)notiDelegateClassNameForBizName:(unsigned int)arg1;
+ (id)transformMiniTaskToRemoteBizData:(id)arg1;
+ (void)transformRemoteBizData:(id)arg1 toTaskData:(id)arg2;
@end
