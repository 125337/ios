@interface YtSDKKit : NSObject
{
    YtSDKKitConfig * _sdkConfig; // +0x8
    long long _sdkMode; // +0x10
    id /* block */ _processSucceedBlock; // +0x18
    id /* block */ _processFailedBlock; // +0x20
    id /* block */ _networkProcessBlock; // +0x28
}
+ (id)sharedInstance;
+ (void)clearInstance;
- (id)sdkVersion;
- (int)loadSDKConfigWith:(id)arg1 withUIConfig:(id)arg2;
- (id)getUIConfigBy:(long long)arg1;
- (id)getSDKConfigBy:(long long)arg1;
- (id /* block */)fetchNetworkProcessBlock;
- (void)registerNetworkProcessBlock:(id /* block */)arg1;
- (void)startProcessWithModeType:(long long)arg1 withProcessSucceedBlock:(id /* block */)arg2 withProcessFailedBlock:(id /* block */)arg3;
- (void)setCompareImage:(id)arg1;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)topViewController;
- (id)getTargetViewController;
- (id /* block */)viewControllerJumpBlock;
- (id)sdkConfig;
- (void)setSdkConfig:(id)arg1;
- (long long)sdkMode;
- (void)setSdkMode:(long long)arg1;
- (id /* block */)processSucceedBlock;
- (void)setProcessSucceedBlock:(id /* block */)arg1;
- (id /* block */)processFailedBlock;
- (void)setProcessFailedBlock:(id /* block */)arg1;
- (id /* block */)networkProcessBlock;
- (void)setNetworkProcessBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

