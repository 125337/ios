@interface TXChorusLyricCharacter : NSObject
{
    long long _startTimeMs; // +0x8
    long long _durationMs; // +0x10
    NSString * _utf8Character; // +0x18
}
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (id)utf8Character;
- (void)setUtf8Character:(id)arg1;
- (void).cxx_destruct;
@end
