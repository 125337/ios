@interface WCPayWalletLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, WCPayTouchLockVerifyLogicDelegate>
{
    unsigned int _patternLockLogicTag; // +0x38
    unsigned long long _verifyScene; // +0x40
    id <WCPayWalletLockVerifyLogicDelegate> _delegate; // +0x48
    WCPayWalletLockReportCgi * _walletLockReportCgi; // +0x50
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)startKindaTouchLockVerify;
- (void)startKindaPatternLockVerify;
- (void)reportTryToUnlockWalletLock:(BOOL)arg1;
- (void)reportUnlockWalletLockSuccess:(BOOL)arg1;
- (BOOL)isInValidDuration;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (BOOL)needBlockLeftBarbuttonItemInEnteranceScene;
- (void)onPatternLockErrorOutOfLimit;
- (void)touchLockVerifySuccess:(id)arg1;
- (BOOL)needBlockUntilVerified:(id)arg1;
- (void)onPatternLockToPwdVerifyCancel;
- (void)onPatternLockToPwdVerifyResult:(BOOL)arg1;
- (void)onPatternLockVerifyResult:(BOOL)arg1;
- (void)touchLockVerifyCancel:(id)arg1;
- (void)reportTouchLockVerifyResult:(BOOL)arg1;
- (void)reportTouchLockToPwdVerifyResult:(BOOL)arg1;
- (void)reportTouchLockToPwdVerifyCancel;
- (void)realtimeReportWalletLock:(unsigned long long)arg1 verifyType:(unsigned long long)arg2 isVerifySuccess:(BOOL)arg3 failReason:(unsigned long long)arg4;
- (unsigned long long)verifyScene;
- (void)setVerifyScene:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)patternLockLogicTag;
- (void)setPatternLockLogicTag:(unsigned int)arg1;
- (id)walletLockReportCgi;
- (void)setWalletLockReportCgi:(id)arg1;
- (void).cxx_destruct;
@end
