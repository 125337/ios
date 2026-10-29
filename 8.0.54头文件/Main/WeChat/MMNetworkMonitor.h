@interface MMNetworkMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    MMNetworkMonitorConfig * m_config; // +0x10
    MMMetricsNetworkDB * m_db; // +0x18
    NSMutableArray * m_samplesToInsert; // +0x20
    void * m_socketConnections; // +0x28
    void * m_socketSamplesToMerge; // +0x30
    void * m_httpSamplesToMerge; // +0x38
    BOOL m_isOnWifi; // +0x40
    NSTimer * m_timer; // +0x48
    MMNetworkStatistics * m_currAppNetworkUsage; // +0x50
    MMNetworkStatistics * m_lastDeviceNetworkStatistics; // +0x58
    MMNetworkStatistics * m_currDeviceNetworkStatistics; // +0x60
    void * m_eventConfigs; // +0x68
    MMStackReportConnection * m_reportConnection; // +0x70
}
+ (void)hook;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setNetworkDB:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)socketConnectionBySockfd:(int)arg1;
- (void)onSocketCreate:(int)arg1;
- (void)onSocketAccept:(int)arg1 addr:(const void *)arg2 addrlen:(unsigned int *)arg3;
- (void)onSocketBind:(int)arg1 addr:(const void *)arg2 addrlen:(unsigned int)arg3;
- (void)onSocketConnect:(int)arg1 addr:(const void *)arg2 addrlen:(unsigned int)arg3;
- (BOOL)shouldFilter:(const void *)arg1;
- (void)onSocketProcess:(int)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3 addr:(const void *)arg4;
- (void)onSocketClose:(int)arg1;
- (void)onURLConnectionStart:(id)arg1;
- (void)onURLConnectionProcess:(id)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)onURLSessionTaskStart:(id)arg1;
- (void)onURLSessionTaskProcess:(id)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)onHttpRequest:(id)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)_httpRequest:(id)arg1 callerStack:(id)arg2 sendBytes:(unsigned long long)arg3 recvBytes:(unsigned long long)arg4;
- (id)samplesToSave;
- (void)saveData;
- (id)currentAppNetworkUsage;
- (id)currentDeviceNetworkUsage;
- (void)resetNetworkUsage;
- (void)refreshNetworkStatus;
- (void)handleApplicationDidBecomeActiveNotification;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (id)checkCriticalEventWithConfig:(id)arg1 userType:(unsigned long long)arg2 metricsInfos:(id)arg3;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)arg1;
- (id)stackInfosFromSamples:(id)arg1;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

