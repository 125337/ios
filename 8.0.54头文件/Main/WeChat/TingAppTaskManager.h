@interface TingAppTaskManager : NSObject <IMMFontMgrExt, IMMLanguageMgrExt>
{
    BOOL _hasPendingDisplayMode; // +0x8
    id <ITingRouter> _router; // +0x10
}
- (id)init;
- (id)service;
- (int)appDisplayMode;
- (void)setAppDisplayMode:(int)arg1;
- (int)enterScene;
- (id)sessionId;
- (void)updateSessionWithEnterScene:(int)arg1;
- (void)clearSession;
- (void)reloadRouter;
- (void)cancelDelayTeminatieApp;
- (BOOL)checkNeedDelayTerminateApp;
- (void)delayTerminateApp;
- (void)terminateAppImmediatly;
- (void)terminateAppImmediatlyWithForceDismiss:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onLimitedModeChanged;
- (id)router;
- (void)setRouter:(id)arg1;
- (BOOL)hasPendingDisplayMode;
- (void)setHasPendingDisplayMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

