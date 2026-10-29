@interface MJShootComposingVoiceInputDetector : NSObject <IStreamVoiceInputExt>
{
    BOOL _isDetecting; // +0x8
    id <MJShootComposingVoiceInputDetectorDelegate> _delegate; // +0x10
    StreamVoiceInputLogic * _curInputLogic; // +0x18
}
- (void)dealloc;
- (void)startDetecting;
- (void)stopDetecting;
- (void)OnPrepareRecord:(unsigned int)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnRecordFirstDataOut:(unsigned int)arg1 voiceId:(id)arg2;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
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
- (id)curInputLogic;
- (void)setCurInputLogic:(id)arg1;
- (void).cxx_destruct;
@end
