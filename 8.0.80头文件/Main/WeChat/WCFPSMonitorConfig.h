@interface WCFPSMonitorConfig : MatrixPluginConfig
{
    BOOL _dumpStacks; // +0x8
    BOOL _autoUpload; // +0x9
    int _dumpInterval; // +0xc
    int _dumpMaxCount; // +0x10
    unsigned long long _trackingType; // +0x18
    double _maxFrameInterval; // +0x20
    double _maxDumpTimestamp; // +0x28
    double _powFactor; // +0x30
}
+ (id)defaultConfigurationForScroll;
+ (id)defaultConfigurationForPreScroll;
+ (id)defaultConfigurationForTransition;
- (unsigned long long)trackingType;
- (void)setTrackingType:(unsigned long long)arg1;
- (BOOL)dumpStacks;
- (void)setDumpStacks:(BOOL)arg1;
- (BOOL)autoUpload;
- (void)setAutoUpload:(BOOL)arg1;
- (int)dumpInterval;
- (void)setDumpInterval:(int)arg1;
- (int)dumpMaxCount;
- (void)setDumpMaxCount:(int)arg1;
- (double)maxFrameInterval;
- (void)setMaxFrameInterval:(double)arg1;
- (double)maxDumpTimestamp;
- (void)setMaxDumpTimestamp:(double)arg1;
- (double)powFactor;
- (void)setPowFactor:(double)arg1;
@end
