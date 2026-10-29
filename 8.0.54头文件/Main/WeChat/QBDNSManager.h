@interface QBDNSManager : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue; // +0x8
    BOOL _dnsEnabled; // +0x10
    long long actualErrorDNSCount; // +0x18
    NSDate * actualErrorDNSDate; // +0x20
    NSDate * _detectServerDate; // +0x28
    BOOL _dnsServerEnabled; // +0x30
    QBDNSCache * _cache; // +0x38
    QBDNSUDPResolver * _defaultResolver; // +0x40
    QBDNSHTTPDESResolver * _httpDNSResolver; // +0x48
}
+ (id)sharedInstance;
- (id)qbDNSRequest:(id)arg1 cached:(BOOL)arg2;
- (void)storeCache;
- (void)handleActualErrorDNS:(long long)arg1;
- (void)detectDNSStatus;
- (void)handleResponse:(id)arg1;
- (void)handleBadRequest:(id)arg1 status:(long long)arg2;
- (id)query:(id)arg1 status:(long long)arg2;
- (id)queryInternalWithDomain:(id)arg1 resolver:(id)arg2 detect:(BOOL)arg3;
- (id)init;
- (void)IBSDNSSettingChanged:(id)arg1;
- (long long)badDateInterVal;
- (BOOL)isHTTPDNSEnabled;
- (void)loadData;
- (long long)isNetworkChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end

