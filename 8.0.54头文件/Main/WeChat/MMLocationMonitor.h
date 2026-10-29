@interface MMLocationMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    MMLocationMonitorConfig * m_config; // +0x10
    MMMetricsRecordDB * m_db; // +0x18
    NSMutableArray * m_unSavedTasks; // +0x20
    void * m_liveTasks; // +0x28
    int m_checkCount; // +0x30
    double m_locationBeginTime; // +0x38
    MMLocationCriticalEvent * m_criticalEvent; // +0x40
    MMStackReportConnection * m_reportConnection; // +0x48
}
+ (void)hook;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)setRecordDB:(id)arg1;
- (void)collectData;
- (void)onTaskBegin:(id)arg1;
- (void)onTaskEnd:(id)arg1;
- (unsigned short)locationRetrievingCount;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)arg1;
- (id)stackInfosFromTasks:(id)arg1;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

