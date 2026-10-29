@interface LiteAppVoiceInputDetector : NSObject <IStreamVoiceInputExt>
{
    BOOL _isDetecting; // +0x8
    BOOL _continuous; // +0x9
    BOOL _isSpeeking; // +0xa
    BOOL _isRecording; // +0xb
    unsigned int _inputLanguageType; // +0xc
    float _lastPeakPower; // +0x10
    id <LiteAppVoiceInputDetectorDelegate> _delegate; // +0x18
    long long _scene; // +0x20
    NSString * _lastResultText; // +0x28
    StreamVoiceInputLogic * _curInputLogic; // +0x30
    long long _currentGeneration; // +0x38
}
- (void)dealloc;
- (void)startDetecting;
- (void)startVoiceInputLogic;
- (BOOL)isCurrentGeneration:(long long)arg1;
- (void)stopDetecting;
- (void)handleResultText:(id)arg1;
- (void)OnPrepareRecord:(unsigned int)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnRecordFirstDataOut:(unsigned int)arg1 voiceId:(id)arg2;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)handleVoiceTransEnd:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)onVoiceDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVoiceDetectSilenceToSpeakingWithInputId:(unsigned int)arg1 time:(long long)arg2 data:(id)arg3;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVoiceRecognizeCgiError:(unsigned int)arg1 uiMessage:(long long)arg2 ret:(long long)arg3 isResposeEmpty:(BOOL)arg4;
- (void)onRecordWillEndedByInterruption:(unsigned int)arg1 is3rdApp:(BOOL)arg2;
- (void)onVoiceRecognizeCgiWillStart:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3;
- (void)onVoiceRecognizeCgiDidEnd:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3 textLen:(unsigned long long)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDetecting;
- (void)setIsDetecting:(BOOL)arg1;
- (unsigned int)inputLanguageType;
- (void)setInputLanguageType:(unsigned int)arg1;
- (BOOL)continuous;
- (void)setContinuous:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (id)curInputLogic;
- (void)setCurInputLogic:(id)arg1;
- (float)lastPeakPower;
- (void)setLastPeakPower:(float)arg1;
- (BOOL)isSpeeking;
- (void)setIsSpeeking:(BOOL)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (long long)currentGeneration;
- (void)setCurrentGeneration:(long long)arg1;
- (void).cxx_destruct;
@end
