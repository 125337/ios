@interface ChatbotSimpleRecorder : NSObject
{
    OpaqueAudioQueue * _audioQueue; // +0x8
    AudioQueueBuffer *[3] _buffers; // +0x10
    AudioStreamBasicDescription _format; // +0x28
    unsigned int _bufferByteSize; // +0x50
    unsigned int _firstFrameBufferByteSize; // +0x54
    BOOL _isRunning; // +0x58
    BOOL _isPrewarmed; // +0x59
    BOOL _sessionConfigInFlight; // +0x5a
    BOOL _sessionConfigured; // +0x5b
    BOOL _audioQueueCreatedWithoutInput; // +0x5c
    unsigned int _channels; // +0x60
    id <ChatbotSimpleRecorderDelegate> _delegate; // +0x68
    double _startupDuration; // +0x70
    NSObject<OS_dispatch_queue> * _sessionQueue; // +0x78
    double _sampleRate; // +0x80
    NSObject<OS_dispatch_queue> * _internalQueue; // +0x88
    NSObject<OS_dispatch_semaphore> * _sessionConfigSemaphore; // +0x90
}
- (id)getSessionQueue;
- (id)getInternalQueue;
- (BOOL)isSessionConfigInFlight;
- (BOOL)isSessionConfigured;
- (id)initWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (void)dealloc;
- (void)prewarm;
- (void)prewarmForInit;
- (void)start;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)stop;
- (void)dispose;
- (void)invalidatePrewarm;
- (void)prepareSessionEagerly;
- (void)startSessionConfigAsync;
- (void)startSessionConfigAsyncForceSessionQueue:(BOOL)arg1;
- (void)_internalPrewarm;
- (void)_internalStart;
- (void)_internalStartWithCompletion:(id /* block */)arg1;
- (void)_internalStop;
- (void)_internalDispose;
- (BOOL)_hasBuiltInMicInput:(id)arg1;
- (BOOL)_ensureBuiltInMicInputIfNeeded:(id)arg1;
- (void)configureAudioSessionForRecordingInline;
- (void)prewarmInline;
- (void)invalidatePrewarmInline;
- (void)clearAudioQueueCreatedWithoutInput;
- (void)_configureAudioSessionForRecordingSynchronously;
- (void)_configureAudioSessionForRecording;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isPrewarmed;
- (void)setIsPrewarmed:(BOOL)arg1;
- (double)startupDuration;
- (void)setStartupDuration:(double)arg1;
- (id)sessionQueue;
- (void)setSessionQueue:(id)arg1;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;
- (unsigned int)channels;
- (void)setChannels:(unsigned int)arg1;
- (id)internalQueue;
- (void)setInternalQueue:(id)arg1;
- (BOOL)sessionConfigInFlight;
- (void)setSessionConfigInFlight:(BOOL)arg1;
- (BOOL)sessionConfigured;
- (void)setSessionConfigured:(BOOL)arg1;
- (BOOL)audioQueueCreatedWithoutInput;
- (void)setAudioQueueCreatedWithoutInput:(BOOL)arg1;
- (id)sessionConfigSemaphore;
- (void)setSessionConfigSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
