@interface TPPlayerSetLoopParams : NSObject
{
    BOOL _loop; // +0x8
    long long _playerId; // +0x10
}
+ (id)makeWithPlayerId:(long long)arg1 loop:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
@end

