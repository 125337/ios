@interface WCPayOfflinePayShareCardLogic : WCPayControlLogic <WCPayWalletLockVerifyLogicDelegate>
{
    int _patternLockLogicTag; // +0x38
}
- (void)startLogic;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)walletLockVerifyCancel:(id)arg1;
@end

