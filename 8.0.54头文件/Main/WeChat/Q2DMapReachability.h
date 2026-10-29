@interface Q2DMapReachability : NSObject
{
    BOOL reachableOnWWAN; // +0x8
    __SCNetworkReachability * reachabilityRef; // +0x10
    NSObject<OS_dispatch_queue> * reachabilitySerialQueue; // +0x18
    id /* block */ reachableBlock; // +0x20
    id /* block */ unreachableBlock; // +0x28
    id reachabilityObject; // +0x30
}
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityWithAddress:(const sockaddr *)arg1;
+ (id)reachabilityForInternetConnection;
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
- (int)currentReachabilityStatus;
- (unsigned int)reachabilityFlags;
- (id)currentReachabilityString;
- (id)currentReachabilityFlags;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)description;
- (__SCNetworkReachability *)reachabilityRef;
- (void)setReachabilityRef:(__SCNetworkReachability *)arg1;
- (id)reachabilitySerialQueue;
- (void)setReachabilitySerialQueue:(id)arg1;
- (BOOL)reachableOnWWAN;
- (void)setReachableOnWWAN:(BOOL)arg1;
- (id /* block */)reachableBlock;
- (void)setReachableBlock:(id /* block */)arg1;
- (id /* block */)unreachableBlock;
- (void)setUnreachableBlock:(id /* block */)arg1;
- (id)reachabilityObject;
- (void)setReachabilityObject:(id)arg1;
- (void).cxx_destruct;
@end

