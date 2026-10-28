@interface SpeakTextLogicController : NSObject <SpeakTextDelegate, WCAudioModuleDelegate>
{
    unsigned long long m_lastReceiveTimeMs; // +0x8
    _NSRange m_lastReceiveRange; // +0x10
    unsigned int m_lastReceiveCostTimeMs; // +0x20
    id <SpeakTextLogicControllerDelegate> _delegate; // +0x28
    NSString * _reportIdentifier; // +0x30
    SpeakTextLogicV2 * _speakLogic; // +0x38
}
+ (BOOL)newTTS;
- (id)init;
- (void)dealloc;
- (BOOL)StartSpeakText:(id)arg1;
- (void)PauseSpeak;
- (void)ResumeSpeak;
- (void)EndSpeak;
- (BOOL)IsPlaying;
- (unsigned int)currentSpeakIndex;
- (void)onSpeakStart:(_NSRange)arg1 costTimeMs:(unsigned int)arg2;
- (void)onSpeakLoading;
- (void)onSpeakStop;
- (void)onSpeakFail;
- (void)initSpeakTextLogic;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportIdentifier;
- (void)setReportIdentifier:(id)arg1;
- (id)speakLogic;
- (void)setSpeakLogic:(id)arg1;
- (void).cxx_destruct;
@end
