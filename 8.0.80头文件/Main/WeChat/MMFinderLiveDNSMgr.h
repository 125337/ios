@interface MMFinderLiveDNSMgr : MMUserService <CNetworkStatusExt, MMServiceProtocol>
{
    BOOL _resolveBeforeUsage; // +0x8
    BOOL _isInBackground; // +0x9
    unsigned int _lastRefreshNetType; // +0xc
    unsigned int _lastNetworkChangeTimestamp; // +0x10
    long long _strategy; // +0x18
    double _dnsRefreshIntervalInSeconds; // +0x20
    NSMutableDictionary * _hostIpMap; // +0x28
    NSMutableDictionary * _invalidHostIpMap; // +0x30
    NSArray * _hostsToResolve; // +0x38
    double _lastRefreshTimestamp; // +0x40
    MMTimer * _refreshTimer; // +0x48
    MMLiveFlowCancelationSource * _terminationCancelationSource; // +0x50
}
+ (void)initDNSMgrServiceIfNeeded;
+ (id)localDNSResolve:(id)arg1;
+ (void)mmdnsResolve:(id)arg1 fallbackLocal:(BOOL)arg2 hostIpMap:(id)arg3 cancelationToken:(id)arg4;
+ (void)initMMDNSIfNeeded;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (void)forceRefreshDNSMap;
- (void)refreshDNSMap;
- (void)refreshDNSWithLocalDNSFirst;
- (void)refreshDNSWithMMDNS;
- (void)scheduleNextRefreshWithDelay:(double)arg1;
- (void)stopRefreshTimer;
- (id)getIPForHost:(id)arg1;
- (void)markHostDNSInvalidWithUrl:(id)arg1;
- (id)resolvedUrlWithUrl:(id)arg1;
- (long long)strategy;
- (void)setStrategy:(long long)arg1;
- (BOOL)resolveBeforeUsage;
- (void)setResolveBeforeUsage:(BOOL)arg1;
- (double)dnsRefreshIntervalInSeconds;
- (void)setDnsRefreshIntervalInSeconds:(double)arg1;
- (id)hostIpMap;
- (void)setHostIpMap:(id)arg1;
- (id)invalidHostIpMap;
- (void)setInvalidHostIpMap:(id)arg1;
- (id)hostsToResolve;
- (void)setHostsToResolve:(id)arg1;
- (unsigned int)lastRefreshNetType;
- (void)setLastRefreshNetType:(unsigned int)arg1;
- (double)lastRefreshTimestamp;
- (void)setLastRefreshTimestamp:(double)arg1;
- (unsigned int)lastNetworkChangeTimestamp;
- (void)setLastNetworkChangeTimestamp:(unsigned int)arg1;
- (id)refreshTimer;
- (void)setRefreshTimer:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)terminationCancelationSource;
- (void)setTerminationCancelationSource:(id)arg1;
- (void).cxx_destruct;
@end
