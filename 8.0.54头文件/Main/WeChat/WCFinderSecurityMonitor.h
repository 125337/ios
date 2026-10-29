@interface WCFinderSecurityMonitor : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _screenShotBlockDict; // +0x8
}
- (void)setReceiveScreenShootBlock:(id /* block */)arg1 forObject:(id)arg2;
- (void)cleanBlockForObject:(id)arg1;
- (void)onReceivewTakeScreenShotNotification:(id)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (id)screenShotBlockDict;
- (void)setScreenShotBlockDict:(id)arg1;
- (void).cxx_destruct;
@end

