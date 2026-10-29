@interface WCPayJSOpenOfflinePayControlLogic : WCPayControlLogic <WCPayWalletLockVerifyLogicDelegate, WCPayOfflineLogicDelegate>
{
    id <WCPayJSOpenOfflinePayControlLogicDelegate> _logicDelegate; // +0x38
    NSDictionary * _paramDict; // +0x40
}
- (id)initWithJSParam:(id)arg1;
- (void)startLogic;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)onOfflinePayLogicStop:(BOOL)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)paramDict;
- (void)setParamDict:(id)arg1;
- (void).cxx_destruct;
@end

