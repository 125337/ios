@interface MMNetworkCriticalEventConfig : NSObject
{
    unsigned int _checkTime; // +0x8
    unsigned int _checkCount; // +0xc
    unsigned int _reportLimit; // +0x10
    unsigned int _reportCount; // +0x14
    unsigned long long _eventTag; // +0x18
    unsigned long long _eventSubTag; // +0x20
    unsigned long long _criticalUsage; // +0x28
    double _reportRatio; // +0x30
    double _lastReportTime; // +0x38
    MMNetworkCriticalEvent * _criticalEvent; // +0x40
}
- (unsigned long long)eventTag;
- (void)setEventTag:(unsigned long long)arg1;
- (unsigned long long)eventSubTag;
- (void)setEventSubTag:(unsigned long long)arg1;
- (unsigned int)checkTime;
- (void)setCheckTime:(unsigned int)arg1;
- (unsigned int)checkCount;
- (void)setCheckCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
- (unsigned int)reportCount;
- (void)setReportCount:(unsigned int)arg1;
- (unsigned long long)criticalUsage;
- (void)setCriticalUsage:(unsigned long long)arg1;
- (double)reportRatio;
- (void)setReportRatio:(double)arg1;
- (double)lastReportTime;
- (void)setLastReportTime:(double)arg1;
- (id)criticalEvent;
- (void)setCriticalEvent:(id)arg1;
- (void).cxx_destruct;
@end
