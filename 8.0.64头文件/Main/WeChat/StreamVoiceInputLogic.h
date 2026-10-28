@interface StreamVoiceInputLogic : NSObject <SimpleRecordBufferDelegate, UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate, WCAudioModuleDelegate>
{
    unsigned int m_uiVoiceOffset; // +0x8
    NSMutableArray * m_voiceIdArray; // +0x10
    BOOL m_bStop; // +0x18
    unsigned long long _startInputTiem; // +0x20
    AudioCoder * m_silkEncoder; // +0x28
    BOOL _disableAudioModule; // +0x30
    BOOL _useClientVad; // +0x31
    BOOL _forceToUseBuiltInMic; // +0x32
    BOOL _shouldFilterResultWithVoiceId; // +0x33
    BOOL _bStartFirstDetect; // +0x34
    unsigned int _currentInputId; // +0x38
    unsigned int _inputLanguageType; // +0x3c
    float _vadSAndNRation; // +0x40
    StreamInputResult * _result; // +0x48
    long long _scene; // +0x50
    double _silenceTimelimit; // +0x58
    SimpleAudioRecorder * _recorder; // +0x60
    UploadStreamVoiceDataMgr * _uploadMgr; // +0x68
    EVADProcessor * _evad; // +0x70
    NSMutableDictionary * _sequenceMap; // +0x78
    NSString * _sessionId; // +0x80
    NSString * _currentVoiceId; // +0x88
}
- (id)init;
- (id)initWithScene:(long long)arg1;
- (void)dealloc;
- (void)setInputLanguageType:(unsigned int)arg1;
- (void)setVoiceRecognizeExtraData:(id)arg1;
- (BOOL)isRecording;
- (long long)getRecordingTime;
- (unsigned int)StartInput;
- (void)asyncStartInput:(id /* block */)arg1;
- (BOOL)StopRecord;
- (void)ExitVoiceInput;
- (id)GetVoiceIds;
- (void)setCheckMeterInterval:(double)arg1;
- (double)checkMeterInterval;
- (void)setUseClientVad:(BOOL)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)processVoiceDataWithoutEVAD:(id)arg1 queueItem:(id)arg2;
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
- (void)onVoiceRecognizeCgiError:(unsigned int)arg1 uiMessage:(long long)arg2 ret:(long long)arg3 isResposeEmpty:(BOOL)arg4;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVoiceRecognizeCgiWillStart:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3;
- (void)onVoiceRecognizeCgiDidEnd:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3 textLen:(unsigned long long)arg4;
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
- (float)vadSAndNRation;
- (void)setVadSAndNRation:(float)arg1;
- (BOOL)disableAudioModule;
- (void)setDisableAudioModule:(BOOL)arg1;
- (BOOL)useClientVad;
- (BOOL)forceToUseBuiltInMic;
- (void)setForceToUseBuiltInMic:(BOOL)arg1;
- (BOOL)shouldFilterResultWithVoiceId;
- (void)setShouldFilterResultWithVoiceId:(BOOL)arg1;
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
- (BOOL)bStartFirstDetect;
- (void)setBStartFirstDetect:(BOOL)arg1;
- (void).cxx_destruct;
@end
