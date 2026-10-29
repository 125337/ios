@interface TPPlayerRenderEffect : NSObject
{
    long long _playerId; // +0x8
    long long _effectId; // +0x10
    long long _effectType; // +0x18
    long long _startTimeMs; // +0x20
    long long _endTimeMs; // +0x28
    NSDictionary * _params; // +0x30
}
+ (id)makeWithPlayerId:(long long)arg1 effectId:(long long)arg2 effectType:(long long)arg3 startTimeMs:(long long)arg4 endTimeMs:(long long)arg5 params:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)effectId;
- (void)setEffectId:(long long)arg1;
- (long long)effectType;
- (void)setEffectType:(long long)arg1;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)endTimeMs;
- (void)setEndTimeMs:(long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

