@interface UPPaymentData : NSObject
{
    NSString * _schemeURL; // +0x8
    NSString * _tn; // +0x10
    NSString * _mode; // +0x18
    UIViewController * _viewController; // +0x20
    UPReachability * _internetReachability; // +0x28
    NSString * _networkMode; // +0x30
    NSString * _appServer; // +0x38
    NSString * _jarServer; // +0x40
    CGSize _toRotationSize; // +0x48
}
+ (id)sharedData;
- (id)initCommon;
- (void)reachabilityChanged:(id)arg1;
- (void)updateNetworkMode:(long long)arg1;
- (id)deviceInfo;
- (void).cxx_destruct;
- (id)schemeURL;
- (void)setSchemeURL:(id)arg1;
- (id)tn;
- (void)setTn:(id)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)internetReachability;
- (void)setInternetReachability:(id)arg1;
- (id)networkMode;
- (void)setNetworkMode:(id)arg1;
- (id)appServer;
- (void)setAppServer:(id)arg1;
- (id)jarServer;
- (void)setJarServer:(id)arg1;
- (CGSize)toRotationSize;
- (void)setToRotationSize:(CGSize)arg1;
@end

