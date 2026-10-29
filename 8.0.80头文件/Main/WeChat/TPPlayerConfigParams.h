@interface TPPlayerConfigParams : NSObject
{
    float _reduceLatencySpeed; // +0x8
    long long _bufferMinTotalDurationMs; // +0x10
    long long _bufferMaxTotalDurationMs; // +0x18
    long long _preloadTotalDurationMs; // +0x20
    long long _minBufferingDurationMs; // +0x28
    long long _minBufferingTimeMs; // +0x30
    long long _maxBufferingTimeMs; // +0x38
    long long _reduceLatencyAction; // +0x40
    long long _bufferStrategy; // +0x48
}
- (id)init;
- (long long)bufferMinTotalDurationMs;
- (void)setBufferMinTotalDurationMs:(long long)arg1;
- (long long)bufferMaxTotalDurationMs;
- (void)setBufferMaxTotalDurationMs:(long long)arg1;
- (long long)preloadTotalDurationMs;
- (void)setPreloadTotalDurationMs:(long long)arg1;
- (long long)minBufferingDurationMs;
- (void)setMinBufferingDurationMs:(long long)arg1;
- (long long)minBufferingTimeMs;
- (void)setMinBufferingTimeMs:(long long)arg1;
- (long long)maxBufferingTimeMs;
- (void)setMaxBufferingTimeMs:(long long)arg1;
- (long long)reduceLatencyAction;
- (void)setReduceLatencyAction:(long long)arg1;
- (float)reduceLatencySpeed;
- (void)setReduceLatencySpeed:(float)arg1;
- (long long)bufferStrategy;
- (void)setBufferStrategy:(long long)arg1;
@end
