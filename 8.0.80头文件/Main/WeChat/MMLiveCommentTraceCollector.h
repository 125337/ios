@interface MMLiveCommentTraceCollector : NSObject
{
    BOOL _isReporting; // +0x8
    BOOL _isStopped; // +0x9
    BOOL _hasScheduledReport; // +0xa
    MMFinderLiveTaskId * _taskId; // +0x10
    NSMutableArray * _traceRecords; // +0x18
    unsigned long long _lastReportTimeMs; // +0x20
}
+ (BOOL)shouldReportSenderTraceWithTask:(id)arg1;
+ (BOOL)shouldReportReceiverTraceWithTask:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)addSenderTraceWithLocalClientMsgId:(id)arg1 stageId:(unsigned int)arg2 ts:(unsigned long long)arg3 cliTimestampMs:(unsigned long long)arg4;
- (void)addReceiverTraceWithSeq:(unsigned long long)arg1 stageId:(unsigned int)arg2 ts:(unsigned long long)arg3 cliTimestampMs:(unsigned long long)arg4;
- (void)scheduleReportAfterDelay:(double)arg1;
- (void)cancelScheduledReport;
- (void)checkAndTriggerReport;
- (void)triggerReport;
- (id)buildLatencyInfosFromRecords:(id)arg1;
- (void)sendReportWithScene:(int)arg1 latencyInfos:(id)arg2;
- (void)flushOnExitLive;
- (void)stop;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)traceRecords;
- (void)setTraceRecords:(id)arg1;
- (unsigned long long)lastReportTimeMs;
- (void)setLastReportTimeMs:(unsigned long long)arg1;
- (BOOL)isReporting;
- (void)setIsReporting:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (BOOL)hasScheduledReport;
- (void)setHasScheduledReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
