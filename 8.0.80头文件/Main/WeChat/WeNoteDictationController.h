@interface WeNoteDictationController : NSObject <MMDictationLogicObserver, MMSpeakerDiarizationDelegate>
{
    BOOL _allowCommand; // +0x8
    BOOL _needDistinguishText; // +0x9
    BOOL _waitingForFinalResult; // +0xa
    int _distinguishFinishResult; // +0xc
    MMDictationLogic * _dictationLogic; // +0x10
    id <WeNoteDictationDelegate> _delegate; // +0x18
    NSString * _lastResultText; // +0x20
    MMSpeakerDiarizationLogic * _speakerDiarizationLogic; // +0x28
    long long _voiceCgiScene; // +0x30
    _NSRange _dictationDisplayingRange; // +0x38
}
- (id)initWithCgiScene:(long long)arg1;
- (BOOL)isRecording;
- (BOOL)tapSwitch;
- (void)reemitCurrentDictationResultIfRecording;
- (BOOL)start;
- (BOOL)stopForReason:(long long)arg1;
- (BOOL)stopForReason:(long long)arg1 waitEndFlag:(BOOL)arg2;
- (void)distinguishSpeakerText:(BOOL)arg1;
- (void)resetDistinguishSpeakerState;
- (void)onDictationBegan:(id)arg1;
- (void)onDictationLevelMeter:(float)arg1;
- (void)onDictationRecordStopped:(id)arg1 reason:(long long)arg2;
- (void)onDictationEnd:(id)arg1 endFlag:(long long)arg2 stopMode:(long long)arg3 displayText:(id)arg4;
- (void)onDictationResult:(id)arg1 shouldCover:(BOOL)arg2;
- (void)MMSpeakerDiarization:(id)arg1 didUpdateSpeakerNum:(int)arg2;
- (void)MMSpeakerDiarization:(id)arg1 didFinishWithCode:(unsigned long long)arg2;
- (id)dictationLogic;
- (void)setDictationLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)allowCommand;
- (void)setAllowCommand:(BOOL)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (id)speakerDiarizationLogic;
- (void)setSpeakerDiarizationLogic:(id)arg1;
- (_NSRange)dictationDisplayingRange;
- (void)setDictationDisplayingRange:(_NSRange)arg1;
- (long long)voiceCgiScene;
- (void)setVoiceCgiScene:(long long)arg1;
- (int)distinguishFinishResult;
- (void)setDistinguishFinishResult:(int)arg1;
- (BOOL)needDistinguishText;
- (void)setNeedDistinguishText:(BOOL)arg1;
- (BOOL)waitingForFinalResult;
- (void)setWaitingForFinalResult:(BOOL)arg1;
- (void).cxx_destruct;
@end
