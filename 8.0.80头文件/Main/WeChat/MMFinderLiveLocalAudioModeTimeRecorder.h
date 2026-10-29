@interface MMFinderLiveLocalAudioModeTimeRecorder : NSObject
{
    BOOL _isAudienceLocalAudioMode; // +0x8
    unsigned long long _totalTime; // +0x10
    unsigned long long _minimizeModeTime; // +0x18
    unsigned long long _backgroundTime; // +0x20
    unsigned long long _localAudioModeStartTime; // +0x28
    unsigned long long _minimizeModeStartTime; // +0x30
    unsigned long long _backgroundStartTime; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground;
- (void)onApplicationWillEnterForeground;
- (unsigned long long)liveRoomTime;
- (void)updateIsAudienceLocalAudioMode:(BOOL)arg1;
- (void)resetTimeValuesWithCurrentTime:(unsigned long long)arg1;
- (void)calculateAndClearTimeValuesWithCurrentTime:(unsigned long long)arg1;
- (void)notifyBackgroundStateChangedTo:(BOOL)arg1;
- (void)notifyMinimizeModeChangedTo:(BOOL)arg1;
- (void)checkAndUpdateTimeValues;
- (unsigned long long)totalTime;
- (void)setTotalTime:(unsigned long long)arg1;
- (unsigned long long)minimizeModeTime;
- (void)setMinimizeModeTime:(unsigned long long)arg1;
- (unsigned long long)backgroundTime;
- (void)setBackgroundTime:(unsigned long long)arg1;
- (BOOL)isAudienceLocalAudioMode;
- (void)setIsAudienceLocalAudioMode:(BOOL)arg1;
- (unsigned long long)localAudioModeStartTime;
- (void)setLocalAudioModeStartTime:(unsigned long long)arg1;
- (unsigned long long)minimizeModeStartTime;
- (void)setMinimizeModeStartTime:(unsigned long long)arg1;
- (unsigned long long)backgroundStartTime;
- (void)setBackgroundStartTime:(unsigned long long)arg1;
@end
