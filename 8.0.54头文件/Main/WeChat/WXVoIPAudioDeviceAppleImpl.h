@interface WXVoIPAudioDeviceAppleImpl : NSObject <WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate, WXVoIPAudioUnitThreadDaemonDelegate, AudioPlayPreprocessedDelegate, WXVoIPAudioHardwareDelegate>
{
    unique_ptr<wxvoipsdk::audio::HardwareManager, std::default_delete<wxvoipsdk::audio::HardwareManager>> _hardwareManager; // +0x8
    weak_ptr<wxvoipsdk::audio::AudioDeviceCapCallback> _dataCaptureCallback; // +0x10
    weak_ptr<wxvoipsdk::audio::AudioDevicePlayCallback> _dataPlayCallback; // +0x20
    AudioFrame _earMonitoringPlayProcessHelpBuffer; // +0x30
    TXCVolumeLevelS16 _captureEnergy; // +0x90
    BOOL _isCaptureStarted; // +0xd0
    BOOL _isPlayStarted; // +0xd1
    BOOL _enableAutoRestart; // +0xd2
    BOOL _isFirstDataCaptured; // +0xd3
    BOOL _isFirstDataPlayed; // +0xd4
    BOOL _isEarMonitoringEnabled; // +0xd5
    unsigned int _autoRestartIntervalInMS; // +0xd8
    int _internalRemotePlaySoureceNumber; // +0xdc
    NSObject<OS_dispatch_queue> * _operationsQueue; // +0xe0
    unsigned long long _startCaptureTime; // +0xe8
    WXVoIPAudioHardwareCallbackAdapter * _audioHardwareCallbackAdapter; // +0xf0
    WXVoIPAudioPlayPreprocessor * _playPreprocessor; // +0xf8
    WXVoIPAudioHardwareSystemNotificationsLifelongObserver * _hardwareLifelongObserver; // +0x100
    WXVoIPAudioHardwareSystemNotificationsObserver * _hardwareObserver; // +0x108
    WXVoIPAudioUnitThreadDaemon * _audioUnitThreadDaemon; // +0x110
    DataBasicDescription _captureDataDescription; // +0x118
    AudioFrame _audioUnitCallbackProcessBuffer; // +0x130
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)isInterrupted;
- (BOOL)isInBackground;
- (BOOL)isOtherAPPPlaying;
- (void)startCapture:(int)arg1 channels:(int)arg2;
- (void)stopCapture;
- (void)muteCapture:(BOOL)arg1;
- (void)startPlay;
- (void)stopPlay;
- (void)pauseCapture;
- (void)resumeCapture;
- (void)setDataCaptureCallback:(weak_ptr<wxvoipsdk::audio::AudioDeviceCapCallback>)arg1;
- (void)setDataPlayCallback:(weak_ptr<wxvoipsdk::audio::AudioDevicePlayCallback>)arg1;
- (void)setSystemVolumeType:(int)arg1;
- (void)setPlayRoute:(int)arg1;
- (void)setIsEarMonitoringEnabled:(BOOL)arg1;
- (void)enableInactivateAudioSession:(int)arg1;
- (void)RestartAudioDevice;
- (void)setCaptureDeviceVolume:(long long)arg1;
- (long long)captureDeviceVolume;
- (void)setCaptureDeviceMuted:(BOOL)arg1;
- (BOOL)isCaptureDeviceMuted;
- (void)switchCaptureDevice:(long long)arg1;
- (_AudioDeviceInfo)getActiveCaptureDevice;
- (void)setPlayoutDeviceVolume:(long long)arg1;
- (long long)playoutDeviceVolume;
- (void)setPlayoutDeviceMuted:(BOOL)arg1;
- (BOOL)isPlayoutDeviceMuted;
- (void)switchPlayDevice:(long long)arg1;
- (_AudioDeviceInfo)getActivePlayDevice;
- (int)getActivePlayDeviceState;
- (vector<wxvoipsdk::_AudioDeviceInfo, std::allocator<wxvoipsdk::_AudioDeviceInfo>>)getAvailableDevices:(BOOL)arg1;
- (void)setCaptureAndPlayDurationFactor:(int)arg1;
- (void)clean;
- (void)setRemotePlaySoureceNumber:(int)arg1;
- (DeviceErrorApple)startCaptureInternal:(int)arg1 channels:(int)arg2;
- (DeviceErrorApple)stopCaptureInternal;
- (DeviceErrorApple)pauseCaptureInternal;
- (DeviceErrorApple)resumeCaptureInternal;
- (DeviceErrorApple)startPlayInternal;
- (DeviceErrorApple)stopPlayInternal;
- (void)initIfPlayOrCaptureFirstStart;
- (void)uninitIfPlayAndCaptureBothStop;
- (DeviceErrorApple)onInterruption:(BOOL)arg1;
- (void)onCaptureData:(AudioFrame *)arg1;
- (void)captureStartSuccessfully;
- (void)onSendAudioData:(AudioFrame *)arg1;
- (void)onGetDatatoPlay:(AudioFrame *)arg1;
- (void)onGetDataToPlayPreprocess:(AudioFrame *)arg1;
- (BOOL)onGetVOIPModeState;
- (void)onAudioUnitEvent:(const void *)arg1;
- (void)onAudioUnitError:(const void *)arg1;
- (void)onChangeNewCaptureHardwareSuccessfully:(const Hardware *)arg1;
- (void)onChangePlayHardwareSuccessfully:(const Hardware *)arg1;
- (void)onHardwarePluggedIn:(const Hardware *)arg1;
- (void)onHardwarePluggedOut:(const Hardware *)arg1;
- (BOOL)onGetCaptureState;
- (BOOL)onGetPlayState;
- (void)onNeedRestartAudioUnit;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)getAPPStates;
- (BOOL)isUsingHeadset;
- (BOOL)isEarMonitoringEnabledInternal;
- (int)getAudioQualityTypeWith:(int)arg1 channels:(int)arg2;
- (BOOL)isCaptureStarted;
- (void)setIsCaptureStarted:(BOOL)arg1;
- (BOOL)isPlayStarted;
- (void)setIsPlayStarted:(BOOL)arg1;
- (BOOL)enableAutoRestart;
- (void)setEnableAutoRestart:(BOOL)arg1;
- (unsigned int)autoRestartIntervalInMS;
- (void)setAutoRestartIntervalInMS:(unsigned int)arg1;
- (id)operationsQueue;
- (void)setOperationsQueue:(id)arg1;
- (BOOL)isFirstDataCaptured;
- (void)setIsFirstDataCaptured:(BOOL)arg1;
- (unsigned long long)startCaptureTime;
- (void)setStartCaptureTime:(unsigned long long)arg1;
- (BOOL)isFirstDataPlayed;
- (void)setIsFirstDataPlayed:(BOOL)arg1;
- (AudioFrame)audioUnitCallbackProcessBuffer;
- (void)setAudioUnitCallbackProcessBuffer:(AudioFrame)arg1;
- (id)audioHardwareCallbackAdapter;
- (void)setAudioHardwareCallbackAdapter:(id)arg1;
- (id)playPreprocessor;
- (void)setPlayPreprocessor:(id)arg1;
- (id)hardwareLifelongObserver;
- (void)setHardwareLifelongObserver:(id)arg1;
- (id)hardwareObserver;
- (void)setHardwareObserver:(id)arg1;
- (DataBasicDescription)captureDataDescription;
- (void)setCaptureDataDescription:(DataBasicDescription)arg1;
- (BOOL)isEarMonitoringEnabled;
- (id)audioUnitThreadDaemon;
- (void)setAudioUnitThreadDaemon:(id)arg1;
- (int)internalRemotePlaySoureceNumber;
- (void)setInternalRemotePlaySoureceNumber:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

