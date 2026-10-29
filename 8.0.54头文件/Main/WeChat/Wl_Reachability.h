@interface Wl_Reachability : NSObject
{
    BOOL localWiFiRef; // +0x8
    __SCNetworkReachability * reachabilityRef; // +0x10
}
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithAddress:(const sockaddr_in *)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
@end

