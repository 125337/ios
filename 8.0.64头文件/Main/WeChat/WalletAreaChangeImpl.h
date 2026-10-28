@interface WalletAreaChangeImpl : NSObject <WCPayLogicMgrExt, MMUseCaseCallback>
{
    long long _walletAreaChangeInvokeScene; // +0x8
    NSString * _succLiteappInfo; // +0x10
    LiteAppDynamicModuleCallback * _callback; // +0x18
}
- (void)changeWalletAreaFromMainlandToHK:(id)arg1 resultCallback:(id)arg2;
- (void)OnSetUserWallet:(id)arg1;
- (void)ChangeUserWalletUnknownFail;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnWalletAreaChangeNotifyWithRet:(BOOL)arg1;
- (void)call:(id)arg1;
- (long long)walletAreaChangeInvokeScene;
- (void)setWalletAreaChangeInvokeScene:(long long)arg1;
- (id)succLiteappInfo;
- (void)setSuccLiteappInfo:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
