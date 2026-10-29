@interface AppCatchCrashMgr : MMUserService <MMServiceProtocol>
{
    BOOL _hasCrashAppId; // +0x8
    unsigned int _callMonitorCount; // +0xc
}
- (void)onServiceInit;
- (void)beginMonitor;
- (void)endMonitor;
- (BOOL)canCallCanOpenUrlMethod;
- (void)setForceCallCanOpenUrl;
- (void)saveCallMonitorCount;
- (void)loadCallMonitorCount;
@end

