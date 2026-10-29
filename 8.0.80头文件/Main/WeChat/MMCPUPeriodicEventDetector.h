@interface MMCPUPeriodicEventDetector : NSObject
{
    double m_lastReportTime; // +0x8
    MMCPUPeriodicEventConfig * m_eventConfig; // +0x10
    MMCPUPeriodicEvent * m_pendingEvent; // +0x18
}
- (id)init;
- (void)detectWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)markEventUploaded;
- (void)resetReportCount;
- (id)eventConfig;
- (void)setEventConfig:(id)arg1;
- (id)pendingEvent;
- (void)setPendingEvent:(id)arg1;
- (void).cxx_destruct;
@end
