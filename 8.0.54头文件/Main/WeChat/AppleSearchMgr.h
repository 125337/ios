@interface AppleSearchMgr : MMUserService <MMUIViewControllerDelegate, WCPayWalletLockVerifyLogicDelegate, MMServiceProtocol>
{
    BOOL m_hasIndexSearch; // +0x8
    MMUIViewController * m_moreVc; // +0x10
    unsigned int m_patternLockLogicTag; // +0x18
}
- (void)openQuickPayOnVc:(id)arg1;
- (void)openQuickPay;
- (void)openFeature:(id)arg1;
- (id)openShake:(long long)arg1 isSupported:(BOOL)arg2 currentVc:(id)arg3;
- (id)genFeatureSearchItem:(id)arg1 title:(id)arg2 keywords:(id)arg3;
- (void)indexActivities;
- (id)getViewController;
- (void)walletLockVerifySuccess:(id)arg1;
- (void).cxx_destruct;
@end

