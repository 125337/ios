@interface MMFinderLiveKTVAudioSettingEngine : NSObject
{
    BOOL _isBluetoothHeadsetAvailable; // +0x8
    BOOL _isVoiceMuted; // +0x9
    BOOL _voiceEarEnable; // +0xa
    BOOL _voiceEarUsable; // +0xb
    BOOL _isSingStart; // +0xc
    BOOL _isSingPause; // +0xd
    int _volumeVoice; // +0x10
    id <MMFinderLiveKTVAudioSettingEngineDelegate> _logicDelegate; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    long long _audioRoute; // +0x28
    KTVAudioRouteUsageRecord * _currAudioRouteSingUseRecord; // +0x30
}
+ (void)setVoiceEarMonitorEnabled:(BOOL)arg1;
+ (void)notifyAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
+ (unsigned int)transferAudioRouteToAudioType:(long long)arg1;
+ (BOOL)checkVoiceEarUsabled:(long long)arg1;
+ (double)preferVolumeVoiceRatio;
- (id)initWithTaskId:(id)arg1;
- (void)configAudioParamCacheSettings;
- (void)dealloc;
- (void)setHumanVoiceAbsVomlue:(int)arg1;
- (int)humanVoiceAbsVomlue;
- (void)enableVoiceEarMonitor:(BOOL)arg1;
- (BOOL)isVoiceEarMonitorEnabled;
- (BOOL)isVoiceEarMonitorUsabled;
- (BOOL)actualVoiceEarEnable;
- (BOOL)isHeadHeadsetUsabled;
- (void)handleForAudioRouteChanged;
- (void)updateVoiceMute:(BOOL)arg1;
- (void)recoverAudioSetting:(id)arg1;
- (void)continueCurrSettings;
- (void)checkAudioRouteIsChangedAtSingStart;
- (void)checkAudioRouteIsChanged;
- (void)onSingStart:(BOOL)arg1;
- (void)onSingPause:(BOOL)arg1;
- (unsigned int)getCurrAudioRouteSingingPersistTime;
- (BOOL)isCurrentSinging;
- (id)getAudioMgrInternal;
- (BOOL)updateAudioRoute;
- (void)onSingingAudioRouteChangedTo:(long long)arg1 from:(long long)arg2 lastUseRecord:(id)arg3;
- (void)updateBluetoothHeadsetAvailable;
- (void)updateVoiceEarUsable:(BOOL)arg1;
- (void)setVoiceEarMonitorVolume:(int)arg1;
- (void)clearDatasForSingEnd;
- (void)updateAudioRouteRecordPlayingState;
- (id)finderLiveTask;
- (id)audioSettingCache;
- (long long)currAudioRoute;
- (int)actualVolumeVoice;
- (int)actualEarMonitorVolumeVoice;
- (double)volumeVoiceRatio;
- (int)volumeVoiceSum;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)isBluetoothHeadsetAvailable;
- (void)setIsBluetoothHeadsetAvailable:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isVoiceMuted;
- (void)setIsVoiceMuted:(BOOL)arg1;
- (int)volumeVoice;
- (void)setVolumeVoice:(int)arg1;
- (BOOL)voiceEarEnable;
- (void)setVoiceEarEnable:(BOOL)arg1;
- (BOOL)voiceEarUsable;
- (void)setVoiceEarUsable:(BOOL)arg1;
- (long long)audioRoute;
- (void)setAudioRoute:(long long)arg1;
- (id)currAudioRouteSingUseRecord;
- (void)setCurrAudioRouteSingUseRecord:(id)arg1;
- (BOOL)isSingStart;
- (void)setIsSingStart:(BOOL)arg1;
- (BOOL)isSingPause;
- (void)setIsSingPause:(BOOL)arg1;
- (void).cxx_destruct;
@end
