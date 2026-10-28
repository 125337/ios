@interface MMDictationLogicIcon : MMDictationIconView <MMDictationLogicObserver>
{
    id <IMMDictationLogic> _dictationLogic; // +0x60
    id <MMDictationLogicIconDelegate> _delegate; // +0x68
    unsigned long long _uiParentScene; // +0x70
    unsigned long long _uiScene; // +0x78
    unsigned long long _triggerScene; // +0x80
    _NSRange _dictationDisplayingRange; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 customIconImage:(id)arg2 cgiScene:(long long)arg3 uiScene:(unsigned long long)arg4 uiParentScene:(unsigned long long)arg5;
- (void)dealloc;
- (void)iconClicked;
- (BOOL)isRecording;
- (BOOL)start:(unsigned long long)arg1;
- (BOOL)stopForReason:(long long)arg1;
- (void)onDictationBegan;
- (void)onDictationFirstVoiceDataOut:(id)arg1;
- (void)onDictationLevelMeter:(float)arg1;
- (void)onDictationEnd:(id)arg1 endFlag:(long long)arg2 displayText:(id)arg3;
- (void)onDictationResult:(id)arg1;
- (id)reportKey;
- (id)chatName;
- (void)onUserModifyText;
- (void)onSendFullText:(id)arg1;
- (void)onClearAllText;
- (void)onExpose:(id)arg1;
- (void)setupExposeReport;
- (id)dictationLogic;
- (void)setDictationLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)uiParentScene;
- (void)setUiParentScene:(unsigned long long)arg1;
- (_NSRange)dictationDisplayingRange;
- (void)setDictationDisplayingRange:(_NSRange)arg1;
- (unsigned long long)uiScene;
- (void)setUiScene:(unsigned long long)arg1;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
