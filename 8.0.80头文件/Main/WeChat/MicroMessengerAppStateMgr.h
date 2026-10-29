@interface MicroMessengerAppStateMgr : MMUserService <MMServiceProtocol>
{
    BOOL _bForegroundActive; // +0x8
    long long _lastResignActiveTime; // +0x10
}
- (void)onServiceInit;
- (void)dealloc;
- (BOOL)isForegroundActive;
- (long long)lastResignActiveTime;
- (void)onClickWindow;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground;
- (BOOL)bForegroundActive;
- (void)setBForegroundActive:(BOOL)arg1;
- (void)setLastResignActiveTime:(long long)arg1;
@end
