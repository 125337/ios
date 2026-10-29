@interface VoIPStatusExtensionSyncService : MMUserService <MMServiceProtocol>
{
    id /* block */ _updateAppStatusBlock; // +0x8
}
- (void)resetAppStatus;
- (void)updateAppStatus;
- (void)cancelUpdatingAppStatusContinually;
- (void)updateAppStatusContinually;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)UIManagerDidOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 startInApp:(BOOL)arg3 isEarMode:(BOOL)arg4 isAudioMode:(BOOL)arg5 from:(unsigned long long)arg6;
- (void)UIManagerDidCloseCompletely;
- (id /* block */)updateAppStatusBlock;
- (void)setUpdateAppStatusBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
