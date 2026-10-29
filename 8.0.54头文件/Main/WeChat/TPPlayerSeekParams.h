@interface TPPlayerSeekParams : NSObject
{
    BOOL _isManualSeek; // +0x8
    long long _playerId; // +0x10
    long long _timeMs; // +0x18
}
+ (id)makeWithPlayerId:(long long)arg1 timeMs:(long long)arg2 isManualSeek:(BOOL)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)timeMs;
- (void)setTimeMs:(long long)arg1;
- (BOOL)isManualSeek;
- (void)setIsManualSeek:(BOOL)arg1;
@end

