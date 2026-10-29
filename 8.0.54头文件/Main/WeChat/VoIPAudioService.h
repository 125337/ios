@interface VoIPAudioService : MMUserService <WCAudioSessionExt, WCAudioModuleDelegate, IAUAudioDeviceExt, WCAudioSessionExt, WCAVAudioSessionSwizzleExtension, MMServiceProtocol>
{
    BOOL _isWorking; // +0x8
    BOOL _isActived; // +0x9
    BOOL _isCallKit; // +0xa
    BOOL _hasAudioUnitCallbackFirst; // +0xb
    BOOL _isInBackground; // +0xc
    BOOL _isInterruptingByAudioModule; // +0xd
    int _audioUnitStartUpCount; // +0x10
    int _audioUnitStartUpAtFirstFailedCount; // +0x14
    int _audioUnitStartUpFailedCount; // +0x18
    int _audioUnitInterruptionCount; // +0x1c
    unsigned long long _roomID; // +0x20
    long long _roomKey; // +0x28
    unsigned long long _audioUnitStartUpAtFirstTimestamp; // +0x30
    unsigned long long _audioUnitRecvCallbackAtFirstTimestamp; // +0x38
    unsigned long long _audioDeviceModeBeforeClosing; // +0x40
    unsigned long long _currentDeviceMode; // +0x48
    unsigned long long _audioUnitReceivePlaybackCallbackFirst; // +0x50
    unsigned long long _audioUnitReceiveRecordingCallbackFirst; // +0x58
    id /* block */ _resumeAfterInterruptionBlock; // +0x60
    WCVolumeController * _volumnController; // +0x68
}
+ (void)loadStatusWithRouteChange:(id)arg1 completion:(id /* block */)arg2 callbackInMainThead:(BOOL)arg3;
+ (void)loadStatusWithCompletion:(id /* block */)arg1 callbackInMainThead:(BOOL)arg2;
- (void)loadVolumeControllerWithCompletion:(id /* block */)arg1;
- (void)clearResumeAfterInterruptionBlock;
- (BOOL)openIfIsCallKit:(BOOL)arg1;
- (void)closeWithReset:(BOOL)arg1;
- (void)start;
- (void)stop;
- (unsigned long long)audioDeviceModeInLastTalk;
- (BOOL)isUsingBuiltInReceiverInLastTalk;
- (BOOL)isUsingEarDeviceInLastTalk;
- (void)refreshStatusWithRouteChange:(id)arg1;
- (void)refreshStatus;
- (void)receiveAudioUnitCallbackFirst;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)onWCAudioSessionSetActive:(BOOL)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)audioDeviceWillStart:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceAudioServiceWillPrewarmAudioUnit;
- (void)audioDeviceAudioServiceDidPrewarmAudioUnit;
- (void)audioDeviceDidReceivePlaybackCallbackFirst:(id)arg1;
- (void)audioDeviceDidReceiveRecordingCallbackFirst:(id)arg1;
- (void)onMediaServicesWereLost:(id)arg1;
- (void)onMediaServicesWereReset:(id)arg1;
- (void)wcAVAudioSessionSwizzleDidCallMethod:(id)arg1 error:(id)arg2 ret:(BOOL)arg3;
- (BOOL)isWorking;
- (void)setIsWorking:(BOOL)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (long long)roomKey;
- (void)setRoomKey:(long long)arg1;
- (int)audioUnitStartUpCount;
- (void)setAudioUnitStartUpCount:(int)arg1;
- (int)audioUnitStartUpAtFirstFailedCount;
- (void)setAudioUnitStartUpAtFirstFailedCount:(int)arg1;
- (int)audioUnitStartUpFailedCount;
- (void)setAudioUnitStartUpFailedCount:(int)arg1;
- (int)audioUnitInterruptionCount;
- (void)setAudioUnitInterruptionCount:(int)arg1;
- (unsigned long long)audioUnitStartUpAtFirstTimestamp;
- (void)setAudioUnitStartUpAtFirstTimestamp:(unsigned long long)arg1;
- (unsigned long long)audioUnitRecvCallbackAtFirstTimestamp;
- (void)setAudioUnitRecvCallbackAtFirstTimestamp:(unsigned long long)arg1;
- (BOOL)isActived;
- (void)setIsActived:(BOOL)arg1;
- (unsigned long long)audioDeviceModeBeforeClosing;
- (void)setAudioDeviceModeBeforeClosing:(unsigned long long)arg1;
- (unsigned long long)currentDeviceMode;
- (void)setCurrentDeviceMode:(unsigned long long)arg1;
- (BOOL)isCallKit;
- (void)setIsCallKit:(BOOL)arg1;
- (unsigned long long)audioUnitReceivePlaybackCallbackFirst;
- (void)setAudioUnitReceivePlaybackCallbackFirst:(unsigned long long)arg1;
- (unsigned long long)audioUnitReceiveRecordingCallbackFirst;
- (void)setAudioUnitReceiveRecordingCallbackFirst:(unsigned long long)arg1;
- (BOOL)hasAudioUnitCallbackFirst;
- (void)setHasAudioUnitCallbackFirst:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id /* block */)resumeAfterInterruptionBlock;
- (void)setResumeAfterInterruptionBlock:(id /* block */)arg1;
- (id)volumnController;
- (void)setVolumnController:(id)arg1;
- (BOOL)isInterruptingByAudioModule;
- (void)setIsInterruptingByAudioModule:(BOOL)arg1;
- (void).cxx_destruct;
@end

