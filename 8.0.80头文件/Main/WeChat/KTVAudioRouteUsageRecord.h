@interface KTVAudioRouteUsageRecord : NSObject
{
    long long _audioRoute; // +0x8
    double _useBeginTime; // +0x10
    double _sumUsageDuration; // +0x18
}
- (id)initWithAudioRoute:(long long)arg1;
- (void)onSongPlayingChanged:(BOOL)arg1;
- (unsigned int)getSumUsageDurationUntilCurrent;
- (id)description;
- (long long)audioRoute;
- (void)setAudioRoute:(long long)arg1;
- (double)useBeginTime;
- (void)setUseBeginTime:(double)arg1;
- (double)sumUsageDuration;
- (void)setSumUsageDuration:(double)arg1;
@end
