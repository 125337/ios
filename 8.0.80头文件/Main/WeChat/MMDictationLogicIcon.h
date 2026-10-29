@interface MMDictationLogicIcon : MMDictationIconView <MMDictationLogicObserver>
{
    id <IMMDictationLogic> _dictationLogic; // +0x78
    unsigned long long _uiParentScene; // +0x80
    unsigned long long _microphoneAuthScene; // +0x88
    long long _cgiScene; // +0x90
    unsigned long long _uiScene; // +0x98
    unsigned long long _triggerScene; // +0xa0
    unsigned long long _dictationStopTimestamp; // +0xa8
    NSString * _cachedReportKey; // +0xb0
    NSData * _analyzedChatContext; // +0xb8
    unsigned long long _chatContextGeneration; // +0xc0
    _NSRange _dictationDisplayingRange; // +0xc8
}
+ (void)showToastForEndFlag:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 customIconImage:(id)arg2 cgiScene:(long long)arg3 uiScene:(unsigned long long)arg4 uiParentScene:(unsigned long long)arg5;
- (void)iconClicked;
- (BOOL)isRecording;
- (BOOL)isWaitingForEndFlag;
- (BOOL)start:(unsigned long long)arg1;
- (id)dictationExtraData;
- (BOOL)shouldAnalyzeChatContext;
- (void)beginAnalyzedChatContextSession;
- (void)invalidateAnalyzedChatContextSession;
- (void)requestAnalyzedChatContext;
- (void)applyAnalyzedChatContext:(id)arg1 forGeneration:(unsigned long long)arg2;
- (BOOL)stopForReason:(long long)arg1;
- (BOOL)stopForReason:(long long)arg1 waitEndFlag:(BOOL)arg2;
- (void)onDictationBegan:(id)arg1;
- (void)onDictationLevelMeter:(float)arg1;
- (void)onDictationRecordStopped:(id)arg1 reason:(long long)arg2;
- (void)onDictationEnd:(id)arg1 endFlag:(long long)arg2 stopMode:(long long)arg3 displayText:(id)arg4;
- (void)onDictationResult:(id)arg1 shouldCover:(BOOL)arg2;
- (id)reportKey;
- (void)dealloc;
- (id)chatName;
- (void)onUserModifyText;
- (void)onSendFullText:(id)arg1;
- (void)onExpose:(id)arg1;
- (void)setupExposeReport;
- (BOOL)startDictationByKeyBoard;
- (BOOL)stopDictationByKeyBoard;
- (id)dictationLogic;
- (void)setDictationLogic:(id)arg1;
- (unsigned long long)uiParentScene;
- (void)setUiParentScene:(unsigned long long)arg1;
- (unsigned long long)microphoneAuthScene;
- (void)setMicrophoneAuthScene:(unsigned long long)arg1;
- (_NSRange)dictationDisplayingRange;
- (void)setDictationDisplayingRange:(_NSRange)arg1;
- (long long)cgiScene;
- (void)setCgiScene:(long long)arg1;
- (unsigned long long)uiScene;
- (void)setUiScene:(unsigned long long)arg1;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (unsigned long long)dictationStopTimestamp;
- (void)setDictationStopTimestamp:(unsigned long long)arg1;
- (id)cachedReportKey;
- (void)setCachedReportKey:(id)arg1;
- (id)analyzedChatContext;
- (void)setAnalyzedChatContext:(id)arg1;
- (unsigned long long)chatContextGeneration;
- (void)setChatContextGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
