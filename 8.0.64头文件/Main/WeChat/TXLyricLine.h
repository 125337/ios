@interface TXLyricLine : NSObject
{
    long long _startTimeMs; // +0x8
    long long _durationMs; // +0x10
    NSArray * _characterArray; // +0x18
}
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (id)characterArray;
- (void)setCharacterArray:(id)arg1;
- (void).cxx_destruct;
@end
