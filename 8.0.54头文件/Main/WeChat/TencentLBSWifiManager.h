@interface TencentLBSWifiManager : NSObject
{
    NSDictionary * _wifiInfo; // +0x8
    TencentLBSReachability * _internetReachability; // +0x10
    NSOperationQueue * _queue; // +0x18
}
+ (id)sharedInstance;
+ (id)captiveWifiInfo;
- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)arg1;
- (id)wifiInfo;
- (void)setWifiInfo:(id)arg1;
- (id)internetReachability;
- (void)setInternetReachability:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end

