@interface TPPlayerSetMuteParams : NSObject
{
    BOOL _mute; // +0x8
    long long _playerId; // +0x10
}
+ (id)makeWithPlayerId:(long long)arg1 mute:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (BOOL)mute;
- (void)setMute:(BOOL)arg1;
@end

