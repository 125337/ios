@interface TXReferencePitch : NSObject
{
    long long _startTimeMs; // +0x8
    long long _durationMs; // +0x10
    long long _referencePitch; // +0x18
}
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (long long)referencePitch;
- (void)setReferencePitch:(long long)arg1;
@end
