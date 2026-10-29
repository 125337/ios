@interface TPNetworkUtil : NSObject
{
    __SCNetworkReachability * _defaultRouteReachability; // +0x8
    BOOL _started; // +0x10
    long long _reachableState; // +0x18
    TPRecursiveLock * _delegateLock; // +0x20
    NSHashTable * _delegateArray; // +0x28
    long long _cellNetType; // +0x30
}
+ (id)sharedInstance;
+ (BOOL)isNetworkType5G:(id)arg1;
- (id)init;
- (long long)networkType;
- (void)startIfNeeded;
- (void)stopIfNeeded;
- (void)startListenNetworkState;
- (void)stopListenNetworkState;
- (void)reset:(long long)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (BOOL)isNetWorkReachable;
- (BOOL)isWifiAcitve;
- (BOOL)isWWANAcitve;
- (void)startListenRadioAccessTechnology;
- (void)stopListenRadioAccessTechnology;
- (void)handleTPNetworkCTRadioAccessTechnologyDidChangeNotification;
- (void)updateRadioAccessTechnology;
- (long long)reachableState;
- (void)setReachableState:(long long)arg1;
- (id)delegateLock;
- (void)setDelegateLock:(id)arg1;
- (id)delegateArray;
- (void)setDelegateArray:(id)arg1;
- (long long)cellNetType;
- (void)setCellNetType:(long long)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end

