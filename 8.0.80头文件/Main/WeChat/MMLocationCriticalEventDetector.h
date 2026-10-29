@interface MMLocationCriticalEventDetector : NSObject
{
    int m_checkCount; // +0x8
    int m_reportCount; // +0xc
    double m_locationBeginTime; // +0x10
    MMLocationCriticalEventConfig * m_eventConfig; // +0x18
    MMLocationCriticalEvent * m_pendingEvent; // +0x20
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
