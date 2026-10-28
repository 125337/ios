@interface FTSFloatingVoiceInputViewModel : NSObject <IStreamVoiceInputExt>
{
    id <FTSFloatingVoiceInputViewModelDelegate> _delegate; // +0x8
    unsigned long long _voiceInputState; // +0x10
    StreamVoiceInputLogic * _voiceInputLogic; // +0x18
    NSString * _lastResultText; // +0x20
    NSMutableDictionary * _delayTasks; // +0x28
}
- (void)notifyStreamVoiceInputError:(unsigned long long)arg1 errMsg:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)startRecord;
- (void)createVoiceInputLogic;
- (void)stopRecord;
- (void)cancelRecord;
- (void)doCancel:(unsigned long long)arg1;
- (void)handleTaskWithID:(id)arg1;
- (void)addDelayTaskWithID:(id)arg1 delay:(double)arg2;
- (void)cancelTaskWithID:(id)arg1;
- (void)setVoiceInputState:(unsigned long long)arg1;
- (void)OnPrepareRecord:(unsigned int)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onVoiceRecognizeCgiError:(unsigned int)arg1 uiMessage:(long long)arg2 ret:(long long)arg3 isResposeEmpty:(BOOL)arg4;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)onVoiceDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)voiceInputState;
- (id)voiceInputLogic;
- (void)setVoiceInputLogic:(id)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (id)delayTasks;
- (void)setDelayTasks:(id)arg1;
- (void).cxx_destruct;
@end
