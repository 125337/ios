@interface TPPlayerSetPlayRangeParams : NSObject
{
    long long _playerId; // +0x8
    long long _startTimeMs; // +0x10
    long long _endTimeMs; // +0x18
}
+ (id)makeWithPlayerId:(long long)arg1 startTimeMs:(long long)arg2 endTimeMs:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)endTimeMs;
- (void)setEndTimeMs:(long long)arg1;
@end
