@interface VoiceMessageEnhancementSessionManager : MMUserService <BaseMsgViewControllerExt, MMServiceProtocol>
{
    os_unfair_lock_s _stateLock; // +0x8
    NSMutableDictionary * _sessionStates; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)tryMarkSnackBarShownForSession:(id)arg1;
- (BOOL)isTemporaryEnhancementEnabledForSession:(id)arg1;
- (void)setTemporaryEnhancementEnabled:(BOOL)arg1 forSession:(id)arg2;
- (BOOL)tryMarkSystemMessageShownForSession:(id)arg1;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (id)stateForSessionLocked:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)sessionStates;
- (void)setSessionStates:(id)arg1;
- (void).cxx_destruct;
@end
