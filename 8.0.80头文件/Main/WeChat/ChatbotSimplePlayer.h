@interface ChatbotSimplePlayer : NSObject
{
    OpaqueAudioQueue * _audioQueue; // +0x8
    AudioQueueBuffer *[3] _buffers; // +0x10
    AudioStreamBasicDescription _format; // +0x28
    unsigned int _bufferByteSize; // +0x50
    unsigned int _frameLenBytes; // +0x54
    struct _ringBuffer; // +0x58
    char * _tempDelegateBuffer; // +0x78
    BOOL _isRunning; // +0x80
    BOOL _isPrewarmed; // +0x81
    BOOL _isRunningForRecordingBridge; // +0x82
    BOOL _isRunningForPrewarmPaused; // +0x83
    BOOL _usePlayAndRecordCategory; // +0x84
    BOOL _isRunningForPrewarm; // +0x85
    unsigned int _channels; // +0x88
    unsigned int _framelenMs; // +0x8c
    id <ChatbotSimplePlayerDelegate> _delegate; // +0x90
    long long _outputRoute; // +0x98
    double _sampleRate; // +0xa0
    NSObject<OS_dispatch_queue> * _internalQueue; // +0xa8
}
- (void)setOutputRoute:(long long)arg1;
- (id)initWithSampleRate:(double)arg1 channels:(unsigned int)arg2 framelenMs:(unsigned int)arg3;
- (void)dealloc;
- (void)prewarm;
- (void)prewarmForInit;
- (void)start;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)startForPrewarm;
- (void)startForPrewarmPaused;
- (BOOL)getIfIsRunningForPrewarm;
- (void)resumeForPrewarm;
- (void)startForPrewarmWithCompletion:(id /* block */)arg1;
- (BOOL)startForRecordingBridgeSync:(id *)arg1;
- (void)stop;
- (void)stopSync;
- (void)stopAndNotifyOthers;
- (void)transitionToPrewarm;
- (void)dispose;
- (void)invalidatePrewarm;
- (void)fillBuffer:(AudioQueueBuffer *)arg1;
- (void)_internalPrewarm;
- (void)_internalStart;
- (void)_internalStartWithCompletion:(id /* block */)arg1;
- (void)_internalStartForPrewarm;
- (void)_internalStartForPrewarmWithCompletion:(id /* block */)arg1;
- (void)_internalStartForPrewarmWithCompletion:(id /* block */)arg1 allowOtherAudioPlaying:(BOOL)arg2;
- (void)_internalStartForPrewarmPausedWithCompletion:(id /* block */)arg1;
- (void)_internalResumeForPrewarm;
- (void)_internalStop;
- (void)_internalTransitionToPrewarm;
- (void)_internalStopAndNotifyOthers;
- (void)_configureAudioSessionForPlayback;
- (void)_configureAudioSessionForPlayAndRecord;
- (void)_applyOutputRouteOverride;
- (BOOL)_hasExternalAudioDevice:(id)arg1;
- (void)_internalDispose;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isPrewarmed;
- (void)setIsPrewarmed:(BOOL)arg1;
- (BOOL)isRunningForRecordingBridge;
- (void)setIsRunningForRecordingBridge:(BOOL)arg1;
- (BOOL)isRunningForPrewarmPaused;
- (void)setIsRunningForPrewarmPaused:(BOOL)arg1;
- (BOOL)usePlayAndRecordCategory;
- (void)setUsePlayAndRecordCategory:(BOOL)arg1;
- (long long)outputRoute;
- (BOOL)isRunningForPrewarm;
- (void)setIsRunningForPrewarm:(BOOL)arg1;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;
- (unsigned int)channels;
- (void)setChannels:(unsigned int)arg1;
- (unsigned int)framelenMs;
- (void)setFramelenMs:(unsigned int)arg1;
- (id)internalQueue;
- (void)setInternalQueue:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
