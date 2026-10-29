@interface VoiceTransLogicV2 : VoiceTransLogic <SimpleRecordBufferDelegate, WCAudioModuleDelegate, MMTranscriptionCoreDelegate, AudioRecordCheckerExt>
{
    BOOL _didNotifyEnd; // +0x8
    int _endFlag; // +0xc
    long long _scene; // +0x10
    NSHashTable * _observerList; // +0x18
    SimpleAudioRecorder * _recorder; // +0x20
    long long _recordingTime; // +0x28
    MMTranscriptionCore * _transcriptionCore; // +0x30
    id <MMTranscriptionReporter> _transcriptionReporter; // +0x38
    NSString * _result; // +0x40
    VoiceTransCoreFinalizer * _pendingFinalizer; // +0x48
}
- (void)dealloc;
- (id)initWithScene:(long long)arg1;
- (id)currentVoiceId;
- (void)startRecord;
- (void)onRecordStart;
- (void)startTransVoice;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
- (void)onFail:(int)arg1;
- (void)stopRecord:(int)arg1;
- (BOOL)isRecording;
- (void)startNewTransSegment;
- (void)startNewTransSegmentWaitingForFinalResult:(BOOL)arg1;
- (void)updateExtraData:(id)arg1;
- (long long)recordingTime;
- (id)translateResult;
- (id)observerList;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserver:(id /* block */)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)transcriptionCore:(id)arg1 didUpdateResult:(id)arg2;
- (void)transcriptionCore:(id)arg1 didFinishResult:(id)arg2 endFlag:(unsigned int)arg3;
- (void)transcriptionCore:(id)arg1 didFailWithError:(long long)arg2;
- (id)createTranscriptionCore;
- (BOOL)isCommandSegment;
- (void)notifyResultChanged;
- (void)notifyDidEnd:(int)arg1;
- (void)onDetectMicriphoneMuted;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setObserverList:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (void)setRecordingTime:(long long)arg1;
- (int)endFlag;
- (void)setEndFlag:(int)arg1;
- (id)transcriptionCore;
- (void)setTranscriptionCore:(id)arg1;
- (id)transcriptionReporter;
- (void)setTranscriptionReporter:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (BOOL)didNotifyEnd;
- (void)setDidNotifyEnd:(BOOL)arg1;
- (id)pendingFinalizer;
- (void)setPendingFinalizer:(id)arg1;
- (void).cxx_destruct;
@end
