@interface WCFinderLiveCommentMetricsReporter : NSObject
+ (BOOL)isCommentMetricsEnabledForLiveTaskId:(id)arg1;
+ (void)reportCommentMetricsForCalcCellFramesWithLiveTaskId:(id)arg1 loopMetrics:(id)arg2 commentTableVM:(id)arg3;
+ (void)reportCommentMetricsForCalcCellFramesWithLiveTask:(id)arg1 loopMetrics:(id)arg2 commentTableVM:(id)arg3;
@end

