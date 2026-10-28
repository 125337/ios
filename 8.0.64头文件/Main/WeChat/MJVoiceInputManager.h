@interface MJVoiceInputManager : NSObject <MJVoiceInputRecorderDelegate, MJVoiceInputProcessorDelegate, MJVoiceInputRecognizerDelegate>
{
    BOOL _isReachedRecordingDurationLimit; // +0x8
    MJAudioFileManager * _audioFileManager; // +0x10
    id <MJVoiceInputManagerDelegate> _delegate; // +0x18
    unsigned long long _recognitionState; // +0x20
    NSMutableDictionary * _entitiesByIdentifier; // +0x28
    NSString * _currentIdentifier; // +0x30
    long long _recordingDurationLimit; // +0x38
    NSString * _reachRecordingDurationLimitToastText; // +0x40
    long long _sampleRate; // +0x48
    MJVoiceInputRecorder * _recorder; // +0x50
    MJVoiceInputProcessor * _processor; // +0x58
}
- (id)initWithAudioFileManager:(id)arg1 vocalAdjustmentCache:(id)arg2;
- (void)dealloc;
- (id)entityWithIdentifier:(id)arg1;
- (void)reset;
- (BOOL)isRecording;
- (BOOL)startRecordingWithDurationLimit:(long long)arg1 reachedLimitToastText:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)startRecordingWithOptions:(unsigned long long)arg1;
- (BOOL)stopRecording;
- (BOOL)cancelRecording;
- (BOOL)_stopRecording:(BOOL)arg1;
- (void)onAudioBufferOutput:(id)arg1;
- (void)onAudioBufferRecordEnd;
- (void)onLevelMeterPeakChange:(float)arg1;
- (void)onVoiceInputDataSliceProcessed:(id)arg1 sliceIndex:(unsigned int)arg2 isEnd:(BOOL)arg3;
- (void)onProcessedVoiceInputSavedAtPath:(id)arg1 error:(id)arg2;
- (void)onUpdateSentenceInfo:(unsigned int)arg1;
- (void)audioDecibelDidUpdate:(const void *)arg1;
- (void)onRecognitionResultUpdated:(id)arg1 resultIndex:(unsigned int)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)onRecognitionFinishedWithResult:(id)arg1 resultIndex:(unsigned int)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)onRecognitionStateUpdated:(unsigned long long)arg1 identifier:(id)arg2;
- (BOOL)checkCurrentEntity;
- (id)audioFileManager;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)recognitionState;
- (BOOL)isReachedRecordingDurationLimit;
- (void)setIsReachedRecordingDurationLimit:(BOOL)arg1;
- (id)entitiesByIdentifier;
- (void)setEntitiesByIdentifier:(id)arg1;
- (id)currentIdentifier;
- (void)setCurrentIdentifier:(id)arg1;
- (long long)recordingDurationLimit;
- (void)setRecordingDurationLimit:(long long)arg1;
- (id)reachRecordingDurationLimitToastText;
- (void)setReachRecordingDurationLimitToastText:(id)arg1;
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)processor;
- (void)setProcessor:(id)arg1;
- (void).cxx_destruct;
@end
