@interface TPPlayerPrepareEndEventInfo : TPPlayerEventInfo
{
    long long _durationMs; // +0x20
    long long _playerType; // +0x28
}
- (id)init;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
@end

