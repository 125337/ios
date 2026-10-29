@interface TPPlayerScaleTypeParams : NSObject
{
    long long _playerId; // +0x8
    long long _scaleType; // +0x10
}
+ (id)makeWithPlayerId:(long long)arg1 scaleType:(long long)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)scaleType;
- (void)setScaleType:(long long)arg1;
@end

