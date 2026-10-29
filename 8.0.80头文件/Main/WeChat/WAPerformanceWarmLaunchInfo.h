@interface WAPerformanceWarmLaunchInfo : NSObject
{
    BOOL _isPreRender; // +0x8
    unsigned long long _totalStartTimestampMs; // +0x10
    unsigned long long _totalEndTimestampMs; // +0x18
    unsigned long long _entryPageNavigationType; // +0x20
    unsigned long long _entryPageNavigationStartTimestampMs; // +0x28
}
- (unsigned long long)totalStartTimestampMs;
- (void)setTotalStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)totalEndTimestampMs;
- (void)setTotalEndTimestampMs:(unsigned long long)arg1;
- (BOOL)isPreRender;
- (void)setIsPreRender:(BOOL)arg1;
- (unsigned long long)entryPageNavigationType;
- (void)setEntryPageNavigationType:(unsigned long long)arg1;
- (unsigned long long)entryPageNavigationStartTimestampMs;
- (void)setEntryPageNavigationStartTimestampMs:(unsigned long long)arg1;
@end
