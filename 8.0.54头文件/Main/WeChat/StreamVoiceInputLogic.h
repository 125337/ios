@interface StreamVoiceInputLogic : NSObject <SimpleRecordBufferDelegate, UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate, WCAudioModuleDelegate>
{
    unsigned int m_uiVoiceOffset; // +0x8
    NSMutableArray * m_voiceIdArray; // +0x10
    BOOL m_bStop; // +0x18
    unsigned long long _startInputTiem; // +0x20
    unsigned int _currentInputId; // +0x28
    unsigned int _inputLanguageType; // +0x2c
    StreamInputResult * _result; // +0x30
    long long _scene; // +0x38
    double _silenceTimelimit; // +0x40
    SimpleAudioRecorder * _recorder; // +0x48
    UploadStreamVoiceDataMgr * _uploadMgr; // +0x50
    EVADProcessor * _evad; // +0x58
    NSMutableDictionary * _sequenceMap; // +0x60
    NSString * _sessionId; // +0x68
    NSString * _currentVoiceId; // +0x70
}
- (id)init;
- (id)initWithScene:(long long)arg1;
- (void)setInputLanguageType:(unsigned int)arg1;
- (BOOL)isRecording;
- (long long)getRecordingTime;
- (unsigned int)StartInput;
- (void)asyncStartInput:(id /* block */)arg1;
- (BOOL)StopRecord;
- (void)ExitVoiceInput;
- (id)GetVoiceIds;
- (void)setCheckMeterInterval:(double)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (void)onVADDetectFirstStart:(id)arg1;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(BOOL)arg3;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADFilterdSpeakingVoice:(id)arg1;
- (void)onVADDetectDelayVoice:(id)arg1 Pcm:(id)arg2;
- (void)onVADDetectSilentTooLong;
- (void)onGetText:(id)arg1;
- (void)onLocalFileOperationError;
- (void)onNetworkError:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (void)resetSquenceMap;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)handleInterruptionBy3rdApp;
- (id)result;
- (void)setResult:(id)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (unsigned int)inputLanguageType;
- (long long)scene;
- (double)silenceTimelimit;
- (void)setSilenceTimelimit:(double)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (id)evad;
- (void)setEvad:(id)arg1;
- (id)sequenceMap;
- (void)setSequenceMap:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)currentVoiceId;
- (void)setCurrentVoiceId:(id)arg1;
- (void).cxx_destruct;
@end

