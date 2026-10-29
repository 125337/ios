@interface WCAudioSession : MMRootService <MMServiceProtocol>
{
    BOOL _m_otherPlayingBeforeActive; // +0x8
    BOOL _m_isCurrentInActive; // +0x9
    NSObject<OS_dispatch_queue> * _audioSessionQueue; // +0x10
    id <WCAudioSessionDelegate> _m_delegate; // +0x18
    AVAudioSessionRouteDescription * _currentRoute; // +0x20
    NSString * _currentCategory; // +0x28
}
+ (id)portNameWithOutputs:(id)arg1;
+ (unsigned long long)deviceModeWithOutputs:(id)arg1;
+ (unsigned long long)audioModeWithRouteChange:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)currentRoute;
- (BOOL)otherPlayingBeforeActive;
- (BOOL)isCurrentInActive;
- (void)updateDelegate:(id)arg1;
- (void)restart;
- (void)asyncSetActive:(BOOL)arg1;
- (BOOL)setActive:(BOOL)arg1;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1 stopPlayCheck:(BOOL)arg2 error:(id *)arg3;
- (BOOL)setCategroy:(unsigned long long)arg1;
- (BOOL)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (BOOL)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(BOOL)arg2 mixWithOthers:(BOOL)arg3;
- (BOOL)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(BOOL)arg2 mixWithOthers:(BOOL)arg3 forceUseBuiltinMic:(BOOL)arg4;
- (BOOL)setCategroy:(unsigned long long)arg1 mode:(id)arg2 defaultToSpeaker:(BOOL)arg3 mixWithOthers:(BOOL)arg4 forceUseBuiltinMic:(BOOL)arg5;
- (BOOL)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)setCategroy:(unsigned long long)arg1 withBlockType:(unsigned long long)arg2;
- (BOOL)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 withBlockType:(unsigned long long)arg3;
- (BOOL)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
- (BOOL)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
- (BOOL)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 forceUseBuiltinMic:(BOOL)arg4 error:(id *)arg5 withBlockType:(unsigned long long)arg6;
- (BOOL)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 optionsForbidModify:(BOOL)arg4 forceUseBuiltinMic:(BOOL)arg5 error:(id *)arg6 withBlockType:(unsigned long long)arg7;
- (void)reportSetCategoryError:(id)arg1;
- (void)activeMixWithOtherAudio;
- (void)activePlaybackDuckOthers;
- (void)activePlayAndRecordDuckOthers;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)setSpeaker:(BOOL)arg1;
- (BOOL)setSpeaker:(BOOL)arg1 error:(id *)arg2;
- (id)getCurrentAudioPortDescription;
- (unsigned long long)getCurrentAudioMode;
- (unsigned long long)getCacheAudioMode;
- (unsigned long long)audioModeWithSessionDesciption:(id)arg1;
- (BOOL)isOtherAudioPlaying;
- (float)getOutputVolume;
- (id)currentRecordCategory;
- (unsigned long long)currentCategoryId;
- (id)getBuiltInMicInputDataSource:(id)arg1;
- (BOOL)switchBuiltInMicDataSource:(id)arg1;
- (BOOL)switchPreferredInputPort:(id)arg1;
- (void)ayncClearInputPortSet;
- (BOOL)setAllowHapticsAndSystemSoundsDuringRecording:(BOOL)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)print:(id)arg1 ignoreInputsPortDescription:(BOOL)arg2;
- (void)print:(id)arg1;
- (id)audioSessionQueue;
- (void)setAudioSessionQueue:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_otherPlayingBeforeActive;
- (void)setM_otherPlayingBeforeActive:(BOOL)arg1;
- (BOOL)m_isCurrentInActive;
- (void)setM_isCurrentInActive:(BOOL)arg1;
- (void)setCurrentRoute:(id)arg1;
- (id)currentCategory;
- (void)setCurrentCategory:(id)arg1;
- (void).cxx_destruct;
@end
