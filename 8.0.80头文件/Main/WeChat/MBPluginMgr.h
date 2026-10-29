@interface MBPluginMgr : MMUserService <MMServiceProtocol, IMBPluginProxy>
{
    NSMapTable * _extPluginsMap; // +0x8
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)providePlugin:(id)arg1 version:(id)arg2;
- (id)extPluginsMap;
- (void)setExtPluginsMap:(id)arg1;
- (void).cxx_destruct;
@end
