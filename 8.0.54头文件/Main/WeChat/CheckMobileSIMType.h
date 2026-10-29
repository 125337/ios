@interface CheckMobileSIMType : MMUserService <CNetworkStatusExt, MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate>
{
    BOOL hasGetSimType; // +0x8
    unsigned int businessFlag; // +0xc
    unsigned int productType; // +0x10
    unsigned int simType; // +0x14
    unsigned long long lastCheckMobileSIMTypeTime; // +0x18
    unsigned long long cacheExpiredTime; // +0x20
    NSTimer * timer; // +0x28
    NSString * simCardIp; // +0x30
}
- (int)voIPMobileSIMType;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAuthOK;
- (int)GetSIMType:(int)arg1;
- (int)GetWKType;
- (BOOL)ParseSIMType:(int)arg1 flag:(unsigned int)arg2;
- (void)Check:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)GetIDFV;
- (id)getIPAddress;
- (id)getIPAddresses;
- (BOOL)MayBeUnicomNetwork;
- (void)NotifySimTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)NotifyWKTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)autoUpdate;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (void).cxx_destruct;
@end

