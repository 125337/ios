@interface WxpayKitModuleInfo : NSObject
{
    BOOL _ready; // +0x8
    BOOL _capabilitiesSealed; // +0x9
    long long _apiVersion; // +0x10
    NSString * _runtimeVersion; // +0x18
    NSString * _payDebugPackageVersion; // +0x20
}
- (long long)apiVersion;
- (void)setApiVersion:(long long)arg1;
- (id)runtimeVersion;
- (void)setRuntimeVersion:(id)arg1;
- (id)payDebugPackageVersion;
- (void)setPayDebugPackageVersion:(id)arg1;
- (BOOL)isReady;
- (void)setReady:(BOOL)arg1;
- (BOOL)capabilitiesSealed;
- (void)setCapabilitiesSealed:(BOOL)arg1;
- (void).cxx_destruct;
@end
