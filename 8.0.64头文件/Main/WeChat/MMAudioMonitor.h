@interface MMAudioMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    MMAudioMonitorConfig * m_config; // +0x10
    MMMetricsRecordDB * m_db; // +0x18
    NSMutableArray * m_unSavedTasks; // +0x20
    void * m_liveTasks; // +0x28
    NSMutableArray * m_liveWebviews; // +0x30
    int m_checkCount; // +0x38
    BOOL m_isBackgroundRunning; // +0x3c
    double m_lastCheckTime; // +0x40
    double m_audioBeginTime; // +0x48
    MMAudioCriticalEvent * m_criticalEvent; // +0x50
    MMStackReportConnection * m_reportConnection; // +0x58
}
+ (void)hook;
+ (id)sharedInstance;
- (void)onWebviewInit:(unsigned long long)arg1;
- (void)onWebviewDealloc:(unsigned long long)arg1;
- (void)collectWebviewPlayingData;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)setRecordDB:(id)arg1;
- (void)collectData;
- (void)collectOtherPlayingData;
- (unsigned long long)taskKeyWith:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (void)onTaskBegin:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (void)onTaskEnd:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (unsigned short)audioPlayingCount;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)arg1;
- (id)stackInfosFromTasks:(id)arg1;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)liveWebviews;
- (void)setLiveWebviews:(id)arg1;
- (void).cxx_destruct;
@end
