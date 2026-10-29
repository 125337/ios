@interface WorldTranslateManager : NSObject
{
    long long _state; // +0x8
    NSString * _originalText; // +0x10
    id <WorldTranslateManagerDelegate> _delegate; // +0x18
    NSString * _chatName; // +0x20
    SpeakTextLogicController * _speakController; // +0x28
    NSString * _reportSessionID; // +0x30
    NSString * _reportLanguage; // +0x38
    NSString * _systemlanguage; // +0x40
    NSString * _originalLanguage; // +0x48
    NSString * _speakingLanguage; // +0x50
}
+ (id)supportedLanguageModels;
- (id)init;
- (id)targetLanguage;
- (void)onUserEditText:(id)arg1;
- (void)onClickTranslateButtonText:(id)arg1;
- (void)initalVoiceToText:(id)arg1;
- (void)onSelectLanguage:(id)arg1;
- (void)setSpeakDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (void)startTranslate;
- (void)onTranslateTextChange:(id)arg1;
- (void)onTranslateStateChange;
- (void)requestTransTextWithCompletion:(id /* block */)arg1;
- (void)getDefaultLanguageText:(id)arg1;
- (void)speakText:(id)arg1;
- (void)stopSpeak;
- (BOOL)isNullOrNil:(id)arg1;
- (long long)getChineseCount:(id)arg1;
- (BOOL)isTotalChinese:(id)arg1;
- (BOOL)localTTSVoice;
- (void)addCommonReportParamsTo:(id)arg1;
- (id)reportParams;
- (void)bind:(id)arg1 viewId:(id)arg2 params:(id)arg3 paramsBlock:(id /* block */)arg4 reportPolicy:(unsigned long long)arg5;
- (void)bind:(id)arg1 viewId:(id)arg2 params:(id)arg3 paramsBlock:(id /* block */)arg4;
- (id)reportParams:(id)arg1;
- (long long)state;
- (id)originalText;
- (void)setOriginalText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)speakController;
- (void)setSpeakController:(id)arg1;
- (id)reportSessionID;
- (void)setReportSessionID:(id)arg1;
- (id)reportLanguage;
- (void)setReportLanguage:(id)arg1;
- (id)systemlanguage;
- (void)setSystemlanguage:(id)arg1;
- (id)originalLanguage;
- (void)setOriginalLanguage:(id)arg1;
- (id)speakingLanguage;
- (void)setSpeakingLanguage:(id)arg1;
- (void).cxx_destruct;
@end
