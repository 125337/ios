@interface MinimizeReportUtil : NSObject
+ (id)genSessionId;
+ (id)genAggreSessionId;
+ (void)reportNewTask:(id)arg1;
+ (void)reportExitTaskListPage:(id)arg1;
+ (void)reportOpTask:(id)arg1;
+ (void)reportMoveContainer:(id)arg1 toPoint:(CGPoint)arg2 aggreSessionId:(id)arg3 arrTaskSessionId:(id)arg4;
+ (id)moveContainerPositionDescFromPoint:(CGPoint)arg1;
@end

