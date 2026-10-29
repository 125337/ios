@interface MMNetworkMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _criticalEventEnabled; // +0x9
    unsigned long long _voipUsage; // +0x10
    unsigned long long _liveUsage; // +0x18
    MMNetworkCriticalEventConfig * _criticalEventConfig; // +0x20
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_voipUsage;
+ (void)PBArrayAdd_liveUsage;
+ (void)PBArrayAdd_criticalEventEnabled;
+ (void)PBArrayAdd_criticalEventConfig;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (unsigned long long)voipUsage;
- (void)setVoipUsage:(unsigned long long)arg1;
- (unsigned long long)liveUsage;
- (void)setLiveUsage:(unsigned long long)arg1;
- (BOOL)criticalEventEnabled;
- (void)setCriticalEventEnabled:(BOOL)arg1;
- (id)criticalEventConfig;
- (void)setCriticalEventConfig:(id)arg1;
- (void).cxx_destruct;
@end
