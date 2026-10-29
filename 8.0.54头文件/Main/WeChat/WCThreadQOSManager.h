@interface WCThreadQOSManager : MMRootService <MMKernelExt, IExptServiceExt, MMServiceProtocol>
{
    NSString * m_configPath; // +0x8
    WCThreadQOSManagerConfig * m_config; // +0x10
}
- (void)onServiceInit;
- (void)prepareInMain;
- (void)initPaths;
- (void)loadMonitorConfig;
- (void)saveMonitorConfigBackground;
- (void)checkThreadQOS;
- (void)handleBlackListStrategy;
- (void)handleWhiteListStrategy;
- (BOOL)isAppleThread:(const char *)arg1;
- (BOOL)isBlackListThread:(const char *)arg1;
- (BOOL)isWhiteListThread:(const char *)arg1;
- (void)onAuthOK;
- (void)onExptItemListChange;
- (void)setupStrategyFromXLab;
- (BOOL)isDeviceHighPerformance;
- (void).cxx_destruct;
@end

