@interface EdgeComputingThresholdRecord : NSObject
{
    unsigned long long _thresholdTime; // +0x8
    unsigned long long _thresholdCount; // +0x10
}
- (unsigned long long)thresholdTime;
- (void)setThresholdTime:(unsigned long long)arg1;
- (unsigned long long)thresholdCount;
- (void)setThresholdCount:(unsigned long long)arg1;
@end
