@interface MMNetworkMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    unsigned int _checkTime; // +0xc
    unsigned int _checkCount; // +0x10
    unsigned int _reportLimit; // +0x14
    unsigned long long _criticalUsage; // +0x18
    unsigned long long _voipUsage; // +0x20
    unsigned long long _liveUsage; // +0x28
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_voipUsage;
+ (void)PBArrayAdd_liveUsage;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (id)generateEventConfig;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (unsigned int)checkTime;
- (void)setCheckTime:(unsigned int)arg1;
- (unsigned int)checkCount;
- (void)setCheckCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
- (unsigned long long)criticalUsage;
- (void)setCriticalUsage:(unsigned long long)arg1;
- (unsigned long long)voipUsage;
- (void)setVoipUsage:(unsigned long long)arg1;
- (unsigned long long)liveUsage;
- (void)setLiveUsage:(unsigned long long)arg1;
@end

