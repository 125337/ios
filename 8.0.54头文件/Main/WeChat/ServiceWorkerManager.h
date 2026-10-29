@interface ServiceWorkerManager : MMUserService <IWSSearchUtilExtension, MMServiceProtocol>
{
    BOOL _shouldCancelTask; // +0x8
    NSString * _currLiteAppId; // +0x10
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (BOOL)enableServiceWorker;
- (void)checkCreateStore;
- (void)releaseStore;
- (void)notifyLifecycleStateChange:(BOOL)arg1;
- (void)notifyBottomTabSwitch:(id)arg1;
- (void)notifySearchEntryExpose:(id)arg1;
- (void)notifySearchEntryClick:(id)arg1;
- (void)notifySearchQuit:(id)arg1;
- (void)publishGlobalEventToAll:(id)arg1 params:(id)arg2;
- (void)onTemplateApplyed:(unsigned long long)arg1;
- (id)currLiteAppId;
- (void)setCurrLiteAppId:(id)arg1;
- (BOOL)shouldCancelTask;
- (void)setShouldCancelTask:(BOOL)arg1;
- (void).cxx_destruct;
@end

