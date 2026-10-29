@interface WCPaySDKOpenOfflinePayControlLogic : WCPayControlLogic <WCPayWalletLockVerifyLogicDelegate, WCPayOfflineLogicDelegate>
{
    BOOL _bIsSuccOpenOfflinePay; // +0x38
    NSString * _appId; // +0x40
    NSString * _bundleId; // +0x48
}
- (id)initWithAppId:(id)arg1 bundleId:(id)arg2;
- (void)startLogic;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)walletLockVerifyCancel:(id)arg1;
- (void)onOfflinePayLogicStop:(BOOL)arg1;
- (void)stopLogic;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (BOOL)bIsSuccOpenOfflinePay;
- (void)setBIsSuccOpenOfflinePay:(BOOL)arg1;
- (void).cxx_destruct;
@end

