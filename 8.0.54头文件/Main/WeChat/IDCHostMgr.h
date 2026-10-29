@interface IDCHostMgr : MMUserService <MMServiceProtocol>
{
    HostList * _axHostList; // +0x8
    NSSet * _axHostSet; // +0x10
    NSSet * _mainHostSet; // +0x18
}
+ (id)GetRealHostFromHost:(id)arg1;
+ (id)GetLocalHostListWithType:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
+ (void)updateCertRegion:(unsigned int)arg1;
+ (unsigned int)GetMMTlsRegion;
+ (void)ClearMMTlsAllPsk;
+ (void)tryTestMMTlsRegion;
- (id)getAnyMainHost;
- (id)getAnyAxHost;
- (BOOL)isInMainHostList:(id)arg1;
- (BOOL)isInAxHostList:(id)arg1;
- (void)HandleAxHostListFromPB:(id)arg1;
- (void)HandleHostListFromPB:(id)arg1;
- (void)HandleIPListFromPB:(id)arg1 PortList:(id)arg2 TimeOutList:(id)arg3;
- (void)HandleNetworkSectResp:(id)arg1;
- (void)changeDebugIpIfNeeded;
- (id)axHostList;
- (void)setAxHostList:(id)arg1;
- (id)axHostSet;
- (void)setAxHostSet:(id)arg1;
- (id)mainHostSet;
- (void)setMainHostSet:(id)arg1;
- (void).cxx_destruct;
@end

