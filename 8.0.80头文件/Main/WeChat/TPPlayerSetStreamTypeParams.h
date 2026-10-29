@interface TPPlayerSetStreamTypeParams : NSObject
{
    long long _playerId; // +0x8
    long long _streamType; // +0x10
}
+ (id)makeWithPlayerId:(long long)arg1 streamType:(long long)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)streamType;
- (void)setStreamType:(long long)arg1;
@end
