@interface WeNoteDictationController : NSObject <MMDictationLogicObserver>
{
    MMDictationLogic * _dictationLogic; // +0x8
    id <WeNoteDictationDelegate> _delegate; // +0x10
    _NSRange _dictationDisplayingRange; // +0x18
}
- (id)initWithCgiScene:(long long)arg1;
- (BOOL)isRecording;
- (BOOL)tapSwitch;
- (BOOL)start;
- (BOOL)stopForReason:(long long)arg1;
- (void)onDictationBegan;
- (void)onDictationFirstVoiceDataOut:(id)arg1;
- (void)onDictationLevelMeter:(float)arg1;
- (void)onDictationEnd:(id)arg1 endFlag:(long long)arg2 displayText:(id)arg3;
- (void)onDictationResult:(id)arg1;
- (id)dictationLogic;
- (void)setDictationLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (_NSRange)dictationDisplayingRange;
- (void)setDictationDisplayingRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
