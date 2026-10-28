@interface TPLiveReportParamRecord : NSObject
{
    long long _prepareEndSinceBootTimeMs; // +0x8
    long long _playerFirstStartSinceBootTimeMs; // +0x10
    long long _playerStartSinceBootTimeMs; // +0x18
    long long _retentionDurationMs; // +0x20
    long long _bufferingStartSinceBootTimeMs; // +0x28
    long long _periodBufferingTotalDurationMs; // +0x30
    long long _periodBufferingCount; // +0x38
    long long _periodPlayedDurationMs; // +0x40
}
- (long long)prepareEndSinceBootTimeMs;
- (void)setPrepareEndSinceBootTimeMs:(long long)arg1;
- (long long)playerFirstStartSinceBootTimeMs;
- (void)setPlayerFirstStartSinceBootTimeMs:(long long)arg1;
- (long long)playerStartSinceBootTimeMs;
- (void)setPlayerStartSinceBootTimeMs:(long long)arg1;
- (long long)retentionDurationMs;
- (void)setRetentionDurationMs:(long long)arg1;
- (long long)bufferingStartSinceBootTimeMs;
- (void)setBufferingStartSinceBootTimeMs:(long long)arg1;
- (long long)periodBufferingTotalDurationMs;
- (void)setPeriodBufferingTotalDurationMs:(long long)arg1;
- (long long)periodBufferingCount;
- (void)setPeriodBufferingCount:(long long)arg1;
- (long long)periodPlayedDurationMs;
- (void)setPeriodPlayedDurationMs:(long long)arg1;
@end
