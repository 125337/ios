@interface WCLoopActionMetrics : NSObject
{
    double _beginTimeInCurrentLoop; // +0x8
    double _averageDuration; // +0x10
    NSString * _key; // +0x18
    double _accumulatedDuration; // +0x20
    double _maxDuration; // +0x28
    double _minDuration; // +0x30
    unsigned long long _accumulatedCount; // +0x38
}
- (id)init;
- (id)initWithKey:(id)arg1;
- (void)didBeginInCurrentLoop:(double)arg1;
- (void)didEndInCurrentLoop:(double)arg1;
- (void)didEndInCurrentLoop:(double)arg1 actionCount:(unsigned long long)arg2;
- (void)didRecordDurationInCurrentLoop:(double)arg1;
- (void)didRecordDurationInCurrentLoop:(double)arg1 actionCount:(unsigned long long)arg2;
- (double)averageDuration;
- (id)key;
- (double)accumulatedDuration;
- (double)maxDuration;
- (double)minDuration;
- (unsigned long long)accumulatedCount;
- (void).cxx_destruct;
@end
