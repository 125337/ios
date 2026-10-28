@interface TPJitterBufferConfig : NSObject
{
    int _minDecreaseDurationMs; // +0x8
    int _maxIncreaseDurationMs; // +0xc
    int _perIncreaseDurationMs; // +0x10
    int _perDecreaseDurationMs; // +0x14
    int _adjustIntervalThresholdMs; // +0x18
    int _frozenThresholdMs; // +0x1c
}
- (id)init;
- (id)description;
- (int)minDecreaseDurationMs;
- (void)setMinDecreaseDurationMs:(int)arg1;
- (int)maxIncreaseDurationMs;
- (void)setMaxIncreaseDurationMs:(int)arg1;
- (int)perIncreaseDurationMs;
- (void)setPerIncreaseDurationMs:(int)arg1;
- (int)perDecreaseDurationMs;
- (void)setPerDecreaseDurationMs:(int)arg1;
- (int)adjustIntervalThresholdMs;
- (void)setAdjustIntervalThresholdMs:(int)arg1;
- (int)frozenThresholdMs;
- (void)setFrozenThresholdMs:(int)arg1;
@end
