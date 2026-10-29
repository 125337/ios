@interface MMAudioMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    MMAudioMonitorConfig * m_config; // +0x10
    MMMetricsRecordDB * m_db; // +0x18
    NSMutableArray * m_unsavedTasks; // +0x20
    void * m_liveTasks; // +0x28
    NSMutableArray * m_liveWebviews; // +0x30
    MMAudioCriticalEventDetector * m_criticalEventDetector; // +0x38
    MMStackReportConnection * m_reportConnection; // +0x40
    float m_cachedOutputVolume; // +0x48
    long long m_cachedSessionRoute; // +0x50
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
- (void)updateAudioStatus;
- (void)collectData;
- (void)updateTasks;
- (void)collectOtherPlayingData;
- (unsigned long long)taskKeyWith:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (void)onTaskBegin:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (void)onTaskEnd:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (unsigned short)audioPlayingCount;
- (long long)calcSessionRoute;
- (long long)currentSessionRoute;
- (float)calcOutputVolume;
- (float)currentOutputVolume;
- (void)handleRouteChangeNotification:(id)arg1;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onOtherAudioPlayingBegin;
- (void)onOtherAudioPlayingEnd;
- (void)checkEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)uploadPendingEvents;
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
