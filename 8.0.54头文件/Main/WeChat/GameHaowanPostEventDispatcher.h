@interface GameHaowanPostEventDispatcher : MMUserService <MMServiceProtocol, IGameHaowanPostMgrExt>
{
    NSHashTable * _webviewControllers; // +0x8
}
- (void)onServiceInit;
- (void)putWebviewController:(id)arg1;
- (void)onGameHaowanPostProgress:(id)arg1 percent:(float)arg2;
- (void)onGameHaowanPostSucceed:(id)arg1;
- (void)onGameHaowanPostFailed:(id)arg1 error:(id)arg2;
- (void)onGameHaowanPostCanceled:(id)arg1;
- (void).cxx_destruct;
@end

