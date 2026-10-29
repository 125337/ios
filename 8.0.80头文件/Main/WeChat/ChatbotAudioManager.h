@interface ChatbotAudioManager : NSObject
{
    OpaqueAudioComponentInstance * _playUnit; // +0x8
    OpaqueAudioComponentInstance * _recordUnit; // +0x10
    struct _internalBuffer; // +0x18
    char * _tempDelegateBuffer; // +0xfa68
    OpaqueAudioQueue * _adcPrewarmQueue; // +0xfa70
    BOOL _isRunning; // +0xfa78
    BOOL _isPlayUnitInitialized; // +0xfa79
    BOOL _isRecordUnitInitialized; // +0xfa7a
    BOOL _isRecordUnitPrecreated; // +0xfa7b
    BOOL _isPlayUnitRunning; // +0xfa7c
    BOOL _isRecordUnitRunning; // +0xfa7d
    BOOL _isPrewarmed; // +0xfa7e
    BOOL _isUsingExternalDevice; // +0xfa7f
    BOOL _isMicConfigured; // +0xfa80
    BOOL _isCategoryConfigured; // +0xfa81
    BOOL _lastConfiguredModeIsFullDuplex; // +0xfa82
    BOOL _isSessionActivated; // +0xfa83
    BOOL _needsReconfigureLoading; // +0xfa84
    BOOL _isPrewarmMixMode; // +0xfa85
    BOOL _isLogicallyRecording; // +0xfa86
    BOOL _isPlayUnitPrewarming; // +0xfa87
    int _recChannels; // +0xfa88
    int _playChannels; // +0xfa8c
    int _framelenMs; // +0xfa90
    id <ChatbotAudioManagerDelegate> _delegate; // +0xfa98
    long long _currentDeviceType; // +0xfaa0
    NSString * _currentDeviceName; // +0xfaa8
    double _playSampleRate; // +0xfab0
    NSObject<OS_dispatch_queue> * _audioQueue; // +0xfab8
    double _cachedSampleRate; // +0xfac0
    double _lastRouteCheckTime; // +0xfac8
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)prewarmWithSampleRate:(double)arg1;
- (void)preloadAudioUnit:(double)arg1;
- (void)startWithMode:(long long)arg1 sampleRate:(double)arg2 completion:(id /* block */)arg3;
- (void)stop;
- (void)startWithMode:(long long)arg1 sampleRate:(double)arg2 stateHandler:(id /* block */)arg3;
- (void)checkAndNotifyDeviceOccupied:(id /* block */)arg1 mode:(long long)arg2;
- (void)checkAndNotifyReconfiguring:(id /* block */)arg1 mode:(long long)arg2 sampleRate:(double)arg3;
- (void)stopPlay;
- (void)stopRecord;
- (void)startPlayUnitForPrewarm;
- (void)stopPlayUnitPrewarm;
- (void)restorePrewarmSessionIfNeeded;
- (void)prewarmADCWithAudioQueue;
- (void)stopADCPrewarmQueue;
- (void)reconfigureForA2DP;
- (void)teardown;
- (void)internalStop;
- (void)createAndInitPlayUnitWithSampleRate:(double)arg1;
- (void)precreateRecordUnitWithSampleRate:(double)arg1;
- (void)createAndInitRecordUnitWithSampleRate:(double)arg1;
- (AudioStreamBasicDescription)audioFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (void)disposeAllAudioUnits;
- (void)configureSessionForMode:(long long)arg1 sampleRate:(double)arg2 error:(id *)arg3;
- (void)dispatchCompletion:(id /* block */)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)updateAudioRouteCache;
- (void)handleAudioInterruption:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)configureBottomMicIfNeeded:(id)arg1 error:(id *)arg2;
- (void)invalidateSessionConfiguration;
- (void)prepareSessionForRecording:(long long)arg1 sampleRate:(double)arg2;
- (void)configureAudioSessionCategoryForPrewarm:(id)arg1;
- (void)configureAudioSessionCategory:(id)arg1 mode:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (long long)currentDeviceType;
- (void)setCurrentDeviceType:(long long)arg1;
- (id)currentDeviceName;
- (void)setCurrentDeviceName:(id)arg1;
- (int)recChannels;
- (void)setRecChannels:(int)arg1;
- (int)playChannels;
- (void)setPlayChannels:(int)arg1;
- (double)playSampleRate;
- (void)setPlaySampleRate:(double)arg1;
- (int)framelenMs;
- (void)setFramelenMs:(int)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (BOOL)isPlayUnitInitialized;
- (void)setIsPlayUnitInitialized:(BOOL)arg1;
- (BOOL)isRecordUnitInitialized;
- (void)setIsRecordUnitInitialized:(BOOL)arg1;
- (BOOL)isRecordUnitPrecreated;
- (void)setIsRecordUnitPrecreated:(BOOL)arg1;
- (BOOL)isPlayUnitRunning;
- (void)setIsPlayUnitRunning:(BOOL)arg1;
- (BOOL)isRecordUnitRunning;
- (void)setIsRecordUnitRunning:(BOOL)arg1;
- (double)cachedSampleRate;
- (void)setCachedSampleRate:(double)arg1;
- (BOOL)isPrewarmed;
- (void)setIsPrewarmed:(BOOL)arg1;
- (BOOL)isUsingExternalDevice;
- (void)setIsUsingExternalDevice:(BOOL)arg1;
- (BOOL)isMicConfigured;
- (void)setIsMicConfigured:(BOOL)arg1;
- (double)lastRouteCheckTime;
- (void)setLastRouteCheckTime:(double)arg1;
- (BOOL)isCategoryConfigured;
- (void)setIsCategoryConfigured:(BOOL)arg1;
- (BOOL)lastConfiguredModeIsFullDuplex;
- (void)setLastConfiguredModeIsFullDuplex:(BOOL)arg1;
- (BOOL)isSessionActivated;
- (void)setIsSessionActivated:(BOOL)arg1;
- (BOOL)needsReconfigureLoading;
- (void)setNeedsReconfigureLoading:(BOOL)arg1;
- (BOOL)isPrewarmMixMode;
- (void)setIsPrewarmMixMode:(BOOL)arg1;
- (BOOL)isLogicallyRecording;
- (void)setIsLogicallyRecording:(BOOL)arg1;
- (BOOL)isPlayUnitPrewarming;
- (void)setIsPlayUnitPrewarming:(BOOL)arg1;
- (void).cxx_destruct;
@end
