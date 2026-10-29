@interface TencentLBSReachability : NSObject
{
    __SCNetworkReachability * _reachabilityRef; // +0x8
}
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithAddress:(const sockaddr *)arg1;
+ (id)reachabilityForInternetConnection;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)connectionRequired;
- (long long)currentReachabilityStatus;
@end
