@interface WAJSContextPlugin_system : WAJSContextPluginBase <IMMLanguageMgrExt, WAWebActionSheetDelegate>
{
    BOOL _oldIdleTimerDisabled; // +0x8
    BOOL _idleTimerDisabled; // +0x9
    BOOL _idleTimeChnaged; // +0xa
    BOOL _enableTranslateLanguage; // +0xb
    BOOL _autoTranslateLanguage; // +0xc
    BOOL _translateOn; // +0xd
    long long _buttonTranslateState; // +0x10
    long long _pageTranslateState; // +0x18
    long long _capsuleTranslateState; // +0x20
    WAWebActionSheet * _actionSheet; // +0x28
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)didTakeScreenshot;
- (id)silentCaptureScreenshotForTask:(id)arg1;
- (void)setIdleTimeDisable:(BOOL)arg1;
- (void)restoreIdleTime;
- (BOOL)getIdleTimeDisable;
- (void)onSplashAdDidFinished;
- (void)requestJumpFromTaskSyncTranslateStateIfNeeded;
- (void)onPageStateDecideTimeout;
- (void)onTranslateStateDecideTimeout;
- (id)getCapsuleView;
- (void)setButtonTranslateState:(long long)arg1;
- (void)setPageTranslateState:(long long)arg1;
- (void)setCapsuleTranslateState:(long long)arg1;
- (void)onCapsuleTranslate;
- (void)onCapsuleTranslateDoing;
- (void)onCapsuleMore;
- (void)onCapsuleExit;
- (void)onMenuTranslate;
- (void)onMenuTranslateRevert;
- (void)onMenuChangeTranslateLanguage;
- (void)sendTranslateEntryClickEvent:(BOOL)arg1;
- (void)syncTranslateStateToJumpingEmbedTaskIfNeeded;
- (void)onTranslateLanguageChange;
- (void)onCancel;
- (void)onSelected:(long long)arg1;
- (BOOL)enableTranslateLanguage;
- (void)setEnableTranslateLanguage:(BOOL)arg1;
- (long long)buttonTranslateState;
- (long long)pageTranslateState;
- (long long)capsuleTranslateState;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (BOOL)autoTranslateLanguage;
- (void)setAutoTranslateLanguage:(BOOL)arg1;
- (BOOL)translateOn;
- (void)setTranslateOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
