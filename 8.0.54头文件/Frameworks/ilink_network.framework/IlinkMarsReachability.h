@interface IlinkMarsReachability : NSObject
{
    BOOL localWiFiRef; // +0x8
    __SCNetworkReachability * reachabilityRef; // +0x10
}
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithAddress:(const sockaddr *)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (int)getCacheReachabilityStatus:(BOOL)arg1;
- (BOOL)MarsstartNotifier;
- (void)MarsstopNotifier;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
@end

