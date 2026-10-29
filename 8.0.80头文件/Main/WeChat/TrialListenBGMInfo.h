@interface TrialListenBGMInfo : NSObject
{
    NSString * _trialMusicFilePath; // +0x8
    long long _startTime; // +0x10
    long long _duration; // +0x18
}
+ (id)createTrialBGMInfoWithSong:(id)arg1;
- (long long)endTime;
- (id)trialMusicFilePath;
- (void)setTrialMusicFilePath:(id)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (void).cxx_destruct;
@end
