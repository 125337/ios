@interface MMLiveAudioRoomModeTimeRecorder : NSObject
{
    unsigned long long _radioSceneTime; // +0x8
    unsigned long long _multiPlayerRoomSceneTime; // +0x10
    unsigned long long _ktvSceneTime; // +0x18
    unsigned long long _currentAudioRoomScene; // +0x20
    unsigned long long _startRecordingTime; // +0x28
}
- (void)updateTimeValueWithCurrentTime:(unsigned long long)arg1;
- (void)notifyAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)checkAndUpdateTimeValues;
- (unsigned long long)radioSceneTime;
- (void)setRadioSceneTime:(unsigned long long)arg1;
- (unsigned long long)multiPlayerRoomSceneTime;
- (void)setMultiPlayerRoomSceneTime:(unsigned long long)arg1;
- (unsigned long long)ktvSceneTime;
- (void)setKtvSceneTime:(unsigned long long)arg1;
- (unsigned long long)currentAudioRoomScene;
- (void)setCurrentAudioRoomScene:(unsigned long long)arg1;
- (unsigned long long)startRecordingTime;
- (void)setStartRecordingTime:(unsigned long long)arg1;
@end

