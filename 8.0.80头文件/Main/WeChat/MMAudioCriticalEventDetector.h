@interface MMAudioCriticalEventDetector : NSObject
{
    int m_checkCount; // +0x8
    int m_reportCount; // +0xc
    double m_lastCheckTime; // +0x10
    double m_audioBeginTime; // +0x18
    MMAudioCriticalEventConfig * m_eventConfig; // +0x20
    MMAudioCriticalEvent * m_pendingEvent; // +0x28
}
- (void)detectWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)markEventUploaded;
- (void)resetReportCount;
- (id)eventConfig;
- (void)setEventConfig:(id)arg1;
- (id)pendingEvent;
- (void)setPendingEvent:(id)arg1;
- (void).cxx_destruct;
@end
