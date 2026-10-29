@interface VoiceTransLogicV1 : VoiceTransLogic <SimpleRecordBufferDelegate, WCAudioModuleDelegate, MMNewVoiceInputCacheLogicDelegate, AudioRecordCheckerExt>
{
    int _endFlag; // +0x20
    long long _scene; // +0x28
    NSHashTable * _observerList; // +0x30
    SimpleAudioRecorder * _recorder; // +0x38
    long long _recordingTime; // +0x40
    MMNewVoiceInputCacheLogic * _voiceInputLogic; // +0x48
    NSString * _result; // +0x50
    VoiceTransSegmentFinalizer * _pendingFinalizer; // +0x58
}
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
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)onEndVoiceTransByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVadIsEnd:(unsigned int)arg1 vadIsEnd:(BOOL)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onVoiceTransError:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)onDetectMicriphoneMuted;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setObserverList:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (void)setRecordingTime:(long long)arg1;
- (int)endFlag;
- (void)setEndFlag:(int)arg1;
- (id)voiceInputLogic;
- (void)setVoiceInputLogic:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)pendingFinalizer;
- (void)setPendingFinalizer:(id)arg1;
- (void).cxx_destruct;
@end
