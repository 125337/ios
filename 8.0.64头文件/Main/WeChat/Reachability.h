@interface Reachability : NSObject
{
    BOOL _reachableOnWWAN; // +0x8
    id /* block */ _reachableBlock; // +0x10
    id /* block */ _unreachableBlock; // +0x18
    id /* block */ _reachabilityBlock; // +0x20
    __SCNetworkReachability * _reachabilityRef; // +0x28
    NSObject<OS_dispatch_queue> * _reachabilitySerialQueue; // +0x30
    id _reachabilityObject; // +0x38
}
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityWithAddress:(void *)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithURL:(id)arg1;
+ (BOOL)isIpAddress:(id)arg1;
- (id)initWithReachabilityRef:(__SCNetworkReachability *)arg1;
- (void)dealloc;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)isReachableWithFlags:(unsigned int)arg1;
- (BOOL)isReachable;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isConnectionRequired;
- (BOOL)connectionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)isInterventionRequired;
- (long long)currentReachabilityStatus;
- (unsigned int)reachabilityFlags;
- (id)currentReachabilityString;
- (id)currentReachabilityFlags;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)description;
- (id /* block */)reachableBlock;
- (void)setReachableBlock:(id /* block */)arg1;
- (id /* block */)unreachableBlock;
- (void)setUnreachableBlock:(id /* block */)arg1;
- (id /* block */)reachabilityBlock;
- (void)setReachabilityBlock:(id /* block */)arg1;
- (BOOL)reachableOnWWAN;
- (void)setReachableOnWWAN:(BOOL)arg1;
- (__SCNetworkReachability *)reachabilityRef;
- (void)setReachabilityRef:(__SCNetworkReachability *)arg1;
- (id)reachabilitySerialQueue;
- (void)setReachabilitySerialQueue:(id)arg1;
- (id)reachabilityObject;
- (void)setReachabilityObject:(id)arg1;
- (void).cxx_destruct;
@end
