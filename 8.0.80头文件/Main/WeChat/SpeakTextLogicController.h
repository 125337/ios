@interface SpeakTextLogicController : NSObject <SpeakTextDelegate, WCAudioModuleDelegate>
{
    unsigned long long m_lastReceiveTimeMs; // +0x8
    _NSRange m_lastReceiveRange; // +0x10
    unsigned int m_lastReceiveCostTimeMs; // +0x20
    BOOL _useNewTTS; // +0x24
    int _scene; // +0x28
    id <SpeakTextLogicControllerDelegate> _delegate; // +0x30
    NSString * _reportIdentifier; // +0x38
    SpeakTextLogicV2 * _speakLogic; // +0x40
}
+ (BOOL)isEnableTextTranslateSpeak;
- (id)init;
- (void)dealloc;
- (BOOL)StartSpeakText:(id)arg1;
- (BOOL)StartSpeakText:(id)arg1 language:(id)arg2;
- (void)PauseSpeak;
- (void)ResumeSpeak;
- (void)EndSpeak;
- (BOOL)IsPlaying;
- (BOOL)lastSpeakFinished;
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
- (BOOL)useNewTTS;
- (void)setUseNewTTS:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)speakLogic;
- (void)setSpeakLogic:(id)arg1;
- (void).cxx_destruct;
@end
