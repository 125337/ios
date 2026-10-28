@interface WCThreadQOSManager : MMRootService <MMKernelExt, IExptServiceExt, MMServiceProtocol>
{
    NSString * m_configPath; // +0x8
    WCThreadQOSManagerConfig * m_config; // +0x10
}
- (void)onServiceInit;
- (void)prepareInMain;
- (void)initQOSStrategyRule;
- (void)initPaths;
- (void)loadMonitorConfig;
- (void)saveMonitorConfigBackground;
- (void)checkThreadQOS;
- (void)setUserType:(unsigned long long)arg1;
- (void)onAuthOK;
- (void)onExptItemListChange;
- (void)setupStrategyFromXLab;
- (void)handleThermalStateDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
@end
