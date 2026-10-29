@interface UDRStartListener : MMRootService <CNetworkStatusExt, MMServiceProtocol>
{
    int _lastNetworkType; // +0x8
    IUdrCppGlobalFeature * _affuniversal; // +0x10
}
+ (id)sharedInstance;
- (void)onServiceInit;
- (void)dealloc;
- (BOOL)doInitialize;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)affuniversal;
- (void)setAffuniversal:(id)arg1;
- (int)lastNetworkType;
- (void)setLastNetworkType:(int)arg1;
- (void).cxx_destruct;
@end
