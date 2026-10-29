@interface ChatbotAudioUnit : NSObject <WCAudioModuleDelegate, ChatbotAudioManagerDelegate, WCAudioModuleExt, IVOIPExt, MultiTalkMgrExt, ISysCallCheckExt, ChatbotSimpleRecorderDelegate, ChatbotSimplePlayerDelegate>
{
    BOOL _useTTSPlayAndRecordCategory; // +0x8
    BOOL _isInterphoneMode; // +0x9
    BOOL _isRecording; // +0xa
    BOOL _needDiscardData; // +0xb
    BOOL _needDiscardPlaybackData; // +0xc
    BOOL _pendingResumePlayback; // +0xd
    BOOL _discardSetByInterrupt; // +0xe
    BOOL _manualReadAloudActive; // +0xf
    BOOL _isInBackground; // +0x10
    BOOL _voipCallActiveCache; // +0x11
    BOOL _hasInit; // +0x12
    BOOL _isStarted; // +0x13
    BOOL _isPlaying; // +0x14
    BOOL _hasReceivedRecordFirstFrame; // +0x15
    BOOL _hasReceivedPlayFirstFrame; // +0x16
    BOOL _needNotifyOtherAudioOnStop; // +0x17
    BOOL _needAudioOpt; // +0x18
    BOOL _bluetoothAutoPlayAndRecord; // +0x19
    BOOL _isObservingVolume; // +0x1a
    int _sampleRate; // +0x1c
    int _recChannels; // +0x20
    int _playSampleRate; // +0x24
    int _playChannels; // +0x28
    int _framelenMs; // +0x2c
    unsigned int _frameLength; // +0x30
    float _previousOutputVolume; // +0x34
    long long _ttsOutputRoute; // +0x38
    NSRecursiveLock * _audioEncLock; // +0x40
    long long _ttsDataIdleSinceMs; // +0x48
    NSObject<OS_dispatch_source> * _ttsStarveWatchdogTimer; // +0x50
    NSMutableData * _recordAudioData; // +0x58
    NSObject<OS_dispatch_queue> * _recordDataQueue; // +0x60
    UIImpactFeedbackGenerator * _impactFeedBack; // +0x68
    double _recordStartTs; // +0x70
    double _playStartTs; // +0x78
    double _lastPrepareSessionTs; // +0x80
    double _recordStartupDuration; // +0x88
    double _prepareSessionEagerlyTs; // +0x90
    double _startToSuccTs; // +0x98
    ChatbotSimpleRecorder * _simpleRecorder; // +0xa0
    ChatbotSimplePlayer * _simplePlayer; // +0xa8
    unsigned long long _playerPrewarmGeneration; // +0xb0
    NSString * _cachedAudioEnvironmentInfo; // +0xb8
}
- (void)setUseTTSPlayAndRecordCategory:(BOOL)arg1;
- (void)setTtsOutputRoute:(long long)arg1;
- (void)prepareImpactFeedbackGenerator;
- (void)triggerUnmuteHapticFeedback;
- (id)init;
- (void)dealloc;
- (BOOL)getIfIsInterphoneMode;
- (void)changeIntoFullDuplexMode;
- (void)changeInfoHalfDuplexMode;
- (void)startChatbotAudio:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)_startFullDuplexAudio;
- (void)setSpeakerMode;
- (void)releaseAll;
- (void)releaseAllForPreempt;
- (void)_releaseAudioResources;
- (void)_releaseAudioResourcesNotifyInterrupt:(BOOL)arg1;
- (void)StartRecord;
- (void)StopRecord;
- (void)startPlayWithOpenScene:(int)arg1;
- (void)stopPlayWithOpenScene:(int)arg1;
- (BOOL)getIsRecordMode;
- (BOOL)getIfChatbotAudioWorking;
- (void)prepareSessionEagerly;
- (void)setMute:(BOOL)arg1 needPlaySound:(BOOL)arg2 needFullDuplex:(BOOL)arg3;
- (void)setNeedDiscardData:(BOOL)arg1;
- (void)setNeedDiscardPlaybackData:(BOOL)arg1;
- (void)setManualReadAloudActive:(BOOL)arg1;
- (BOOL)currentNeedAudioOpt;
- (BOOL)getIfDiscardPlaybackData;
- (void)_flushPendingResumePlaybackIfNeededFromCaller:(id)arg1;
- (id)getCurrentAudioFmtParams;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (void)reportAudioAction:(int)arg1;
- (void)reportAudioAction:(int)arg1 extraInfo:(id)arg2;
- (id)audioEnvironmentInfo;
- (void)audioManagerDidChangeDevice:(long long)arg1 deviceName:(id)arg2;
- (void)audioManagerDidCaptureData:(void *)arg1 size:(unsigned int)arg2;
- (unsigned int)audioManagerDidRequestPlaybackData:(void *)arg1 size:(unsigned int)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onAudioSessionInterruption:(id)arg1;
- (void)audioModuleDidActive:(id)arg1;
- (void)audioModuleDidDeactive:(id)arg1;
- (void)_deactivateAudioModuleOnMainThread;
- (void)interruptTTSPlayback;
- (void)onTalkSucc;
- (void)onTTSBegin:(id)arg1;
- (void)onTTSEnd:(id)arg1;
- (void)startTTSStarveWatchdog;
- (void)stopTTSStarveWatchdog;
- (void)checkTTSPlaybackStarved;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (BOOL)isVoipCallActive;
- (void)_handleVoipCallActiveBeginFromSource:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)onBeginMultiTalk;
- (void)BeginInterruption;
- (void)chatbotSimpleRecorderDidCaptureData:(void *)arg1 size:(unsigned int)arg2;
- (unsigned int)chatbotSimplePlayerDidRequestPlaybackData:(void *)arg1 size:(unsigned int)arg2;
- (BOOL)chatbotSimpleRecorderStartAirPlayOutputBridge:(id *)arg1;
- (void)chatbotSimpleRecorderSessionConfigDidComplete;
- (BOOL)hasOtherActiveAudio;
- (void)startObservingVolumeChange;
- (void)stopObservingVolumeChange;
- (void)_handleSystemVolumeDidChange:(id)arg1;
- (BOOL)useTTSPlayAndRecordCategory;
- (long long)ttsOutputRoute;
- (BOOL)isInterphoneMode;
- (void)setIsInterphoneMode:(BOOL)arg1;
- (id)audioEncLock;
- (void)setAudioEncLock:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (BOOL)needDiscardData;
- (BOOL)needDiscardPlaybackData;
- (BOOL)pendingResumePlayback;
- (void)setPendingResumePlayback:(BOOL)arg1;
- (BOOL)discardSetByInterrupt;
- (void)setDiscardSetByInterrupt:(BOOL)arg1;
- (BOOL)manualReadAloudActive;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)voipCallActiveCache;
- (void)setVoipCallActiveCache:(BOOL)arg1;
- (BOOL)hasInit;
- (void)setHasInit:(BOOL)arg1;
- (BOOL)isStarted;
- (void)setIsStarted:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (long long)ttsDataIdleSinceMs;
- (void)setTtsDataIdleSinceMs:(long long)arg1;
- (id)ttsStarveWatchdogTimer;
- (void)setTtsStarveWatchdogTimer:(id)arg1;
- (id)recordAudioData;
- (void)setRecordAudioData:(id)arg1;
- (id)recordDataQueue;
- (void)setRecordDataQueue:(id)arg1;
- (BOOL)hasReceivedRecordFirstFrame;
- (void)setHasReceivedRecordFirstFrame:(BOOL)arg1;
- (BOOL)hasReceivedPlayFirstFrame;
- (void)setHasReceivedPlayFirstFrame:(BOOL)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)recChannels;
- (void)setRecChannels:(int)arg1;
- (int)playSampleRate;
- (void)setPlaySampleRate:(int)arg1;
- (int)playChannels;
- (void)setPlayChannels:(int)arg1;
- (int)framelenMs;
- (void)setFramelenMs:(int)arg1;
- (unsigned int)frameLength;
- (void)setFrameLength:(unsigned int)arg1;
- (id)impactFeedBack;
- (void)setImpactFeedBack:(id)arg1;
- (double)recordStartTs;
- (void)setRecordStartTs:(double)arg1;
- (double)playStartTs;
- (void)setPlayStartTs:(double)arg1;
- (double)lastPrepareSessionTs;
- (void)setLastPrepareSessionTs:(double)arg1;
- (double)recordStartupDuration;
- (void)setRecordStartupDuration:(double)arg1;
- (double)prepareSessionEagerlyTs;
- (void)setPrepareSessionEagerlyTs:(double)arg1;
- (double)startToSuccTs;
- (void)setStartToSuccTs:(double)arg1;
- (id)simpleRecorder;
- (void)setSimpleRecorder:(id)arg1;
- (id)simplePlayer;
- (void)setSimplePlayer:(id)arg1;
- (BOOL)needNotifyOtherAudioOnStop;
- (void)setNeedNotifyOtherAudioOnStop:(BOOL)arg1;
- (unsigned long long)playerPrewarmGeneration;
- (void)setPlayerPrewarmGeneration:(unsigned long long)arg1;
- (id)cachedAudioEnvironmentInfo;
- (void)setCachedAudioEnvironmentInfo:(id)arg1;
- (BOOL)needAudioOpt;
- (void)setNeedAudioOpt:(BOOL)arg1;
- (BOOL)bluetoothAutoPlayAndRecord;
- (void)setBluetoothAutoPlayAndRecord:(BOOL)arg1;
- (BOOL)isObservingVolume;
- (void)setIsObservingVolume:(BOOL)arg1;
- (float)previousOutputVolume;
- (void)setPreviousOutputVolume:(float)arg1;
- (void).cxx_destruct;
@end
