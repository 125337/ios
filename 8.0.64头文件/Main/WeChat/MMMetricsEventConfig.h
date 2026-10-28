@interface MMMetricsEventConfig : NSObject
{
    BOOL _enableCPUEvent; // +0x8
    BOOL _enableGPUEvent; // +0x9
    BOOL _enableNetworkEvent; // +0xa
    unsigned int _reportLimitForCPUEvent; // +0xc
    unsigned int _checkTimeForCPUEvent; // +0x10
    unsigned int _reportLimitForGPUEvent; // +0x14
    unsigned int _checkTimeForGPUEvent; // +0x18
    unsigned int _reportLimitForNetworkEvent; // +0x1c
    unsigned int _checkTimeForNetworkEvent; // +0x20
    unsigned long long _eventTag; // +0x28
    unsigned long long _eventSubTag; // +0x30
    double _reportRatio; // +0x38
    double _criticalUsageForCPUEvent; // +0x40
    double _criticalUsageForGPUEvent; // +0x48
    double _criticalUsageForNetworkEvent; // +0x50
}
- (unsigned long long)eventTag;
- (void)setEventTag:(unsigned long long)arg1;
- (unsigned long long)eventSubTag;
- (void)setEventSubTag:(unsigned long long)arg1;
- (double)reportRatio;
- (void)setReportRatio:(double)arg1;
- (BOOL)enableCPUEvent;
- (void)setEnableCPUEvent:(BOOL)arg1;
- (unsigned int)reportLimitForCPUEvent;
- (void)setReportLimitForCPUEvent:(unsigned int)arg1;
- (unsigned int)checkTimeForCPUEvent;
- (void)setCheckTimeForCPUEvent:(unsigned int)arg1;
- (double)criticalUsageForCPUEvent;
- (void)setCriticalUsageForCPUEvent:(double)arg1;
- (BOOL)enableGPUEvent;
- (void)setEnableGPUEvent:(BOOL)arg1;
- (unsigned int)reportLimitForGPUEvent;
- (void)setReportLimitForGPUEvent:(unsigned int)arg1;
- (unsigned int)checkTimeForGPUEvent;
- (void)setCheckTimeForGPUEvent:(unsigned int)arg1;
- (double)criticalUsageForGPUEvent;
- (void)setCriticalUsageForGPUEvent:(double)arg1;
- (BOOL)enableNetworkEvent;
- (void)setEnableNetworkEvent:(BOOL)arg1;
- (unsigned int)reportLimitForNetworkEvent;
- (void)setReportLimitForNetworkEvent:(unsigned int)arg1;
- (unsigned int)checkTimeForNetworkEvent;
- (void)setCheckTimeForNetworkEvent:(unsigned int)arg1;
- (double)criticalUsageForNetworkEvent;
- (void)setCriticalUsageForNetworkEvent:(double)arg1;
@end
