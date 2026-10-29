@interface MMCPUCriticalEventDetector : NSObject
{
    unsigned long long m_userType; // +0x8
    unsigned int m_reportCount; // +0x10
    double m_averageUsageMax; // +0x18
    double m_lastReportTime; // +0x20
    MMCPUCriticalEventConfig * m_eventConfig; // +0x28
    MMCPUCriticalEvent * m_pendingEvent; // +0x30
}
- (id)init;
- (unsigned long long)hash;
- (void)detectWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (id)detectWithMetricsInfos:(id)arg1;
- (void)markEventUploaded;
- (void)resetReportCount;
- (unsigned long long)userType;
- (void)setUserType:(unsigned long long)arg1;
- (id)eventConfig;
- (void)setEventConfig:(id)arg1;
- (id)pendingEvent;
- (void)setPendingEvent:(id)arg1;
- (void).cxx_destruct;
@end
