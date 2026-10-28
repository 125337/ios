@interface QBReachability : NSObject
{
    BOOL reachableOnWWAN; // +0x8
    __SCNetworkReachability * reachabilityRef; // +0x10
    NSObject<OS_dispatch_queue> * reachabilitySerialQueue; // +0x18
    id reachabilityObject; // +0x20
}
+ (id)reachabilityWithAddress:(const sockaddr_in *)arg1;
+ (id)reachabilityForInternetConnection;
- (id)initWithReachabilityRef:(__SCNetworkReachability *)arg1;
- (void)dealloc;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)isReachableWithFlags:(unsigned int)arg1;
- (BOOL)isReachable;
- (BOOL)isReachableViaWiFi;
- (long long)currentReachabilityStatus;
- (void)reachabilityChanged:(unsigned int)arg1;
- (void).cxx_destruct;
- (__SCNetworkReachability *)reachabilityRef;
- (void)setReachabilityRef:(__SCNetworkReachability *)arg1;
- (id)reachabilitySerialQueue;
- (void)setReachabilitySerialQueue:(id)arg1;
- (BOOL)reachableOnWWAN;
- (void)setReachableOnWWAN:(BOOL)arg1;
- (id)reachabilityObject;
- (void)setReachabilityObject:(id)arg1;
@end
