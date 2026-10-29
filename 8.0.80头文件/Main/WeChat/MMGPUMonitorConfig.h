@interface MMGPUMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _criticalEventEnabled; // +0x9
    MMGPUCriticalEventConfig * _criticalEventConfig; // +0x10
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_criticalEventEnabled;
+ (void)PBArrayAdd_criticalEventConfig;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)criticalEventEnabled;
- (void)setCriticalEventEnabled:(BOOL)arg1;
- (id)criticalEventConfig;
- (void)setCriticalEventConfig:(id)arg1;
- (void).cxx_destruct;
@end
